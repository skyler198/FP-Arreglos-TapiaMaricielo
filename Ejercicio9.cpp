/*Rotar las componentes de un vector una posición hacia la derecha*/

#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout << "================================================================" << endl;
	cout << "                   BIENVENIDO A MI PROGRAMA" << endl;
	cout << "================================================================" << endl;
	
	cout << "ingrese la cantidad de numeros que contendra su vector: ";
	cin >> n;
	
	int numeros[n];
	
	//lectura de numeros
	for (int i = 0; i < n; i++){
		cout << "Numero " << i + 1 << " : ";
		cin >> numeros[i];
	}
	
	//mostar vector actual
	
	cout <<"\nEl vector actual es: [";
	
	for (int i = 0; i < n; i++){
		cout << numeros[i];
		if (i < n - 1){
			cout << ", ";
		}
	}
	cout<<"]"<<endl;
	
	//logica para rotar componentes
	
	int ultimo = numeros[n - 1]; // sirve para guardar el último numero
	
    for (int i = n - 1; i > 0; i--) {
        numeros[i] = numeros[i - 1];
    }
    numeros[0] = ultimo; //le asignamos el ultimo numero al primero
	
	//mostrar vector ya rotado una posicion a la derecha
	
	cout << "\nEl vector rotado a la derecha es: [";
	
    for (int i = 0; i < n; i++){
        cout << numeros[i];
        if (i < n - 1){
            cout << ", ";
        }
    }
    cout << "]" << endl;

	cout << "\n         GRACIAS POR USAR MI PROGRAMA, VUELVA PRONTO!" << endl;
	
	return 0;
}