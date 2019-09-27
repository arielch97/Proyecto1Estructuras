#pragma once
#include"Vector.h"

class Integer
{
private:
	struct Nodo
	{
		Vector *numero;
		Nodo *sig;

	};
	Nodo *primero;
	Nodo *actual;
public:
	Integer();
	void insertar(int);
	void llenar(string numero);
	static Integer parse(string);
	string tostring();
	
	~Integer();
};

