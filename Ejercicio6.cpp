/*Calcular la suma de componentes de índice par e impar en un vector*/

#include<iostream>
using namespace std;

int main(){
	int n;
	int impar = 0, par = 0;
	
	cout << "ingrese la cantidad de numeros que contendra su vector: ";
	cin >> n;
	
	int numeros[n];
	//lectura de numeros
	for (int i = 0; i < n; i++){
		cout << "Numero " << i + 1 << " :";
		cin >> numeros[i];
	}
	
	//verificar si es par o impar
	for (int i = 0; i < n; i++){
		if (numeros[i] % 2 == 0){
			par = par + numeros[i];
		} else {
			impar = impar + numeros[i];
		}
	}
	
	//mostrar resultados nwn!
	cout << par << endl;
	cout << impar << endl;

}