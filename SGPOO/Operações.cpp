#include "Operações.hpp"
#include <iostream>
#include "Fornecedor.hpp"

void Operações::CadastrarFuncionario()
{
    cout << "------------------------------------" << endl;
    string nome;
    string telefone;
    string endereco;
    int credito;
    cout << "Qual o nome do nosso Fornecedor?" << endl;
    cin >> nome;
    cout << "Onde mora nosso Fornecedor?" << endl;
    cin >> endereco;
    cout << "Qual o telefone do nosso Fornecedor?" << endl;
    cin >> telefone;
    cout << "Quanto de credito tem nosso Fornecedor?" << endl;
    cin >> credito;
    Fornecedor forn(nome, endereco, telefone, credito);
}

void Operações::BuscarPessoa(string param)
{
}
