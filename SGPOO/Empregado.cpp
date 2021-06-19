#include "Empregado.hpp"

Empregado::Empregado()
{
	this->codigoSetor = 0;
	this->salario = 0;
}

Empregado::Empregado(string nome, string endereço, string telefone, int codigoSetor, float salario)
{
	Pessoa::setNome(nome);
	Pessoa::setEndereço(endereço);
	Pessoa::setTelefone(telefone);
	this->codigoSetor = codigoSetor;
	this->salario = salario;
}

void Empregado::setCodigoSetor(int setor)
{
	this->codigoSetor = codigoSetor;
}

void Empregado::setSalarioBase(float salario)
{
	this->salario = salario;
}

float Empregado::calculaSalario()
{
	if (salario < 1903.99) {
		return salario;
	}else if (salario>= 1903.99 && salario<= 2826.65) {
		return salario - (salario * 7, 5) / 100;
	}
	else if (salario >= 2826.66 && salario <= 3751.05) {
		return salario - (salario * 15) / 100;
	}
	else if(salario >= 3751.06 && salario <= 4664.68){
		return salario - (salario * 22, 5) / 100;
	}
	else
	{
		return salario - (salario * 27, 5) / 100;
	}
}

void Empregado::imprimirDetalhes()
{
	Pessoa::imprimirDetalhes();
	cout << "Tem o salario LIQUIDO de: " << this->calculaSalario() << endl;
}