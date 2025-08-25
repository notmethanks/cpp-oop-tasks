#include <iostream>
using namespace std;

class Laptop {
private:
    string brand;
    int ram;
public:
    Laptop(string b, int r) {
        brand = b; ram = r;
    }
    ~Laptop() {}
    void upgradeRAM(int more) {
        ram += more;
    }
    void display() {
        cout << "Laptop brand: " << brand << ", RAM: " << ram << "GB" << endl;
    }
};

int main() {
    Laptop l1("Dell", 8);
    l1.display();
    l1.upgradeRAM(8);
    l1.display();
    return 0;
}
