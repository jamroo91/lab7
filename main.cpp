#include <iostream>
#include <string>
using namespace std;

struct Student {
    string imie;
    string nazwisko;
    float ocena;
};

int main() {
    
    Student student1 = {"Jan", "Kowalski", 4};
    Student student2 = {"Anna", "Nowak", 4.5};
    Student student3 = {"Michał", "Kwiatkowski", 3};
    Student student4 = {"Ewa", "Lewandowska", 2};

    
    cout << "Dane studentów:\n";
    cout << student1.imie << " " << student1.nazwisko << " - ocena: " << student1.ocena << "\n";
    cout << student2.imie << " " << student2.nazwisko << " - ocena: " << student2.ocena << "\n";
    cout << student3.imie << " " << student3.nazwisko << " - ocena: " << student3.ocena << "\n";
    cout << student4.imie << " " << student4.nazwisko << " - ocena: " << student4.ocena << "\n";

    return 0;
}