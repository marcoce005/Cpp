#include <iostream>
#include <cmath>

using namespace std;

class rettangolo {
    protected:
        int b, h;

    public:
        rettangolo() {}
        ~rettangolo() {}

        void set(int x, int n) {
            switch (x)
            {
                case 0:
                    b = n;
                break;

                case 1:
                    h = n;
                break;
            }
        }

        int get(int x) {
            switch (x)
            {
                case 0:
                    return b;
                break;

                case 1:
                    return h;
                break;
            }
            return 0;
        }

        int area_R() {return(b * h);}
        int perimetro_R() {return((b + h) * 2);}
};

class triangolo : public rettangolo {
    public:
        triangolo() {}
        ~triangolo() {}

        int area_T() {return((b * h) / 2);}
        float perimetro_T() {return((b + h)  + (sqrt(pow(b, 2) + pow(h, 2))));}        
};

int main() {
    triangolo t;

    int v[2];

    cout << "\nInserire la base:\t";
    cin >> v[0];
    cout << "\nInserire l'altezza:\t";
    cin >> v[1];

    for (int i = 0; i < 2; i++) {t.set(i, v[i]);}
    
    cout << "\nArea del rettangolo:\t" << t.area_R() << "\nArea del triangolo:\t" << t.area_T() << "\n\nPerimetro del rettangolo:\t" << t.perimetro_R() << "\nPerimetro del triangolo:\t" << t.perimetro_T();

    return 0;
}