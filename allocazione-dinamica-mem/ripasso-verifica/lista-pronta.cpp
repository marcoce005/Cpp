#include <iostream>
#include <list>

using namespace std;

list<int> fill(list<int> n) {
	srand(time(NULL));

	for(int i = 0; i < 2; i++){
		n.push_back(rand() % 90);
	}

	for(int i = 0; i < 2; i++){
		n.push_front(rand() % 90);
	}
	
	return n;
}

void print(list<int> x) {
	for(auto i : x){
		cout << i << "\t";
	}
	cout << endl;
}

void empty(list<int> x) {
	if (x.empty() == 1)
		cout << "\nLa lista è vuota\n";
	else
		cout << "\nLa lista ha degli elementi\n";
}

void reverse(list<int> x) {
	x.reverse();
	print(x);
}

int main() {
	list<int> l = {1, 4, 2, 7, 3, 7, 4, 7};

	l = fill(l);

	print(l);

	empty(l);

	reverse(l);

	return 0;
}
