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

int main (){
	string oracion;
	char n;
	int total;
		
	cout << "==========================================================" << endl;
	cout << "              BIENVENIDO A MI PROGRAMA!" << endl;
	cout << "==========================================================\n" << endl;
	
	cout << "Escriba una oracion: ";
	getline(cin, oracion);
	cout << "Que letra desea verificar?: ";
	cin >> n;
	
	total = ContarConcurrenciaPalabra(oracion, n );
	
	cout << "La cantidad de '" << n << "' que hay en la oracion es de: " << total << endl; 
	
	cout << "\n          GRACIAS POR USAR MI PORGRAMA <3!" << endl;
	
	return 0;
}