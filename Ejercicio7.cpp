/*Invertir un vector e imprimirlo*/
#include<iostream>
using namespace std;

int main(){
	int n;
		
	cout << "================================================================" << endl;
	cout << "                   BIENVENIDO A MI PROGRAMA" << endl;
	cout << "================================================================" << endl;
	
	cout << "Ingrese el tamanio del vector: ";
	cin >> n;
	
	int elementos[n];
	
	//lectura de numeros
	for (int i = 0; i < n; i++){
		cout << "Elemento [" << i + 1 << "] : ";
		cin >> elementos[i];
	}
	//mostrar vector actual
	
	cout <<"\nEl vector actual es: [";
	for (int i = 0; i < n; i++){
		cout << elementos[i];
		if (i < n - 1){
			cout << ", ";
		}
	}
	cout<<"]"<<endl;
	
	//invertir vector
	for (int i = 0; i < n / 2; i++){
		int invertido = elementos[i];
		elementos[i] = elementos[n - 1 - i];
		elementos[n - 1 - i] = invertido;
	}
	//mostrar vector invertido
	
	cout << "\nEl vector invertido es: [";
	for (int i = 0; i < n; i++){
		cout << elementos[i];
		if (i < n - 1){
			cout << ", ";
		}
	}
	cout<<"]"<<endl;
	
	cout << "\n         GRACIAS POR USAR MI PROGRAMA, VUELVA PRONTO!" << endl;
	
	return 0;
}