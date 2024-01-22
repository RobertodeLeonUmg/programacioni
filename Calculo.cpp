#include <iostream>
using namespace std;

float valor1 = 0;
float valor2 = 0;
float resultado = 0;

void suma();
void resta();
void multiplicacion();
void division();

int main() {
    suma();
    resta();
    multiplicacion();
    division();
    
    return 0;
}

void suma() {
    // instrucciones de programación para calcular la suma
	cout <<"**************Suma*******************"<< endl;
	cout <<"Ingrese el primer numero"<< endl;
    cin>> valor1;
    cout <<"Ingrese el segundo numero"<< endl;
    cin>> valor2;
    resultado = (valor1 + valor2);
    cout << "Nuestra suma es: " << resultado << endl;
}

void resta() {
    // instrucciones de programación para calcular la resta
    cout <<"\n\n"<<"**************Resta*******************"<< endl;
	cout <<"Ingrese el primer numero"<< endl;
    cin>> valor1;
    cout <<"Ingrese el segundo numero"<< endl;
    cin>> valor2;
    resultado = (valor1 - valor2);
    cout << "Nuestra resta es: " << resultado << endl;
}

void multiplicacion() {
    // instrucciones de programación para calcular la multiplicacion
    cout <<"\n\n"<<"**************Multiplicacion*******************"<< endl;
	cout <<"Ingrese el primer numero"<< endl;
    cin>> valor1;
    cout <<"Ingrese el segundo numero"<< endl;
    cin>> valor2;
    resultado = (valor1 * valor2);
    cout << "Nuestra multiplicacion: " << resultado << endl;
}

void division() {
    // instrucciones de programación para calcular la division
    cout <<"\n\n"<<"**************Division*******************"<< endl;
	cout <<"Ingrese el primer numero"<< endl;
    cin>> valor1;
    cout <<"Ingrese el segundo numero"<< endl;
    cin>> valor2;
    if (valor2 != 0) {
        resultado = (valor1 / valor2);
        cout << "Nuestra division es: " << resultado << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }
}
