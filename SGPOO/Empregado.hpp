#pragma once
#ifndef Empregado_hpp
#define Empregado_hpp
#include "Pessoa.hpp"

class Empregado : public Pessoa 
{
public:
	Empregado();
	Empregado(string nome, string endereço, string telefone, int codigoSetor, float salario);
	void setCodigoSetor(int credito);
	void setSalarioBase(float salario);
	virtual float calculaSalario() = 0;			//METODO VIRTUAL, POIS CADA CLASSE QUE HERDA DE EMPREGADO, TEM UM FORMULA DIFERENTE PARA CALCULO DO SEU SÁLARIO;
	float descontoImposto();
	void imprimirDetalhes();

protected:
	int codigoSetor;
	float salario;
};
#endif //!Empregado_hpp
