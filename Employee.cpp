#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;
public:
    Employee(string n, double s) {
        name = n; salary = s;
    }
    ~Employee() {}
    void increaseSalary(double percent) {
        salary += salary * percent/100;
    }
    void display() {
        cout << "Employee: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e1("Tran Van B", 5000);
    e1.display();
    e1.increaseSalary(10);
    e1.display();
    return 0;
}
