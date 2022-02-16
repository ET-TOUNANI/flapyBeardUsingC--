#include <iostream>
#include <string>
#include <array>
#include <cmath>

// using namespace std;

// class Draw_Wall
// {
// public:
//     string wall = "...";

//     void draw(int height_of_wall)
//     {
//     }
// };
// int main()
// {
//     int gd = DETECT, gm;

//     // initgraph initializes the graphics system
//     // by loading a graphics driver from disk
//     initgraph(&gd, &gm, "");

//     // line for x1, y1, x2, y2
//     line(150, 150, 450, 150);

//     Draw_Wall backGround;
//     backGround.draw(4);
//     backGround.draw(8);
//     backGround.draw(3);
// }

class Ansi_t // use ansi features of gnome-terminal
{
    // note: Ubuntu 15.10 gnome-terminal ansi term cursor locations
    // are 1-based with origin 1,1 at top left corner

    enum ANSI : char
    {
        ESC = 27
    };

public:
    static inline std::string clrscr(void)
    {
        std::stringstream ss;
        ss << static_cast<char>(ESC) << "[H"   // home
           << static_cast<char>(ESC) << "[2J"; // clrbos
        return (ss.str());
    }

    //              r/c are 0 based------v------v------0 based
    static inline std::string gotoRC(int r, int c)
    {
        std::stringstream ss;
        // Note: row/col of GameOfLife_t is 0 based (as in C++)
        ss << static_cast<char>(ESC) << "["
           << (r + 1) << ';' << (c + 1) << 'H';
        // xy of ansi terminal is 1 based -------^^--------------^^
        return (ss.str());
    }

    // tbr - add more ansi functions as needed

}; // Ansi_t