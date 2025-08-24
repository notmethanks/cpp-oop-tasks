#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string color;
    int year;
public:
    Car(string b, string c, int y) {
        brand = b;
        color = c;
        year = y;
    }
    ~Car() {
        cout << "Car " << brand << " destroyed.\n";
    }
    void display() {
        cout << "Brand: " << brand << ", Color: " << color << ", Year: " << year << endl;
    }
};

int main() {
    Car c1("Toyota", "Red", 2020);
    c1.display();
    return 0;
}
