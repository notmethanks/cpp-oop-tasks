#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
public:
    Circle(double r) {
        if(r < 0) r = 0;
        radius = r;
    }
    ~Circle() {}
    double area() { return M_PI * radius * radius; }
    double circumference() { return 2*M_PI*radius; }
    void display() {
        cout << "Circle radius=" << radius 
             << ", Area=" << area() 
             << ", Circumference=" << circumference() << endl;
    }
};

int main() {
    Circle c1(3);
    c1.display();
    return 0;
}
