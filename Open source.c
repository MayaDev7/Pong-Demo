#include "raylib.h"

int main(void)
{
    int y = 150;
    int dir = 0;
    int BallX = 390;
    int BallY = 200;
    int BotScore = 0;
    SetTargetFPS(60);
    InitWindow(800, 450, "PONG");
    
    while(!WindowShouldClose()) {
        if (IsKeyDown(KEY_W)) {
            y = y - 3;
        }
        if (IsKeyDown(KEY_S)) {
            y = y + 3;
        }
        if (dir == 0) {
            BallY = BallY - 1;
            BallX = BallX + 3;
        }
        if (BallX > 730) {
            dir = 1;
        } 
        if (dir == 1) {
            BallY = BallY + 1;
            BallX = BallX - 3;
        }
        if (dir == 1) {
            if (BallX < 50) {
                if (BallY < y) {
                    dir = 0;
                }else{
                    DrawText("GAME OVER!", 100, 100, 100, WHITE);
            
        }}}
        //DrawText(atoi(BotScore)), 0, 0, 10, WHITE);
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle(30, y, 20, 130, WHITE);
        DrawRectangle(750, BallY, 20, 130, WHITE);
        DrawRectangle(BallX, BallY + 50, 20, 20, WHITE);
        EndDrawing();    
}
CloseWindow();
return 0;
}