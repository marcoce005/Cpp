#include <iostream>
#include <string>

#define nPartite 3

using namespace std;

class calciatore {
    protected:
        string name, surname;

    public:
        calciatore() {
            name = "";
            surname = "";
        }
        ~calciatore() {}
};
class goal : public calciatore {
    private: 
        int nGoal[nPartite];

    public:
        goal() {
            for (int i = 0; i < nPartite; i++) {nGoal[i] = 0;}
        }
        ~goal() {}

        void setGoal(int valore, int i) {nGoal[i] = valore;}
        int getGoal(int i) {return(nGoal[i]);}
};
class ammunizioni : public calciatore {
    private:
        int nAmmunizioni[nPartite];

    public:
        ammunizioni() {
            for (int i = 0; i < nPartite; i++) {nAmmunizioni[i] = 0;}
        }
        ~ammunizioni() {}

        void set(int valore, string x, int i) {
            switch (valore)
            {
                case 0:
                    name = x;
                break;

                case 1:
                    surname = x;
                break;

                case 2:
                    nAmmunizioni[i] = stoi(x);
                break;
            }
        }
        string get(int valore, int i) {
            switch (valore)
            {
                case 0:
                    return name;
                break;

                case 1:
                    return surname;
                break;

                case 2:
                    return(to_string(nAmmunizioni[i]));
                break;
            }
            return 0;
        }
};

goal g;
ammunizioni amm;

int main() {
    string a, b;
    cout << "\nInserire il nome del calciatore:\t";
    cin >> a;
    cout << "\nInserire il cognome del calciatore:\t";
    cin >> b;
    
    amm.set(0, a, 0);
    amm.set(1, b, 0);

    string n a;
    for (int i = 0; i < nPartite; i++) {
        cout << "\nPartita " << i+1 << endl << "Goal:\t";
        cin >> n;
        cout << "Ammunizioni:\t";
        cin >> a;
        amm.set(2, )
    }

    return 0;
}