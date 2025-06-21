/*Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada.*/

#include<iostream>
using namespace std;

void separar(string &oracion){
	int n = 0;
	while (oracion[n] != '\0'){
		n++;
	}
	//logica para separar palabras
		for (int i = 0 ;i < n;  i++){
		if (oracion[i] == ' '){
			cout << endl;
		} else {
			cout << oracion [i];
		}
	}
}

int main (){
	string oracion;
	cout << "==========================================================" << endl;
	cout << "              BIENVENIDO A MI PROGRAMA!" << endl;
	cout << "==========================================================\n" << endl;
	
	cout << "Ingrese una oracion: ";
	getline(cin, oracion);
	
	separar(oracion);
	
	cout << "\n          GRACIAS POR USAR MI PORGRAMA <3!" << endl;
	
	return 0;
}