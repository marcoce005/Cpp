#include <iostream>
#include <cmath>

using namespace std;

class rettangolo {
    protected:
        int b, h;

    public:
        rettangolo() {}
        ~rettangolo() {}

        void set_b(int n) {b = n;}
        void set_h(int n) {h = n;}

        int get_b() {return b;}
        int get_h() {return h;}

        int area() {return(b * h);}
        int perimetro() {return((b + h) * 2);}
};
class quadrato : public rettangolo {
    private:
        int l;

    public:
        quadrato() {}
        ~quadrato() {}

        void set_l(int n) {l = n;}

        int get_l() {return l;}

        int area() {return(pow(l, 2));}
        int perimetro() {return(l * 4);}
};

int main() {
    rettangolo r;
    quadrato q;

    int v[3];
    cout << "\nInserire la base del rettangolo:\t";
    cin >> v[0];
    cout << "\nInserire l'altezza del rettangolo:\t";
    cin >> v[1];
    cout << "\nInserire il lato del quadrato:\t";
    cin >> v[2];
    
    r.set_b(v[0]);
    r.set_h(v[1]);
    q.set_l(v[2]);

    cout << "\nArea rettangolo:\t" << r.area() << "\nPerimetro rettangolo:\t" << r.perimetro();
    cout << "\nArea quadrato:\t" << q.area() << "\nPerimetro quadrato:\t" << q.perimetro();

    return 0;
}