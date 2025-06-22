/*Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos. */

#include <iostream>
using namespace std;

int main() {
    int cantidad;
    string aux;
    cout << "==================================================" << endl;
    cout << "  PROGRAMA PARA ORDENAR NOMBRES ALFABETICAMENTE" << endl;
	cout << "==================================================" << endl;
		
    cout << "Cuantos nombres desea ingresar?: ";
    cin >> cantidad;
    cin.ignore();
    
    string nombres[cantidad];
    
    for (int i = 0; i < cantidad; i++){
    	cout << "Nombre " << i + 1 << ": ";
    	getline(cin, nombres[i]);
	}
	//logica para ordenarlos alfabeticamente
	for (int i = 0; i < cantidad - 1; i++){
		for(int j = i + 1; j < cantidad; j++){
			if (nombres[i] > nombres[j]){
				aux = nombres[i];
				nombres[i] = nombres[j];
				nombres[j] = aux;
			}
		}
	}
	//mostrar resultados
	cout << "\nNombres ordenados alfabeticamente: \n";
	for (int i = 0; i < cantidad; i++){
		cout << "Nombre " << i + 1 << ": " << nombres[i] << endl;
	}
	cout << "\n        GRACIAS POR USAR ESTE PROGRAMA <3!" << endl;
	return 0;
}s

