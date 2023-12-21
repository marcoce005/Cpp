#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

fstream in, out;

void work() {
    in.open("input.txt", ios::in);
    out.open("output.txt", ios::app);

    if (in.is_open() == 0) {
        cout << "\nFile input non trovato" << endl;
        exit(1);
    }
    else if (out.is_open() == 0) {
        cout << "\nFile output non trovato" << endl;
        exit(1);
    }

    bool change = 0;
    char line[200];
    while (!in.eof()) {
        in.getline(line, 200);
        
        for (int i = 0; line[i] != '\0'; i++) {
            switch (line[i]) {
            case 'i':
                line[i] = '1';
                change = 1;
            break;

            case 'I':
                line[i] = '1';
                change = 1;
            break;
            
            case 'o':
                line[i] = '0';
                change = 1;
            break;

            case 'O':
                line[i] = '0';
                change = 1;
            break;
            }
        }

        out << line << endl;
    }

    change == 1 ? cout << "\nIl file e' stato modificato.\n" : cout << "\nIl file non ha subito modifiche\n";

    in.close();
    out.close();
}

void clean() {
    remove("output.txt");
}

int main() {
    clean();
    work();

    return 0;
}