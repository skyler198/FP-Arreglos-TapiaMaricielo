/*Convertir palabras a mayúsculas iniciales: "cáceres patrimonio de la humanidad" → "Cáceres Patrimonio De
La Humanidad"*/

#include <iostream>
using namespace std;

void mayusculaPalabras(string &oracion){
	bool espacio = true;
	int n = 0;
	while (oracion[n] != '\0'){
		n++;
	}
	//verificar espacios y poner mayusculas
	for (int i = 0; i < n; i++){
		if (espacio){
			oracion[i] = toupper (oracion[i]);
			espacio = false;
			
		} else if (oracion[i] == ' '){
			espacio = true;
		}
	}
}

int main (){
	string oracion;
	
	cout << "==========================================================" << endl;
	cout << "              BIENVENIDO A MI PROGRAMA!" << endl;
	cout << "==========================================================\n" << endl;
	
	cout << "Escriba una oracion: " << endl;
	getline(cin, oracion);
	
	mayusculaPalabras(oracion);
	
	cout << "--> " << oracion << endl;
	
	cout << "\n          GRACIAS POR USAR MI PORGRAMA <3!" << endl;
	
	return 0;
}