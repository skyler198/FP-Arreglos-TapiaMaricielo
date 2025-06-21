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
}

int main (){
	string oracion;
	cout << "escriba una oracion: " << endl;
	getline(cin, oracion);
	
	return 0;
}