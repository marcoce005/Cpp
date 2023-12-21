#include <iostream>
#include<fstream>

using namespace std;

int main() {
    fstream myfile;

    myfile.open("testi/ciro.txt", ios::app);                // append ovvero oggiungi o crea la priam volta

    // ios::in per leggere dal file

    // ios::out per scrivere nel file

    myfile << "Viva Ciro!!!!!\n";
    
    myfile.close();
    
    return 0;
}