#include <iostream>
#include <fstream>

using namespace std;

fstream testo;

long int cont_line() {
    testo.open("testo.txt", ios::in);

    char line[1000];
    long int cont = 0;
    while (testo.getline(line, 1000)) {
        cont++;
    }
    
    testo.close();
    return(cont);
}

int main(){
    cout << "\nLe linee sono:\t" << cont_line() << endl;
    return 0;
}