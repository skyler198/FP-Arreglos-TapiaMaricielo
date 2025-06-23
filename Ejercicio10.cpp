/*Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de
tendencia central media, mediana y moda.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int tamanio = 30;
    double media, mediana;
    int moda;
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
	
	double suma = 0;
	
	for (int i = 0; i < tamanio; i++){
		suma = suma + numeros[i];
	}
	media = suma / tamanio;
	
	//mostrar resultados
	
	cout << "\nLa media es: " << media << endl;
	
	//calcular mediana
	
	int aux;
	for (int i = 0; i < tamanio - 1; i++) {
	   for (int j = 0; j < tamanio - 1 - i; j++) {
	        if (numeros[j] > numeros[j + 1]) {
            aux = numeros[j];
            numeros[j] = numeros[j + 1];
            numeros[j + 1] = aux;
	        }
	    }
	}
	
	mediana = (numeros[tamanio / 2 - 1] + numeros[tamanio / 2]) / 2;
	
    //mostrar resultados
    
    cout << "\nLa mediana es: " << mediana << endl;
    
	//calular moda
	
	//mostrar resultados
}
