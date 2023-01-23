#pragma once
#include<string>
using namespace std;
class Cuenta
{
public:
	Cuenta(string _nombre);
	~Cuenta();
	double get_monto();
	string get_titular();
	bool ingresar(double monto);
	bool retirar(double monto);
private:
	string titular;
	double monto;
};

Cuenta::Cuenta(string _nombre){
	titular = _nombre;
	monto = 0;
}

Cuenta::~Cuenta(){}
double Cuenta::get_monto() { return monto; }
string Cuenta::get_titular() { return titular; }
bool Cuenta::ingresar(double monto) {
	if (monto < 0)return false;
	this->monto += monto;
	return true;
}
bool Cuenta::retirar(double monto) {
	if (monto<0 || monto>this->monto)return false;
	this->monto -= monto;
	return false;
}