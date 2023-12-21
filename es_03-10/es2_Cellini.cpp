#include <iostream>

#define N 250
int n;

using namespace std;

class PC {
    private:
        int Codice;

    public:
        string Marca;
        string Modello;
        float Frequenza_CPU;
        int RAM;
        int SSD;
        float Inch_Monitor;
        int Anno;

        PC() {}

        void setCodice(int n) {Codice = n;}
        int getCodice() {return(Codice);}
};

PC pc[N];

void choose() {
    char c;
    cout << "\n\nInserire [r] per cercare il pc partendo dal codice\nInserire [+] per aggiungere un pc alla lista\nInserire [-] eliminare un pc dalla lista partendo dal codice\n..................";
    cin >> c;

    int x;
    switch (c)
    {
        case '+':
            n += 1;
            pc[n-1].setCodice(n-1);
            cout << "\nInserire la marca del " << n << "^ pc:\t";
            cin >> pc[n-1].Marca;
            cout << "Inserire il modello del " << n << "^ pc:\t";
            cin >> pc[n-1].Modello;
            cout << "Inserire la frequenza della cpu del " << n << "^ pc [con il punto NO VIRGOLA]:\t";
            cin >> pc[n-1].Frequenza_CPU;
            cout << "Inserire la dimesione della mem. ram del " << n << "^ pc:\t";
            cin >> pc[n-1].RAM;
            cout << "Inserire la dimesione della mem. di massa del " << n << "^ pc:\t";
            cin >> pc[n-1].SSD;
            cout << "Inserire le dimesioni del monitor del " << n << "^ pc [con il punto NO VIRGOLA]:\t";
            cin >> pc[n-1].Inch_Monitor;
            cout << "Inserire l'anno di acquisto del " << n << "^ pc:\t";
            cin >> pc[n-1].Anno;
        break;

        case '-': 
            cout << "\nInserire il codice del pc da eliminare nella lista:\t";
            cin >> x;
            pc[x].Marca = '/';
            pc[x].Modello = '/';
            pc[x].Frequenza_CPU = 0;
            pc[x].RAM = 0;
            pc[x].SSD = 0;
            pc[x].Inch_Monitor = 0;
            pc[x].Anno = 0;
        break;

        case 'r': 
            cout << "\nInserire il codice del pc da cercare nella lista:\t";
            cin >> x;
            cout << "\n\nInformazioni pc:\n\nCodice:\t\t" << pc[x].getCodice() << "\nMarca:\t\t" << pc[x].Marca << "\nModello:\t\t" << pc[x].Modello << "\nFrequenza della CPU:\t\t" << pc[x].Frequenza_CPU << " GHz\nMemoria RAM:\t\t" << pc[x].RAM << " GB\nMemoria di massa:\t\t" << pc[x].SSD << " GB\nDimesioni del monitor:\t\t" << pc[x].Inch_Monitor << " pollici\nAnno dell'acquisto:\t\t" << pc[x].Anno << endl;
        break;
        
        default: break;
    }
}

void PCins() {
    cout << "\nQuanti pc voglio inserire:\t";
    cin >> n;
}

void fill() {
    PCins();

    for (int i = 0; i < n; i++) {
        pc[i].setCodice(i);
        cout << "\nInserire la marca del " << i+1 << "^ pc:\t";
        cin >> pc[i].Marca;
        cout << "Inserire il modello del " << i+1 << "^ pc:\t";
        cin >> pc[i].Modello;
        cout << "Inserire la frequenza della cpu del " << i+1 << "^ pc [con il punto NO VIRGOLA]:\t";
        cin >> pc[i].Frequenza_CPU;
        cout << "Inserire la dimesione della mem. ram del " << i+1 << "^ pc:\t";
        cin >> pc[i].RAM;
        cout << "Inserire la dimesione della mem. di massa del " << i+1 << "^ pc:\t";
        cin >> pc[i].SSD;
        cout << "Inserire le dimesioni del monitor del " << i+1 << "^ pc [con il punto NO VIRGOLA]:\t";
        cin >> pc[i].Inch_Monitor;
        cout << "Inserire l'anno di acquisto del " << i+1 << "^ pc:\t";
        cin >> pc[i].Anno;
        cout << "\n\n";
    }
    choose();
}

void choose2() {
    char v;
    cout << "\nPremere [x] per chiudere il programma\nPremere [c] per continuare ad usarlo\n.....................";
    cin >> v;
    if (v == 'c') {
        choose();
    }
}

void print() {
    for (int i = 0; i < n; i++) {
        if (pc[i].Anno == 0) {
            cout << "\n\nInformazioni del " << i+1 << "^ pc:\nPC eliminato.";
        }
        else {
            cout << "\n\nInformazioni del " << i+1 << "^ pc:\n\nCodice:\t\t" << pc[i].getCodice() << "\nMarca:\t\t" << pc[i].Marca << "\nModello:\t\t" << pc[i].Modello << "\nFrequenza della CPU:\t\t" << pc[i].Frequenza_CPU << " GHz\nMemoria RAM:\t\t" << pc[i].RAM << " GB\nMemoria di massa:\t\t" << pc[i].SSD << " GB\nDimesioni del monitor:\t\t" << pc[i].Inch_Monitor << " pollici\nAnno dell'acquisto:\t\t" << pc[i].Anno << "\n\n";
        }
    }
}

int main() {
    fill();
    choose2();
    print();

    return 0;
}