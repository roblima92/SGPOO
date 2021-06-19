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
    return Empregado::calculaSalario() + getComissao();
}

void Vendedor::imprimirDetalhes()
{
	cout << "Vendeu:" << this->valorVendas << endl;
	cout << "Tem comissao = " << this->comissao << endl;
	cout << "Salario total = " << calculaSalario() << endl;
}

void Vendedor::registrarVenda(float valorVenda)
{
	this->valorVendas += valorVenda;
}

float Vendedor::getComissao()
{
	return valorVendas * (comissao / 100);
}