#include <iostream>

using namespace std;

class dipendenti {
    protected:
        int salario_base = 1000;

    public:
        dipendenti() {}
        ~dipendenti() {}

        int get() {return(salario_base);}
};

class programmatori : public dipendenti {
    private:
        int bonus = 200;

    public:
        programmatori() {}
        ~programmatori() {}

        int get() {return(salario_base + bonus);}
};

class operai : public dipendenti {
    private:
        int bonus = 50;

    public:
        operai() {}
        ~operai() {}

        int get() {return(salario_base + bonus);}
};

class segretarie : public dipendenti {
    private:
        int bonus = -100;

    public:
        segretarie() {}
        ~segretarie() {}

        int get() {return(salario_base + bonus);}
};

int main() {
    programmatori p;
    operai o;
    segretarie s;
    
    cout << "\nLe segretarie prendono " << s.get() << " sbleuri al mese.\nGli oprai prendeno " << o.get() << " sbleuri al mese.\nI programmatori prendono " << p.get() << " sbleuri al mese.";

    return 0;
}