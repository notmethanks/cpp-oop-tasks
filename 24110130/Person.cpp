#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n; age = a;
    }
    ~Person() {}
    bool isAdult() { return age >= 18; }
    void greet() {
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Person p1("Le Thi D", 20);
    p1.greet();
    cout << "Is adult? " << (p1.isAdult() ? "Yes" : "No") << endl;
    return 0;
}
