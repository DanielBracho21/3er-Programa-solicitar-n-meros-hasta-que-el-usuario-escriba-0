#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	cout << "Este programa solicitara numeros hasta que el usuario escriba 0" << endl;
	cout << endl;
	cout << "Escribe numero enteros, cuando desees terminar, escribe cero" << endl;
	while (num != 0)
	{
		cin >> num;
		cout << "Escribiste: " << num << endl << "escribe 0 para terminar" << endl;
	}
	cout << "Escribiste 0, el ciclo while ha terminado" << endl;
	return 0;
}