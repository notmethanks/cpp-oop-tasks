#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string color;
    int year;

public:
    // Constructor
    Car(string b, string c, int y) {
        brand = b;
        color = c;
        year = y;
    }

    // Destructor
    ~Car() {
        cout << "Car " << brand << " destroyed.\n";
    }

    // Setters
    void setBrand(string b) {
        brand = b;
    }

    void setYear(int y) {
        if (y > 1885) // năm sản xuất xe hơi đầu tiên ~1886
            year = y;
        else
            cout << "Invalid year!\n";
    }

    void setColor(string c) {
        color = c;
    }

    // Getters (nếu muốn lấy thông tin riêng lẻ)
    string getBrand() { return brand; }
    int getYear() { return year; }
    string getColor() { return color; }

    // Hiển thị thông tin
    void display() {
        cout << "Brand: " << brand
             << ", Color: " << color
             << ", Year: " << year << endl;
    }
};

int main() {
    Car c1("Toyota", "Red", 2020);
    c1.display();

    // Dùng setter để thay đổi thông tin
    c1.setBrand("Honda");
    c1.setYear(2022);
    c1.setColor("Blue");

    cout << "After update: ";
    c1.display();

    return 0;
}
