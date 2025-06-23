/*Comprobar si un número de 10 cifras es capicúa usando un vector.*/

#include<iostream>
using namespace std;

int main(){
	int digitos[10];

    cout << "Ingrese los 10 digitos de su numero:" << endl;
	//leer digitos
	//verficar que sean digitos entre 0 y 9
	
    for (int i = 0; i < 10; i++) {
        int dig;
        do {
            cout << "Digito " << i + 1 << ": ";
            cin >> dig;

            if (dig < 0 || dig > 9) {
                cout << "Digito invalido, cada digito debe estar entre 0 y 9" << endl;
            }

        } while (dig < 0 || dig > 9);

        digitos[i] = dig;
    }
    
    // logica para ver si el numero es capicua
    bool esCapicua = true;
    
    for (int i = 0; i < 5; i++) { // evaluamos los 5 primeros digitos porque es la mitad de cifras 
        if (digitos[i] != digitos[9 - i]) {
            esCapicua = false;
            break;
        }
    }
    
    //mostrar resultados

}