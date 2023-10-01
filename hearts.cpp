#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>

using namespace std;

int ballX = 0;
int ballY = 0;

vector<SDL_Rect> rects;
int main(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow("Herzen", 200, 200, 400, 400, SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    SDL_Texture *texture = IMG_LoadTexture(renderer, "res/img/heart.png");

    SDL_Rect src;
    src.x = ballX;
    src.y = ballY;

    SDL_QueryTexture(texture, nullptr, nullptr, &src.w, &src.h);

    bool gameRunning = true;
    while (gameRunning) {
        SDL_Rect dist;

        int mouseX;
        int mouseY;

        SDL_GetMouseState(&mouseX,&mouseY);

        dist.x = mouseX-32;
        dist.y = mouseY-32;

        dist.w = 64;
        dist.h = 64;

        SDL_Event event;

        while (SDL_PollEvent(&event)) {

            if (event.type == SDL_QUIT) {
                gameRunning = false;
            }

            if (event.type == SDL_KEYDOWN) {
                switch (event.key.keysym.sym) {
                    case SDLK_w: case SDLK_UP:
                        ballY-=3;
                        break;
                    case SDLK_s: case SDLK_DOWN:
                        ballY+=3;
                        break;
                    case SDLK_a: case SDLK_LEFT:
                        ballX-=3;
                        break;
                    case SDLK_d: case SDLK_RIGHT:
                        ballX+=3;
                        break;
                }
            }

            if (event.type == SDL_MOUSEBUTTONDOWN) {
                SDL_Rect rect;
                int posX;
                int posY;
                SDL_GetMouseState(&posX, &posY);

                rect.x = posX-32;
                rect.y = posY-32;
                rect.w = 64;
                rect.h = 64;

                rects.push_back(rect);
            }

        }

        SDL_SetRenderDrawColor(renderer, 35,39,42, SDL_ALPHA_OPAQUE);
        SDL_RenderClear(renderer);

        for (auto i = rects.begin(); i !=  rects.end(); ++i) {
            SDL_RenderCopy(renderer, texture, &src, i.base());
        }

        SDL_RenderCopy(renderer, texture, &src, &dist);

        SDL_RenderPresent(renderer);
    }

    return 0;
}