#include <iostream>
#include <queue>

using namespace std;

queue<int> ins(queue<int> x) {
	srand(time(NULL));
	for(int i = 0; i < 5; i++){
		x.push(rand() % 20);
	}

	return x;
}

void print(queue<int> x){
	while(!x.empty()) {
		cout << x.front() << "\t";
		x.pop();
	}
	cout << endl;
}

int main() {
	queue<int> pila;

	pila = ins(pila);

	print(pila);

	return 0;
}
