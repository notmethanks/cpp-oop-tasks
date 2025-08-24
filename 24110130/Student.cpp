#include <iostream>
using namespace std;

class Student {
private:
    string name;
    double score;
public:
    Student(string n, double s) {
        name = n;
        score = s;
    }
    ~Student() {}
    string getRank() {
        if(score >= 8) return "Excellent";
        else if(score >= 6.5) return "Good";
        else if(score >= 5) return "Average";
        return "Poor";
    }
    void display() {
        cout << "Name: " << name << ", Score: " << score 
             << ", Rank: " << getRank() << endl;
    }
};

int main() {
    Student s1("Nguyen Van A", 8.2);
    s1.display();
    return 0;
}
