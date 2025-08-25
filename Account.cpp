#include <iostream>
using namespace std;

class Account {
private:
    string owner;
    double balance;
public:
    Account(string o, double b) {
        owner = o; balance = b;
    }
    ~Account() {}
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if(amount > balance) cout << "Insufficient funds!\n";
        else balance -= amount;
    }
    void display() {
        cout << "Owner: " << owner << ", Balance: " << balance << endl;
    }
};

int main() {
    Account a1("Nguyen Van C", 1000);
    a1.display();
    a1.deposit(500);
    a1.withdraw(2000);
    a1.withdraw(800);
    a1.display();
    return 0;
}
