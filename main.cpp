//maxwell koegler | 9/29/26 | lab 14 | comsc 210

#include <iostream>

using namespace std;

class color { //this is the color class
private:
    int red;
    int green;
    int blue;
public: //these are all the getter and setter functions
    void setRed(int r) {
        red = r;
    }
    int getRed() {
        return red;
    }
    void setGreen(int g) {
        green = g;
    }
    int getGreen() {
        return green;
    }
    void setBlue(int b) {
        blue = b;
    }
    int getBlue() {
        return blue;
    }

    void print() { //this outputs all our private funcs
        cout << "Red: " << red << endl;
        cout << "Green: " << green << endl;
        cout << "Blue: " << blue << endl;
    }
};

int main() {
    color color1 = color();
    color color2 = color();
    color color3 = color();
    color color4 = color();
    color color5 = color();

    color1.setRed(11);
    color1.setGreen(1);
    color1.setBlue(12);

    color2.setRed(10);
    color2.setGreen(10);
    color2.setBlue(10);

    color3.setRed(67);
    color3.setGreen(67);
    color3.setBlue(67);

    color4.setRed(3456);
    color4.setGreen(13450);
    color4.setBlue(176576);

    color5.setRed(0);
    color5.setGreen(0);
    color5.setBlue(0);
    cout << "   Color 1: " << endl;
    color1.print();
    cout << "    Color 2: " << endl;
    color2.print();
    cout << "    Color 3: " << endl;
    color3.print();
    cout << "    Color 4: " << endl;
    color4.print();
    cout << "    Color 5: " << endl;
    color5.print();
}