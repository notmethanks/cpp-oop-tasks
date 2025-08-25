#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;
public:
    Book(string t, string a, double p) {
        title = t; author = a; price = p;
    }
    ~Book() {}
    double discount(double percent) {
        return price * (1 - percent/100);
    }
    void display() {
        cout << "Title: " << title << ", Author: " << author 
             << ", Price: " << price << endl;
    }
};

int main() {
    Book b1("OOP in C++", "Bjarne Stroustrup", 200);
    b1.display();
    cout << "Discounted (10%): " << b1.discount(10) << endl;
    return 0;
}
