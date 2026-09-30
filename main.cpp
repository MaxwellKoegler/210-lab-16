//maxwell koegler | 9/29/26 | lab 16 | comsc 210

#include <iostream>

using namespace std;

class color { //this is the color class
private:
    int red;
    int green;
    int blue;
public: //these are all the constructor functions

    color() { //default constructor
        red = 0;
        green = 0;
        blue = 0;
    }

    color(int r, int g, int b) { //complete constructor
        red = r;
        green = g;
        blue = b;
    }

    color(int r, int g) { //partial constructor
        red = r;
        green = g;
        blue = 0;
    }

    void setRed(int r) { //getter and setter functions 
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
    color color1 = color(11,1,12);
    color color2 = color(10,10,10);
    color color3 = color(67,67);
    color color4 = color(3456,13450,0);
    color color5 = color();

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