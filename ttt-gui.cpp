#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#define WINDOW_SIZE 400

using namespace std;

int state = 0; // 0 = ingame, 1 = end

string rows[9] = {"-", "-", "-",
                  "-", "-", "-",
                  "-", "-", "-"};

bool playerWon(string character) {
    for (int i = 0; i < 9; i += 3) {
        if (rows[i] == character && rows[i + 1] == character && rows[i + 2] == character) return true;
    }

    for (int i = 0; i < 3; i++) {
        if (rows[i] == character && rows[i + 3] == character && rows[i + 6] == character) return true;
    }

    if (rows[0] == character && rows[4] == character && rows[8] == character) return true;
    if (rows[2] == character && rows[4] == character && rows[6] == character) return true;

    return false;
}

void generateOpponent() {
    int random = rand() % 10;

    if (rows[random] != "-") {
        generateOpponent();
        return;
    }

    rows[random] = "O";
}

int getBoardPosition(int position) {
    int windowThird = WINDOW_SIZE / 3;

    for (int i = 1; i < 4; ++i) {
        if (position < windowThird*i) return i;
    }
}

void renderEnd(SDL_Renderer *renderer) {
    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);
}

void render(SDL_Renderer *renderer, SDL_Texture *bg) {
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 35,39,42, SDL_ALPHA_OPAQUE);

    SDL_Rect src;
    src.x = 0;
    src.y = 0;
    SDL_QueryTexture(bg, nullptr, nullptr, &src.w, &src.h);

    SDL_Rect dist;
    dist.x = 0;
    dist.y = 0;
    dist.w = WINDOW_SIZE;
    dist.h = WINDOW_SIZE;
    SDL_Texture *oppTexture = IMG_LoadTexture(renderer, "res/img/heart.png");
    SDL_Texture *meTexture = IMG_LoadTexture(renderer, "res/img/heart-blue.png");

    SDL_RenderCopy(renderer, bg, &src, &dist);

    for (int i = 1; i < 10; ++i) {
        string row = rows[i-1];

        if (row != "-") {
            int posX = ((i - 1) % 3) * (WINDOW_SIZE / 3) + 32;
            int posY = ((i - 1) / 3) * (WINDOW_SIZE / 3) + 32;

            cout << posX << " " << posY << "\n";

            SDL_Rect srcO;
            srcO.x = 0;
            srcO.y = 0;
            SDL_QueryTexture(row == "X" ? meTexture : oppTexture, nullptr, nullptr, &srcO.w, &srcO.h);

            SDL_Rect distO;
            distO.x = posX;
            distO.y = posY;
            distO.w = 64;
            distO.h = 64;
            SDL_RenderCopy(renderer, row == "X" ? meTexture : oppTexture, &srcO, &distO);
        }

    }

    SDL_RenderPresent(renderer);
}

int main() {

    SDL_Window *window = SDL_CreateWindow("Tic Tac Toe", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                          WINDOW_SIZE, WINDOW_SIZE, SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);

    SDL_Texture *background = IMG_LoadTexture(renderer, "res/img/ttt-bg.png");

    bool gameOpen = true;
    while (gameOpen) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (playerWon("X") || playerWon("O")) state = 1;


            if (event.type == SDL_QUIT) gameOpen = false;
            if (event.type == SDL_MOUSEBUTTONUP) {
                int mouseX;
                int mouseY;
                SDL_GetMouseState(&mouseX, &mouseY);

                int column = getBoardPosition(mouseX);
                int row = getBoardPosition(mouseY);

                int pos = (row - 1) * 3 + column;

                if (rows[pos-1] == "-") {
                    rows[pos-1] = "X";
                    render(renderer, background);
                    SDL_Delay(500);
                    generateOpponent();
                }
            }

            if (state == 1) {
                renderEnd(renderer);
            } else {
                render(renderer, background);
            }
        }
    }
}