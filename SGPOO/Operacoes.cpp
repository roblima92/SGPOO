#include "Operacoes.hpp"
#include <iostream>
#include "Fornecedor.hpp"
#include<iostream>


void Operacoes::Iniciar()
{
    fornecedores.push_back(Fornecedor("gabriel", "rua", "00000-000000", 100));
    fornecedores.push_back(Fornecedor("ronaldo", "ladera", "10000-000000", 100));
    fornecedores.push_back(Fornecedor("maicon", "rua", "20000-000000", 100));
}

void Operacoes::CadastrarFornecedor()
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

void Operacoes::BuscarFornecedor()
{
    string nome;
    cout << "Digite o nome do funcionario" << endl;
    cin >> nome;

    for (size_t i = 0; i < fornecedores.size(); i++)
    {
        if (fornecedores[i].getNome() == nome)
        {
            fornecedores[i].imprimirdetalhes();
        }
    }
}
