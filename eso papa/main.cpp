//qlq dice esa plantilla para el flojoooo
//que qqqqueeeee

#include <iostream>
using namespace std;

int main() {

	int numero = 10;												//variable
	cout << "valor de numero = " << numero << endl;					//imprimir la variable
	cout << "ubicacion del numero = " << &numero << endl;			// imprimir ubicacion en memoria
	cout << endl;

	int* p_numero = &numero;										//almacenar ubicacion de memoria
	
	cout << "valor del punto = " << p_numero << endl;				//imprime la ubicacion de numero
	cout << "ubicacion del punto = " << &p_numero << endl;			//imprime la ubicacion del puntero
	cout << "valor de la ubi del numero = " << *p_numero << endl;	//imprime el numero de la variable
	cout << endl;

	numero = 20;
	cout << "valor de la ubi del numero = " << *p_numero << endl;	//imprime el numero de la variable


	cin.get();
	return 0;
}