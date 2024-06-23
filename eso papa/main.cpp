//qlq dice esa plantilla para el flojoooo
//que qqqqueeeee

#include <iostream>
using namespace std;

int division(int valor, int divisor, int& resto) {
	resto = valor % divisor;
	return valor / divisor;
}

int main() {
	int numero;
	int divisor;
	int resto;
	int resultado;
	cout << "ingresa un numero ";
	cin >> numero;
	cout << "ingresa el divisor ";
	cin >> divisor;
	resultado = division(numero, divisor, resto);
	cout << "el resultado es = " << resultado << endl;
	cout << "el resto es = " << resto << endl;

	cin.get();
	return 0;
}