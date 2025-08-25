#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;
public:
    Rectangle(double w, double h) {
        if(w < 0 || h < 0) { w = h = 0; }
        width = w; height = h;
    }
    ~Rectangle() {}
    double area() { return width * height; }
    double perimeter() { return 2*(width+height); }
    void display() {
        cout << "Rectangle (" << width << " x " << height 
             << ") Area=" << area() << ", Perimeter=" << perimeter() << endl;
    }
};

int main() {
    Rectangle r1(4, 5);
    r1.display();
    return 0;
}
