#include<iostream>
#include<conio.h>
#include<time.h>
#include"Persona.h"
#include"Cuenta.h"
void ejercicio1() {
	string nombre;
	int edad;
	int dni;
	char genero;
	float peso;
	float altura;
	cout << "Ingrese su nombre:" << endl;
	cin >> nombre;
	cout << "Ingrese su edad:" << endl;
	cin >> edad;
	cout << "Ingrese su DNI: " << endl;
	cin >> dni;
	cout << "Ingrese su genero:" << endl;
	cin >> genero;
	cout << "Ingrese su peso: " << endl;
	cin >> peso;
	cout << "Ingrese su altura: " << endl;
	cin >> altura;
	Persona* obj1 = new Persona();
	obj1->set_nombre(nombre);
	obj1->set_edad(edad);
	obj1->set_genero(genero);
	obj1->set_peso(peso);
	obj1->set_altura(altura);
	obj1->genera_dni();
	Persona* obj2 = new Persona(nombre, edad, genero);
	obj2->set_peso(peso);
	obj2->set_altura(altura);
	obj2->genera_dni();
	Persona* obj3 = new Persona(nombre, edad, dni, genero, peso, altura);
	cout << "nombre\tedad\tdni\tgenero\taltura\timc\tmayoredad" << endl;
	cout << obj1->tostirng() << "\t" << obj1->getimc() << "\t" << obj1->es_mayor_edad() << endl;
	cout << obj2->tostirng() << "\t" << obj2->getimc() << "\t" << obj2->es_mayor_edad() << endl;
	cout << obj3->tostirng() << "\t" << obj3->getimc() << "\t" << obj3->es_mayor_edad() << endl;
	delete obj1;
	delete obj2;
	delete obj3;
}
void ejercicio2() {
	Cuenta* obj = new Cuenta("Nombre");
	int opcion;
	double monto;
	while (true) {
		cout << obj->get_titular() << ":" << obj->get_monto() << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1: cin >> monto; 
			if (obj->ingresar(monto))cout << "Operacion exitosa" << endl;
			else cout << "Error en la operacion";
			cout << endl; break;
		case 2:
			if (obj->retirar(monto))cout << "Operacion exitosa" << endl;
			else cout << "Error en la operacion";
			cout << endl; break;
		default:break;
		}
		_getch();
		system("cls");
	}
}
void menu() {
	while (true) {
		int opcion;
		cout << "Ingrese la opcion:" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1: ejercicio1(); break;
		case 2: ejercicio2(); break;
		default: break;
		}
		_getch();
		system("cls");
	}
}
void main() {
	srand(time(0));
	menu();
}