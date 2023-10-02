#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#define WINDOW_SIZE 400

using namespace std;

string rows[9] = {"-", "-", "-","-", "-", "-","-", "-", "-"};

int getBoardPosition(int position) {
    int windowThird = WINDOW_SIZE / 3;

    for (int i = 1; i < 4; ++i) {
        if (position < windowThird*i) return i;
    }
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
            int posX = 200;
            int posY = WINDOW_SIZE / ceil(i/3);

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
            if (event.type == SDL_QUIT) gameOpen = false;
            if (event.type == SDL_MOUSEBUTTONUP) {
                int mouseX;
                int mouseY;
                SDL_GetMouseState(&mouseX, &mouseY);

                int column = getBoardPosition(mouseX);
                int row = getBoardPosition(mouseY);

                int pos = (row - 1) * 3 + column;

                rows[pos-1] = "X";
                render(renderer, background);
            }

            render(renderer, background);
        }
    }
}