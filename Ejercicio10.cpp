/*Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de
tendencia central media, mediana y moda.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int tamanio = 30;
    int numeros[tamanio];
    
    // Generar números aleatorios entre 100 y 1000
    srand(time(0));
    for (int i = 0; i < tamanio; i++) {
        numeros[i] = rand() % (1001 - 100) + 100;
    }
    //mostrar arreglo actual
    cout << "El arreglo actual es: [";
    for (int i = 0; i < tamanio; i++){
    	cout << numeros[i];
    	if (i < tamanio - 1){
    		cout << ", ";
		}
	}
	cout << "]" << endl;
	//calcular media
	//calcular mediana
	//calular moda
	//mostrar resultados
}
