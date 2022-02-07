#include <iostream>
#include <string>

using namespace std;

class Draw_Wall
{
public:
    string wall = "...";

    void draw(int height_of_wall)
    {
    }
};
int main()
{
    Draw_Wall backGround;
    backGround.draw(4);
    backGround.draw(8);
    backGround.draw(3);
}
