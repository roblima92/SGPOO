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

float Vendedor::calculaSalario()
{
    return (salario - Empregado::descontoImposto()) + getComissao(); //VALOR DE COMISSÃO NÃO TRIBUTAVEL PARA CALCULO DO SALARIO.
}

void Vendedor::registrarVenda(float valorVenda)
{
	this->valorVendas += valorVenda;
}

float Vendedor::getComissao()
{
	return valorVendas * (comissao / 100);
}

void Vendedor::imprimirDetalhes()
{
	Empregado::imprimirDetalhes();
	cout << "Vendeu:" << this->valorVendas << endl;
	cout << "Tem comissao de: " << this->comissao << endl;
	cout << "Totalizando um salario de: " << calculaSalario() << endl;
}