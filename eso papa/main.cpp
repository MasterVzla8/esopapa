//qlq dice esa plantilla para el flojoooo
//que qqqqueeeee

#include <iostream>
using namespace std;

float division(float valor, float divisor) {
	return valor / divisor;
}

int main() {
	float numero;
	float divisor;
	float resultado;
	cout << "ingresa un numero ";
	cin >> numero;
	cout << "ingresa el divisor ";
	cin >> divisor;
	resultado = division(numero, divisor);
	cout << "el resultado es = " << resultado << endl;

	cin.get();
	return 0;
}