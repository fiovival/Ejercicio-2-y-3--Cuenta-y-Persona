#pragma once
//Atributos: nombre, edad, DNI, sexo(H hombre, M mujer), peso y altura.
#include<string>
using namespace std;
class Persona{
public:
	Persona();
	~Persona();
	Persona(string _nombre,int _edad,char _genero);
	Persona(string _nombre, int edad, int _dni, char _genero, float _peso, float _altura);
	int getimc();
	bool es_mayor_edad();
	void comprobar_genero(char _genero);
	string tostirng();
	void genera_dni();
	string get_nombre();
	int get_edad();
	int get_dni();
	char get_genero();
	float get_peso();
	float get_altura();
	void set_nombre(string nombre);
	void set_edad(int dato);
	void set_genero(char dato);
	void set_peso(float dato);
	void set_altura(float dato);
private:
	string nombre;
	int edad;
	int dni;
	char genero;
	float peso;
	float altura;
};
Persona::Persona(){
	nombre = "";
	edad = 0;
	dni = 0;
	genero = 'H';
	peso = 0;
	altura = 0;
}
Persona::~Persona(){}
Persona::Persona(string nombre,int edad, char genero) {
	this->nombre = nombre;
	this->edad = edad;
	dni = 0;
	this->genero = genero;
	peso = 0;
	altura = 0;
}
Persona::Persona(string _nombre, int _edad, int _dni, char _genero, float _peso, float _altura) {
	nombre = _nombre;
	edad = _edad;
	dni = _dni;
	genero = _genero;
	peso = _peso;
	altura = _altura;
}
int Persona::getimc() {
	float imc = peso / (altura * altura);
	if (imc < 20)return -1;
	if (imc < 25)return 0;
	return 1;
}
int Persona::get_edad() { return edad; }
int Persona::get_dni() { return dni; }
bool Persona::es_mayor_edad() { return edad >= 18; }
void Persona::comprobar_genero(char _genero) { if (_genero == 'F')genero = 'F'; }
void Persona::genera_dni() {
	while (dni < 10000000) {
		dni = dni * 10 + rand() % 10;
	}
}
char Persona::get_genero() { return genero; }
void Persona::set_nombre(string dato) { nombre = dato; }
void Persona::set_edad(int dato) { edad = dato; }
void Persona::set_genero(char dato) { genero = dato; }
void Persona::set_peso(float dato) { peso = dato; }
void Persona::set_altura(float dato) { altura = dato; }
float Persona::get_peso() { return peso; }
float Persona::get_altura() { return altura; }
string Persona::get_nombre() { return nombre; }
string Persona::tostirng() {
	return nombre+"\t" + to_string(edad) + "\t" + to_string(dni) +
		"\t" + genero + "\t" + to_string(peso) +
		"\t" + to_string(altura);
}