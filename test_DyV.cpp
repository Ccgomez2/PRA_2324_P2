#include <iostream>
#include "DyV.h"
using namespace std;

void testBusquedaBinariaInt() {
	vector<int> valores{1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int x = 7;
	int posicion = BusquedaBinaria(x, valores, 0, valores.size() - 1);
	cout << "Prueba con int: ";
	if (posicion != -1) {
		cout << "El valor " << x << " se encuentra en la posición " << posicion << endl;
	} else {
		cout << "No se encuentra en el array." << endl;
	}
}

void testBusquedaBinariaFloat() {
	vector<float> valores{1.1, 2.2, 3.3, 4.4, 5.5};
	float x = 3.3;
	int posicion = BusquedaBinaria(x, valores, 0, valores.size() - 1);
	cout << "Prueba con float: ";
	if (posicion != -1) {
		cout << "El valor " << x << " se encuentra en la posición " << posicion << endl;
	} else {
		cout << "No se encuentra en el array." << endl;
	}
}

void testBusquedaBinariaChar() {
	vector<char> valores{'a', 'c', 'e', 'g', 'i'};
	char x = 'e';
	int posicion = BusquedaBinaria(x, valores, 0, valores.size() - 1);
	cout << "Prueba con char: ";
	if (posicion != -1) {
		cout << "El valor '" << x << "' se encuentra en la posición " << posicion << endl;
	} else {
		cout << "No se encuentra en el array." << endl;
	}
}


void testQuickSortInt() {
	vector<int> valores = {9, 4, 8, 3, 1, 2, 5, 7, 6};
	QuickSort(valores, 0, valores.size() - 1);
	cout << "Vector de enteros ordenado: ";
	for (int val : valores) {
		cout << val << " ";
	}
	cout << endl;
}

void testQuickSortFloat() {
	vector<float> valores = {9.5, 4.1, 8.3, 3.7, 1.9, 2.4, 5.5, 7.6, 6.2};
	QuickSort(valores, 0, valores.size() - 1);
	cout << "Vector de floats ordenado: ";
	for (float val : valores) {
		cout << val << " ";
	}
	cout << endl;
}

void testQuickSortChar() {
	vector<char> valores = {'z', 'b', 'k', 'd', 'a', 'x', 'm', 'q', 'p'};
	QuickSort(valores, 0, valores.size() - 1);
	cout << "Vector de chars ordenado: ";
	for (char val : valores) {
		cout << val << " ";
	}
	cout << endl;
}

int main() {
	testBusquedaBinariaInt();
	testBusquedaBinariaFloat();
	testBusquedaBinariaChar();
	cout << "Pruebas de QuickSort en diferentes tipos de vectores:" << endl;
	testQuickSortInt();
	testQuickSortFloat();
	testQuickSortChar();
	return 0;
}

