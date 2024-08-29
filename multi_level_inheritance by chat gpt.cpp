#include<iostream>
#include<string>
using namespace std;

class person {
protected:
    int id;
    string name, address;

public:
    person() {
        id = 0;
        name = "";
        address = "";
    }

    void input() {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your id: ";
        cin >> id;
        cin.ignore(); // to consume the newline character left in the buffer
        cout << "Enter your address: ";
        getline(cin, address);
    }

    void show() {
        cout << "Your name is: " << name << "\n";
        cout << "Your id is: " << id << "\n";
        cout << "Your address is: " << address << "\n";
    }
};

class student : public person {
private:
    int rno;
    int marks;
public:
    student() : person() {
        rno = 0;
        marks = 0;
    }

    void input()  {
        person::input();
        cout << "Enter your roll number: ";
        cin >> rno;
        cout << "Enter your marks: ";
        cin >> marks;
    }

    void show() override {
        person::show();
        cout << "Your roll no is: " << rno << "\n";
        cout << "Your marks are: " << marks << "\n";
    }
};

class scholarship {
private:
    string scholarship_name;
    int amount;
public:
    scholarship() {
        scholarship_name = "";
        amount = 0;
    }

    void input() {
        cout << "Enter the name of your scholarship: ";
        getline(cin, scholarship_name);
        cout << "Enter the amount of your scholarship: ";
        cin >> amount;
    }

    void show() {
        cout << "Your scholarship name is: " << scholarship_name << "\n";
        cout << "Your amount of scholarship is: " << amount << "\n";
    }
};

int main() {
    scholarship s;
    s.input();
    cout << endl;
    s.show();
}
