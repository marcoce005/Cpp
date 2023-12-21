#include <iostream>

using namespace std;

class dipendente {
    private:
        int salario;
    
    public:
        void setSalario(int s) {
            salario = s;
        }

        int getSalario() {return salario;}
};

int main() {
    
    dipendente myObj;

    int s;

    cout << "inserire il salario: ";
    cin >>  s;

    myObj.setSalario(s);

    cout << "Il tuo salario e' di: " << myObj.getSalario() << " euro." << endl;
    
    return 0;
}