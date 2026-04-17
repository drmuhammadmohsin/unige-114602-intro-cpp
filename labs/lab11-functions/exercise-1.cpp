#include<iostream>
using namespace std;

// Rectangle area 
float areaRectangle(float l, float w) {
    return l * w;
}

// Triangle area 
float areaTriangle(float b, float h) {
    return 0.5 * b * h;
}

// Cylinder area
float areaCylinder(float r, float h) {
    float pi = 3.14;
    return 2 * pi * r * (r + h);
}

int main() {
    // Rectangle
    cout << "Area of Rectangle = " << areaRectangle(7, 10) << endl;
    
    // Triangle
    cout << "Area of Triangle = " << areaTriangle(12, 20) << endl;
    
    // Cylinder
    cout << "Area of Cylinder = " << areaCylinder(3, 7) << endl;
    
    return 0;
}
