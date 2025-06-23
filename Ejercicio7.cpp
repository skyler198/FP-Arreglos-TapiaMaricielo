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
		cout << "Elemento [" << i + 1 << "] : ";
		cin >> elementos[i];
	}
	//mostrar vector actual
	
	//invertir vector
	for (int i = 0; i < n / 2; i++){
		int invertido = elementos[i];
		elementos[i] = elementos[n - 1 - i];
		elementos[n - 1 - i] = invertido;
	}
	//mostrar vector invertido
	
	
	return 0;
}