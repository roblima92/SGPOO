#pragma once
#include <iostream>
#ifndef Pessoa_hpp
#define Pessoa_hpp
using namespace std;
class Pessoa {
public:
	Pessoa(string nome, string endere�o, string telefone);
	Pessoa();
	void setNome(string nome);
	string getNome();
	void setEndere�o(string endere�o);
	string getEndere�o();
	void setTelefone(string telefone);
	string getTelefone();
	virtual void imprimirdetalhes();
protected:
	string nome;
	string endereco;
	string telefone;

};
#endif

