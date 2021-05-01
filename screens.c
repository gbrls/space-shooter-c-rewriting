#include <raylib.h>
#define TRUE 1

int StartScreen(int screenWidth, int screenHeight)
{
    int status = -1;
    char title[] = "Space Shooter";
    Font defaultFont = GetFontDefault();
    int titleFontSize = 80;
    int titleWidth = MeasureText(title, titleFontSize);
    int xTitle = (screenWidth - titleWidth)/2;
    int yTitle = (screenHeight - 200)/2;

    while(TRUE)
    {
        if(WindowShouldClose()){
            status = 0;
            break;
        }
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("Space Shooter", xTitle, yTitle, titleFontSize, WHITE);
        EndDrawing();
    }

    return status;
}
