#include <iostream>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
void Setup()
{
    gameOver = false;
}
void Draw()
{

}
void Input()
{

}
void Logic()
{

}
int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        // Sleep(10); sleep(10);
    }
    return 0;
}