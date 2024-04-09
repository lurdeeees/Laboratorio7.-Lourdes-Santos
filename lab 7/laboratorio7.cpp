#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <windows.h>


using namespace std;

int menu(){ //Funcion menu donde se pone las opciones que se necesita para el programa
	int x; //variable
	system ("cls");
	cout << "**********************************"<< endl;
	cout << "Manipulacion de Archivos"<< endl;
	cout <<"1. Agregar personas"<< endl;
	cout << "2. Ver registros"<< endl;//opciones
	cout << "Opcion: ";
	cin >> x;
	return x;//se retorna la variable x
}
void agregar(ofstream &es){ //funcion agregar para atrapar los datos 
	system ("cls");
	string Nom;
	string Ape;
	string edad;//se indican las variables a usar
	es.open("ejercicio1.txt", ios :: out | ios :: app); //se abre el archivo de texto
	cout <<"Ingresa tu nombre: ";
	cin >> Nom;
	cout << "Ingresa tu apellido: ";
	cin >> Ape;
	cout << "Ingresa tu edad: ";
	cin >> edad;
	es<<Nom<<" "<<Ape<<" "<<edad<<"\n "; //concatenamos los datos que se han ingresado a las variables
	es.close(); //se cierra el programa
}

void ver(ifstream &Lec){ //funcion de ver los datos para la consola
	system("cls");
	string Nom;
	string Ape;
	string edad;//se indican las variables
	Lec.open("ejercicio1.txt", ios:: in); //se abre el archivo de texto donde se han agregado los datos
	Lec>>Nom;
	while(!Lec.eof()){ //se inicia un ciclo while para poder ir mostranto los datos que se han agregado anteiormente
		Lec>>Ape;
		Lec>>edad;
		cout <<"NOMBRE: "<<Nom << endl;
		cout <<"APELLIDO: "<<Ape << endl;
		cout << "EDAD: "<< edad<< endl;
		cout << "---------------------" << endl;
		Lec >> Nom;
	}
	Lec.close(); //se cierra el archivo
	system("pause");
}
int main(){ //menu principal 
	ofstream Esc; //se declaran las variables que se han utilizado en las funciones anteriores
	ifstream Lec;
	int op;
	do{ //se usa un ciclo do - while que sirve para escoger las opciones del menu principal
		op = menu();
		switch (op){
			case 1:
				agregar(Esc);
			break;
			case 2:
				ver(Lec);
			break;
		}
	}while(op != 2);
	return 0;

}