#include <iostream>
#include <fstream>

using namespace std;

fstream input, output;

void work() {
    int caratteri = 0;

    input.open("input.txt", ios::in);
    output.open("output.txt", ios::app);

    char frase[100];
    while (!input.eof()) {
        input.getline(frase, 100);

        for (int i = 0; i < 100; i++) {
            if (frase[i] == '\0') {break;}
            else {caratteri++;}
        }
        
        output << frase << "\t\t\t\tCaratteri = " << caratteri << endl;
        
        caratteri = 0;        
    }

    input.close();
    output.close();
}

void clean() {
    remove("output.txt");
}

int main() {
    clean();
    work();
    return 0;
}