/*Contar la ocurrencia de una letra específica en una cadena de entrada*/

#include<iostream>
using namespace std;

int ContarConcurrenciaPalabra( string oracion, char n){
	int cont = 0;
	int m = 0;
	while (oracion[m] != '\0'){
		m++;
	}
	for (int i = 0; i < m; i++){
		if (oracion[i] == n){
			cont= cont + 1;
		}
	}
	return cont;
}

