//Roberto Carlos de León Gramajo. 5090-23-1762.
//Hoja de Trabajo.
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void suma(float num, float num1);
void resta(float num2, float num3);
void multiplicacion(float num4, float num5);
void division(float num6, float num7);
void Comparacion(float num8, float num9);
void OperacionesyVariables();
void CalcularPotencia();
void Numpar();
void anioBisiesto();
void Numiguales();
int instrucciones();

int main() {
    int seleccion;

    do {
        system("cls");
        seleccion = instrucciones();
        switch (seleccion) {
            case 1:
                OperacionesyVariables();
                break;
            case 2:
                CalcularPotencia();
                break;
            case 3:
                Numpar();
                break;
            case 4:
                anioBisiesto();
                break;
            case 5:
                cout << "Salida del programa." << endl;
                break;
            default:
                cout << "Opcion no encontada. Intenta de nuevo." << endl;
        }

    } while (seleccion != 6);
    return 0;
}

int instrucciones() {
    int eleccion;
    cout <<"\t" << "//Hoja de trabajo#1\\" << endl;
    cout << "Seleccione una opcion para iniciar con el trabajo:" << endl;
    cout << " 1. Operaciones y Varaibles" << endl;
    cout << " 2. Potencia de un numero" << endl;
    cout << " 3. Numeros pares" << endl;
    cout << " 4. Anio Bisiesto" << endl;
    cout << " 5. Salir del progama" << endl;
    cout << endl;
    cout << "Escoge una opcion: ";
    cin >> eleccion;
    return eleccion;
}

void OperacionesyVariables() { 
	system("cls");
	float valor1 = 0, resultado = 0, valor2 = 0;
    cout <<"\tOperaciones aritmeticas"<< endl;
	cout <<"Ingrese el primer numero"<< endl;
    cin>> valor1;
    cout <<"Ingrese el segundo numero"<< endl;
    cin>> valor2;
    suma(valor1, valor2);
    resta(valor1, valor2);
    multiplicacion(valor1, valor2);
    division(valor1, valor2);
    Comparacion(valor1, valor2);
    
    system("pause");
}
void suma(float num, float num1) {
    float resultado = 0;
    cout <<"\n\n#Suma"<< endl;
    resultado = (num + num1);
    cout << "Nuestra suma es: " << resultado << endl;
}

void resta(float num2, float num3) {
    float resultado = 0;
    cout <<"\n\n#Resta"<< endl;
    resultado = (num2 - num3);
    cout << "Nuestra resta es: " << resultado << endl;
}

void multiplicacion(float num4, float num5) {
    float resultado = 0;
    cout <<"\n\n#Multiplicacion"<< endl;
    resultado = (num4 * num5);
    cout << "Nuestra multiplicacion: " << resultado << endl;
}

void division(float num6, float num7) {
    float resultado = 0;
    cout <<"\n\n#Division"<< endl;
    if (num7 != 0) {
        resultado = (num6 / num7);
        cout << "Nuestra division es: " << resultado << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }
}
void Comparacion(float num8, float num9) {
 
    if(num8==num9)

	cout<<"\n Los dos numeros son iguales";

	else{

	if(num8>num9)

		cout<<"\n - El numero mayor es:"<<num8<<"\n";

	else

		cout<<"\n - El numero menor es:"<<num8<<"\n";

	}

}
void CalcularPotencia() {
    system("cls");
    double numero, potencia, elevado;
    cout <<"\tPotencias"<< endl;
	cout <<"Ingrese el numero base"<< endl;
    cin>> numero;
    cout <<"Ingrese el exponente del numero"<< endl;
    cin>> potencia;
    elevado = pow(numero, potencia);
    cout << "El numero " << numero << " con la potencia "<< potencia << " tiene un rasultado de: " << elevado << endl;
    system("pause");
}
void anioBisiesto() {
    system("cls");
	int bisiesto;
	cout <<"\n\t" << "//Ingrese un ano para verificar si es bisiesto\\";
	cout <<"\n\n" << "Ingrese el ano : ";
    cin >> bisiesto;
    if(bisiesto%4==0){
        cout<<"******El anio "<<bisiesto<<" 'Si' es bisiesto"<< endl;
    }
    else{
        cout<<"******El anio "<<bisiesto<<" 'No' es bisiesto"<< endl;
    }
    system("pause");
}

void Numpar() { 
	system("cls");
	int num;
    cout <<"\n\n\t" << "//Se ingresara un numero, que sera verificado si es o no es par\\";
    cout <<"\n" << "Ingrese un numero: ";
    cin >> num;
    if (num % 2 == 0) {
        cout<< "*******El numero ingresado " << num  <<" 'Si' es par." << endl;
    } else {
        cout << "******El numero ingresado " << num  <<" 'No' es par." << endl;
    }
    system("pause");
}

