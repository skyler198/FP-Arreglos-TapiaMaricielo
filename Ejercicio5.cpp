/* Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones. */

#include<iostream>

using namespace std;

int main(){
	int n;
	int max, min;
	int repm = 1, repM = 1;
	
	cout << "==========================================================" << endl;
	cout << "              BIENVENIDO A MI PROGRAMA!" << endl;
	cout << "==========================================================\n" << endl;

    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    int numeros[n];
    
    //lectura de numeros
    for(int i = 0; i < n; i++){
    	cout << "Numero " << i + 1 <<": ";
    	cin >> numeros[i];
	}
	//encontrar el mayor y menor numero
	max = numeros[0];
	min = numeros[0];
	
	for (int i = 1; i < n; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
            repM = 1; //inicializar de nuevo por que ya aprecieron una vez
        } else if (numeros[i] == max) {
            repM++; //contar las repeticiones
        }
        
        if (numeros[i] < min) {
            min = numeros[i];
            repm = 1; //inicializar de nuevo por que ya aprecieron una vez
        } else if (numeros[i] == min) {
            repm++; //contar las repeticiones
        }
    }
	//Mostrar resultados
	cout << "\nNumero mayor: " << max << " (se repite " << repM << " veces)" << endl;
    cout << "Numero menor: " << min << " (se repite " << repm << " veces)" << endl;
    
    cout << "\n          GRACIAS POR USAR MI PORGRAMA <3!" << endl;
    
    return 0;
}