#include"raylib.h"
#define CREEN_HEIGHT 400
#define CREEN_WIDTH 600
#define FPS 10

int main(void){
    int x = 0;
    SetTargetFPS(FPS);
    InitWindow(CREEN_WIDTH, CREEN_HEIGHT, "Text");

    while(!WindowShouldClose()){
        BeginDrawing();

            ClearBackground(BLACK);
            DrawRectangle(0, 360 + x, 130, 40, RED);
            DrawRectangle(0, 320 + x, 130, 40, WHITE);
            DrawRectangle(0, 280 + x, 130, 40, RED);
            DrawRectangle(0, 240 + x, 130, 40, WHITE);
            DrawRectangle(0, 200 + x, 130, 40, RED);
            DrawRectangle(0, 160 + x, 130, 40, WHITE);
            DrawRectangle(0, 120 + x, 130, 40, RED);
            DrawRectangle(0, 80 + x, 130, 40, WHITE);
            DrawRectangle(0, 40 + x, 130, 40, RED);
            DrawRectangle(0, 0 + x, 130, 40, WHITE);
            DrawRectangle(0, -40 + x, 130, 40, RED);
            DrawRectangle(0, -80 + x, 130, 40, WHITE);
            DrawRectangle(0, -120 + x, 130, 40, RED);
            DrawRectangle(0, -160 + x, 130, 40, WHITE);
            DrawRectangle(0, -200 + x, 130, 40, RED);
            DrawRectangle(0, -240 + x,130, 40, WHITE);
            DrawRectangle(0, -280 + x, 130, 40, RED);
            DrawRectangle(0, -320 + x, 130, 40, WHITE);
            DrawRectangle(0, -360 + x, 130, 40, RED);
            DrawRectangle(0, -400 + x, 130, 40, WHITE);

           




            DrawRectangle(470, 360 + x, 130, 40, RED);
            DrawRectangle(470, 320 + x, 130, 40, WHITE);
            DrawRectangle(470, 280 + x, 130, 40, RED);
            DrawRectangle(470, 240 + x, 130, 40, WHITE);
            DrawRectangle(470, 200 + x, 130, 40, RED);
            DrawRectangle(470, 160 + x, 130, 40, WHITE);
            DrawRectangle(470, 120 + x, 130, 40, RED);
            DrawRectangle(470, 80 + x, 130, 40, WHITE);
            DrawRectangle(470, 40 + x, 130, 40, RED);
            DrawRectangle(470, 0 + x, 130, 40, WHITE);
            DrawRectangle(470, -40 + x, 130, 40, RED);
            DrawRectangle(470, -80 + x, 130, 40, WHITE);
            DrawRectangle(470, -120 + x, 130, 40, RED);
            DrawRectangle(470, -160 + x, 130, 40, WHITE);
            DrawRectangle(470, -200 + x, 130, 40, RED);
            DrawRectangle(470, -240 + x,130, 40, WHITE);
            DrawRectangle(470, -280 + x, 130, 40, RED);
            DrawRectangle(470, -320 + x, 130, 40, WHITE);
            DrawRectangle(470, -360 + x, 130, 40, RED);
            DrawRectangle(470, -400 + x, 130, 40, WHITE);
            
             DrawRectangle(285, 350, 30, 20, GREEN);
            

             DrawRectangle(400, 360 + x, 60, 32, RED);
            DrawRectangle(370, 320 + x, 60, 32, BLUE);
            DrawRectangle(160, 280 + x, 60, 32, GREEN);
            DrawRectangle(230, 240 + x, 60, 32, YELLOW);
            DrawRectangle(300, 200 + x, 60, 32, RED);
            DrawRectangle(200, 160 + x, 60, 32, YELLOW);
            DrawRectangle(380, 120 + x, 60, 32, RED);
            DrawRectangle(310, 80 + x, 60, 32, WHITE);
            DrawRectangle(170, 40 + x, 60, 32, RED);
            DrawRectangle(355, 0 + x, 60, 32, YELLOW);
            DrawRectangle(245, -40 + x, 60, 32, RED);
            DrawRectangle(330, -80 + x, 60, 32, GREEN);
            DrawRectangle(230, -120 + x, 60, 32, RED);
            DrawRectangle(188, -160 + x, 60, 32, WHITE);
            DrawRectangle(250, -200 + x, 60, 32, RED);
            DrawRectangle(310, -240 + x,60, 32, BLUE);
            DrawRectangle(249, -280 + x, 60, 32, RED);
            DrawRectangle(367, -340 + x, 60, 32, WHITE);
            DrawRectangle(278, -360 + x, 60, 32, RED);
            DrawRectangle(389, -400 + x, 60, 32, WHITE);



        EndDrawing();
        x++;
    }

    CloseWindow();
}