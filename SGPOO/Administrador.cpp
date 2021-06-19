#include "Administrador.hpp"

Administrador::Administrador()
{
	this->ajudaDeCusto = 0;
}

Administrador::Administrador(string nome, string endereco, string telefone, int codigoSetor, float salario, float ajudaDeCusto)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	this->codigoSetor = codigoSetor;
	this->salario = salario;
	this->ajudaDeCusto = ajudaDeCusto;
}

float Administrador::calculaSalario()
{
	return (salario - Empregado::descontoImposto()) + ajudaDeCusto; //AJUDA DE CUSTO VALOR NÃO TRIBUTAVEL PARA CALCULO DO SALARIO.
}

void Administrador::imprimirDetalhes()
{
	Empregado::imprimirDetalhes();
	cout << "Tem uma ajuda de custo de: " << ajudaDeCusto << endl;
	cout << "Totalizando um salario de: " << calculaSalario();
}