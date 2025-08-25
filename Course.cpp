#include <iostream>
using namespace std;

class Course {
private:
    string name;
    int credits;
public:
    Course(string n, int c) {
        name = n; credits = c;
    }
    ~Course() {}
    void display() {
        cout << "Course: " << name << ", Credits: " << credits << endl;
    }
};

int main() {
    Course c1("OOP", 3);
    c1.display();
    return 0;
}
