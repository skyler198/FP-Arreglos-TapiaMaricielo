/*Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos. */

#include <iostream>
using namespace std;

int main() {
    int cantidad;

    cout << "Cuantos nombres desea ingresar?: ";
    cin >> cantidad;
    cin.ignore();
    
    string nombres[cantidad];
    
    for (int i = 0; i < cantidad; i++){
    	cout << "Nombre " << i + 1 << ": ";
    	getline(cin, nombres[i]);
	}
	//logica para ordenarlos alfabeticamente
	//mostrar resultados
}

