/*Comprobar si un número de 10 cifras es capicúa usando un vector.*/

#include<iostream>
using namespace std;

int main(){
	int digitos[10];

    cout << "Ingrese los 10 digitos de su numero:" << endl;
	//leer digitos
    for (int i = 0; i < 10; i++) {
        cout << "Digito " << i + 1 << ": ";
        cin >> digitos[i];
    }
    //verficar que sean digitos entre 0 y 9
    // logica para ver si el numero es capicua
    //mostrar resultados
}