#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Triangle {
public:
    void triangle() {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle {
public:
    void isosceles() {
        cout << "I am an isosceles triangle\n";
    }
};

// Define the Equilateral class that inherits from Isosceles
class Equilateral : public Isosceles {
public:
    void equilateral() {
        cout << "I am an equilateral triangle\n";
    }
};

int main() {
    Equilateral eqr;
    eqr.equilateral();  // Calling the method from Equilateral class
    eqr.isosceles();    // Calling the inherited method from Isosceles class
    eqr.triangle();     // Calling the inherited method from Triangle class
    return 0;
}
