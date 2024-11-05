
#include <iostream>
#include "DyV.h"
using namespace std;

void testBusquedaBinariaInt() {
	vector<int> valores{1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int x = 7;
	int posicion = BusquedaBinaria(x, valores, 0, valores.size() - 1);
	if (posicion != -1) {
		cout << "El valor " << x << " se encuentra en la posición " << posicion << endl;
	} else {
		cout << "No se encuentra en el array." << endl;
	}
}
int main() {
	testBusquedaBinariaInt();
	return 0;
}

