#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void square (float side) {
    cout << "Enter the side of the square: ";
    cin >> side;
    
    cout << "The area is " << (pow (side, 2)) << " sq. units";
}

void rectangle (float length, float width) {
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    
    cout << "The area is " << (length * width) << " sq. units";
}

void triangle (float height, float base) {
    cout << "Enter the base and width of the height: ";
    cin >> height >> base;
    
    cout << "The area is " << ((height / base) / 2) << " sq. units";
}

void circle (float radius) {
    cout << "Enter the radius: ";
    cin >> radius;
    
    cout << "The area is " << (3.14159 * (pow (radius, 2))) << " sq. units";
}

int main()
{
    float side, length, width, height, base, radius;
    int choice;
    
    menu:
    cout << "*****************************************" << endl; //41 
    cout << setw(22) << "MENU" << endl;
    cout << "*****************************************" << endl; //41  
    
    cout << "[1] - Area of Square" << endl;
    cout << "[2] - Area of Rectangle" << endl;
    cout << "[3] - Area of Triangle" << endl;
    cout << "[4] - Area of Circle" << endl;
    cout << "[5] - Exit" << endl;
    
    cout << "-----------------------------------------" << endl; //41
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "-----------------------------------------" << endl; //41
    
    switch (choice) {
        case 1: cout << setw(22) << "AREA OF SQUARE\n";
                cout << "-----------------------------------------" << endl; //41
                square(side);
                break;
        case 2: cout << setw(22) << "AREA OF RECTANGLE\n";
                cout << "-----------------------------------------" << endl; //41
                rectangle(length, width);
                break;
        case 3: cout << setw(22) << "AREA OF TRIANGLE\n";
                cout << "-----------------------------------------" << endl; //41
                triangle(height, base);
                break;
        case 4: cout << setw(22) << "AREA OF CIRCLE\n";
                cout << "-----------------------------------------" << endl; //41
                circle(radius);
                break;
        default: cout << "Invalid choice. Try again.";
                 goto menu;
                 break;
    }
    return 0;
}
