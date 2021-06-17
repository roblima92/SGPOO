#pragma once
#include <iostream>
#ifndef Pessoa_hpp
#define Pessoa_hpp
using namespace std;
class Pessoa {
public:
	Pessoa(string nome, string enderešo, string telefone);
	Pessoa();
	void setNome(string nome);
	string getNome();
	void setEnderešo(string enderešo);
	string getEnderešo();
	void setTelefone(string telefone);
	string getTelefone();
protected:
	string nome;
	string enderešo;
	string telefone;

};
#endif

