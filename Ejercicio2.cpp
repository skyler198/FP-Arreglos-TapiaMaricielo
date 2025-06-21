/*Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada.*/

#include<iostream>
using namespace std;

void separar(string &oracion){
	int n = 0;
	while (oracion[n] != '\0'){
		n++;
	}
	//logica para separar palabras
}

int main (){
	string oracion;
	cout << "Ingrese una oracion: ";
	getline(cin, oracion);
	
	separar(oracion);
	
	return 0;
}