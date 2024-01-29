//Roberto Carlos de León Gramajo. 5090-23-1762.
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void Numpar();
void anioBisiesto();
void Numiguales();
void Legal();
void notaSemestre();
int instrucciones();

int main() {
    int seleccion;

    do {
        system("cls");
        seleccion = instrucciones();
        switch (seleccion) {
            case 1:
                Numpar();
                break;
            case 2:
                anioBisiesto();
                break;
            case 3:
                Numiguales();
                break;
            case 4:
                Legal();
                break;
            case 5:
                notaSemestre();
                break;
            case 6:
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
    cout <<"\t" << "//Hoja de trabajo\\" << endl;
    cout << "Seleccione una opcion para iniciar con el trabajo:" << endl;
    cout << " 1. Numeros Pares" << endl;
    cout << " 2. Ano bisiesto" << endl;
    cout << " 3. Igual entre numeros" << endl;
    cout << " 4. Edad<>" << endl;
    cout << " 5. Aprobado o no aprobado" << endl;
    cout << " 6. Salir del progama" << endl;
    cout << endl;
    cout << "Escoge una opcion: ";
    cin >> eleccion;
    return eleccion;
}

void Numpar() { 
	system("cls");
	int num;
    cout <<"\t" << "//Se ingresara un numero, que sera verificado si es o no es par\\";
    cout <<"\n" << "Ingrese un numero: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " El numero ingresado es par." << endl;
    } else {
        cout << num << " El numero ingresado no es par." << endl;
    }
    system("pause");
}

void anioBisiesto() {
    system("cls");
	int bisiesto;
	cout <<"\t" << "//Ingrese un ano para verificar si es bisiesto\\";
	cout <<"\n" << "Ingrese el ano : ";
    cin >> bisiesto;
    if(bisiesto%4==0){
        cout<<"el anio "<<bisiesto<<" es bisiesto";
    }
    else{
        cout<<"el anio "<<bisiesto<<" no es bisiesto";
    }
    system("pause");
}

void Numiguales(){
	system("cls");
	 float n1, n2;
	cout <<"\t" << "//Comparacion de dos numeros\\";
    cout <<"\n" << "Ingrese el primer numero: ";
    cin >> n1;
    cout <<"\n" << "Ingrese el segundo numero: ";
    cin >> n2;
    if (n1 == n2) {
        cout << "Los numeros son iguales." << endl;
    } else {
        cout << "Los numeros no son iguales." << endl;
    }
	system ("pause");	
}

void Legal(){
	system("cls");
	int edad18;
    cout <<"\t" << "//Eres mayor de edad??\\";
    cout <<"\n" << "Ingrese tu edad: ";
    cin >> edad18;
    if (edad18 >= 18) {
        cout << " Usted es mayor de edad." << endl;
    } else {
        cout << " Usted es menor de edad." << endl;
    }
    system("pause");	
}

void notaSemestre(){
	system("cls");
	int nota;
    cout <<"\t" << "//Pasaras de ano segun tu nota\\";
    cout <<"\n" << "Ingrese la nota del estudiante: ";
    cin >> nota;
    if (nota >= 60) {
        cout << "El estudiante paso el semestre" << endl;
    } else {
        cout << "El estudiante no paso el semestre" << endl;
    }
    system("pause");
}

