/* Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones. */

#include<iostream>

using namespace std;

int main(){
	int n;

    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    int numeros[n];
    
    for(int i = 0; i < n; i++){
    	cout << "Numero " << i + 1 <<": ";
    	cin >> numeros[i];
	}
	//encontrar el mayor y menor numero
	//contar las repeticiones
	//Mostrar resultados
}