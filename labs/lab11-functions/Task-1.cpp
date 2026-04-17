#include <iostream>
using namespace std;


float area(float l, float w) {
    return l * w;
}


float area(float b, float h, int) {
    return 0.5 * b * h;
}


double area(double r, double h) {
    const double pi = 3.1416;
    return 2 * pi * r * (r + h);
}

int main() {

    // Rectangle
    cout << "Area of Rectangle = " << area(7.0f, 10.0f) << endl;

    // Triangle (notice third argument just to overload)
    cout << "Area of Triangle = " << area(12.0f, 20.0f, 0) << endl;

    // Cylinder (double values to call correct function)
    cout << "Area of Cylinder = " << area(3.0, 7.0) << endl;

    return 0;
}