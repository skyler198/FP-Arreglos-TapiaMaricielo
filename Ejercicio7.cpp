/*Invertir un vector e imprimirlo*/
#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout << "Ingrese el tamanio del vector: ";
	cin >> n;
	
	int elementos[n];
	
	//lectura de numeros
	for (int i = 0; i < n; i++){
		cout << "Numero " << i + 1 << " : ";
		cin >> elementos[i];
	}
	//invertir vector
	//mostrar vector invertido
	return 0;
}