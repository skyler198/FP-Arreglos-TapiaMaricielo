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
	//mostrar arreglo ordenado
	
	cout << "\nEl arreglo ordenado (menor a mayor) es: [";
	for (int i = 0; i < tamanio; i++) {
	    cout << numeros[i];
	    if (i < tamanio - 1) {
	        cout << ", ";
	    }
	}
	cout << "]" << endl;
	
	mediana = (numeros[tamanio / 2 - 1] + numeros[tamanio / 2]) / 2.0;
	
    //mostrar resultados
    
    cout << "\nLa mediana es: " << mediana << endl;
    
	//calular moda
	
	moda = numeros[0]; // asuminos que el primer elemento es la moda
    int maxRepeticion = 0; // inicializamos en cero maxRepeticiones para guardar los resultados
 	
    for (int i = 0; i < tamanio; i++) {
    	int repetido = 0; // repetido es un acumulador
        for (int j = 0; j < tamanio; j++) {
            if (numeros[i] == numeros[j]) {
                repetido++;
            }
        }

        if (repetido > maxRepeticion) {
            maxRepeticion = repetido;
            moda = numeros[i];
        }
    }
    
	//mostrar resultados
	
	cout << "\nLa moda es: " << moda << " se repitio " << maxRepeticion << endl;
	
	return 0;
}
