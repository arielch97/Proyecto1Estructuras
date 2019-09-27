#include "Integer.h"
#include <sstream>
#include<iostream>
using std::stringstream;
using std::cout;

Integer::Integer()
{
	primero = nullptr;
}

void Integer::llenar(string numero)
{
	stringstream s;
		int aux;
		int con = 0;
		for (int i = 0; i< numero.length();i++) {
			s<<numero[i];
			//cout << numero[i];
			if (con == 9 || i == numero.length() - 1) {
			  //  aux = atoi(s.c_str());
				s >> aux;
				cout<<aux;
				insertar(aux);
				aux=0;
				con = 0;
				
			}
			con++;
		}
	
}

Integer Integer::parse(string)
{
	return Integer();
}

string Integer::tostring()
{
	stringstream s;
	Nodo *aux;
	aux = primero;
	int con = 3;
	while (aux!=nullptr)
	{
	
		s << aux->numero->toString();
		aux = aux->sig;
		con++;
	}
	return s.str();
}



void Integer::insertar(int numero)
{
	actual = primero;
if (primero == nullptr) {
	try {
		primero = new Nodo;
		primero->numero = new Vector();
		cout << "nodo ";
	}
	catch (std::bad_alloc  exception) {
		return;
	}
	primero->numero->insertar(numero);
	primero->sig = nullptr;
}else {
	while (actual->sig != nullptr) {
		actual = actual->sig;
	}
	if (!actual->numero->vacio()) {
		
		try {
			actual->sig = new Nodo;
			actual->sig->numero = new Vector();
			cout << "nodo ";
		}
		catch (std::bad_alloc  exception) {
			return;
		}
		
		actual->sig->numero->insertar(numero);
		actual->sig->sig = nullptr;
	}else{

		actual->numero->insertar(numero);
	}
}
}



Integer::~Integer()
{
}
