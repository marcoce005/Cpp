#include <iostream>

using namespace std;

class Car { 
    public:
        string brand;
        string model;       // Attributi
        int year;
    
    Car(string b, string m, int y) {            // costruttore
        brand = b;
        model = m;      // parametri
        year = y;
    }
};

int main() {
    
    Car carObj1("Ford", "Focus RS", 2020);
    Car carObj2("Honda", "Civic Type-R", 2021);
    
    cout << "\nLe due macchine sono: \n -- " << carObj1.brand << "\t" << carObj1.model << "\t" << carObj1.year;
    cout << "\n -- " << carObj2.brand << "\t" << carObj2.model << "\t" << carObj2.year << "\n";

    return 0;
}