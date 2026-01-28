#include "GUI-PPP2/Simple_window.h"
#include "GUI-PPP2/Graph.h"

int main()
{
    using namespace Graph_lib;

    Simple_window win{Point{100,100}, 600, 400, "PPP GUI"};
    win.wait_for_button();
}

