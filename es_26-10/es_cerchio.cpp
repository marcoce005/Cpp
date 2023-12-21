#include <iostream>
#include <cmath>

#define pi 3.141593

using namespace std;

class cerchio {
    public:
        double r;

        cerchio() {}
        ~cerchio() {}

        double area() {return(pow(r, 2) * pi);}
        double circonferenza() {return(r * 2 * pi);}
};
class cilindro : public cerchio {
    public:
        double h;

        cilindro() {}
        ~cilindro() {}

        double area_cilindro() {return((2 * area()) + (circonferenza() * h));}
};

int main() {
    cilindro c;

    c.r = 4;
    c.h = 7;

    cout << "\nArea cerchio:\t" << c.area() << "\nCirconferenza cerchio:\t" << c.circonferenza() << "\nArea cilindro:\t" << c.area_cilindro();

    return 0;
}