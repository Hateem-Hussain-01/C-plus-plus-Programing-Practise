#include<iostream>
#include<cstring> // Include cstring for strcpy
using namespace std;

class TV {
private:
    char brandName[20];
    char carName[20];
    float carModel;

public:
    TV(const char brand[20], const char car[20], float model);
    void change(const char brand[20], const char car[20], float model);
    void display();
};

TV::TV(const char brand[20], const char car[20], float model) {
    strcpy(brandName, brand);
    strcpy(carName, car);
    carModel = model;
}

void TV::change(const char brand[20], const char car[20], float model) {
    strcpy(brandName, brand);
    strcpy(carName, car);
    carModel = model;
}

void TV::display() {
    cout << "Displaying info about product\n";
    cout << "Name of brand is: " << brandName << "\n";
    cout << "Name of car is: " << carName << "\n";
    cout << "Year of model is: " << carModel << "\n";
}

int main() {
    TV test("Bugatti", "Bugatti C1 Sports", 2024);
    test.display();

    cout << "Displaying object details after changing\n";
    test.change("Ferrari", "Ferrari C33", 2025);
    test.display();

    return 0;
}
