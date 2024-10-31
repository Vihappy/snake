#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
   

    while (true)
    {
        auto can = Canvas(300, 200);
        /*can.DrawPointCircle(50, 50, 7);
        can.DrawPointCircle(90, 50, 7);
        can.DrawBlockLine(35, 43, 110, 43);
        can.DrawBlockLine(35, 43, 35, 35);
        can.DrawBlockLine(35, 35, 110, 35);
        can.DrawBlockLine(110, 43, 110, 35);*/
        can.DrawPointCircle(frame+50, 50, 7);
        can.DrawPointCircle(frame + 90, 50, 7);
        can.DrawBlockLine(frame+35, 43,frame+ 110, 43);
        can.DrawBlockLine(frame+35, 43, frame+35, 35);
        can.DrawBlockLine(frame+35, 35, frame+110, 35);
        can.DrawBlockLine(frame+110, 43, frame+110, 35);

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        
        Element lienzo = bgcolor(Color::Blue,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}