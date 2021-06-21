#include "Vendedor.hpp"

Vendedor::Vendedor(string nome, string endereco, string telefone, int codigoSetor, float salario, float valorVendas, float comissao)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	this->codigoSetor = codigoSetor;
	this->salario = salario;
	this->comissao = comissao;
	this->valorVendas = valorVendas;
}

Vendedor::Vendedor()
{
	this->valorVendas = 0;
	this->comissao = 0;
}

float Vendedor::calculaSalario()
{
	return (salario - Empregado::descontoImposto()) + getComissao(); //VALOR DE COMISSÃO NÃO TRIBUTAVEL PARA CALCULO DO SALARIO.
}

void Vendedor::registrarVenda(float valorVenda)
{
	this->valorVendas = valorVenda;
}

void Vendedor::setComissao(float comissao)
{
	this->comissao = comissao;
}

float Vendedor::getComissao()
{
	return valorVendas * (comissao / 100);
}

void Vendedor::imprimirDetalhes()
{
	Empregado::imprimirDetalhes();
	cout << "Vendeu: R$" << valorVendas << endl;
	cout << "Recebe " << comissao << "% de comissao" << endl;
	cout << "Totalizando um salario de: R$" << calculaSalario() << endl;
}