#include "Administrador.hpp"

Administrador::Administrador(string nome, string endereco, string telefone, int codigoSetor, float salario, float ajudaDeCusto)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	this->codigoSetor = codigoSetor;
	this->salario = salario;
	this->ajudaDeCusto = ajudaDeCusto;
}

Administrador::Administrador()
{
	this->ajudaDeCusto = 0;
}

float Administrador::calculaSalario()
{
	return (salario - Empregado::descontoImposto()) + ajudaDeCusto; //AJUDA DE CUSTO VALOR N?O TRIBUTAVEL PARA CALCULO DO SALARIO.
}

void Administrador::imprimirDetalhes()
{
	Empregado::imprimirDetalhes();
	cout << "Tem uma ajuda de custo de: R$" << ajudaDeCusto << endl;
	cout << "Totalizando um salario de: R$" << calculaSalario();
}

void Administrador::setAjudaDeCusto(float ajuda)
{
	this->ajudaDeCusto = ajuda;
}

float Administrador::getAjudaDeCusto()
{
	return ajudaDeCusto;
}