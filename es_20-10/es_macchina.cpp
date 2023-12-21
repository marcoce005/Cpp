#include<iostream>
#include<cmath>

using namespace std;

class macchina {
    protected:    
        int batteria = 100;

    public:
        macchina() {}
        ~macchina() {}

        int get() {return batteria;}
        void set(int n) {batteria = n;}

        void scarica(int spostamento = 7) {
            if (spostamento >= 5) {
                int x = spostamento, i = 0;
                
                x -= 5;
                while (x > 0) {
                    i++;
                    x -= 5;
                }

                batteria -= (spostamento - i);
            }
            else if (spostamento < 0) {spostamento = abs(spostamento);}
            else {batteria -= spostamento;}
        }
};
class polizia : public macchina {
    private:
        bool sirena;

    public:
        polizia() {}
        ~polizia() {}

        
};

int main() {
    macchina m;
    m.scarica();
    return 0;
}