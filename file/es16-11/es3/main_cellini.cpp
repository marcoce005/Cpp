#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

fstream in, out;

void work() {
    in.open("testo.txt", ios::in);
    out.open("output.txt", ios::out);

    char line[100];
    while (!in.eof()) {
        in.getline(line, sizeof(line));
        for (int i = 0; i < sizeof(line); i++) {
            if (islower(line[i])) {
                line[i] = toupper(line[i]);
            }
            else if (isupper(line[i])) {
                line[i] = tolower(line[i]);
            }
            
        }
        out << line << endl;
    }

    in.close();
    out.close();
}

int main() {
    work();
    return 0;
}