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

/*float Empregado::calculaSalario() {
	//NADA AQUI. CADA CLASSE VAI REIMPLEMENTAR O METODO calculaSalario DA PARENT CLASS EMPREGADO.
	//PORTANTO, calculaSalario NÃO PRECISA SER IMPLEMENTADO NA CLASSE EMPREGADO.
}*/

float Empregado::descontoImposto()
{
	//METODO QUE CALCULA O IMPOSTO A SER DESCONTADO DO SALARIO;
	if (salario < 1903.99) {
		return 0;
	}
	else if (salario >= 1903.99 && salario <= 2826.65) {
		return (salario * 7.5) / 100;
	}
	else if (salario >= 2826.66 && salario <= 3751.05) {
		return (salario * 15) / 100;
	}
	else if (salario >= 3751.06 && salario <= 4664.68) {
		return (salario * 22.5) / 100;
	}
	else {
		return (salario * 27.5) / 100;
	}
}

void Empregado::imprimirDetalhes()
{
	Pessoa::imprimirDetalhes();
	cout << "trabalha no setor: " << codigoSetor << endl;
	cout << "Salario bruto: " << salario << endl;
	cout << "desconto imposto" << descontoImposto() << endl;

}

void Empregado::imprimirDetalhesEmpregados()
{
	this->imprimirDetalhes();
}
