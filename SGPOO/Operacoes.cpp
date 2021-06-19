#include <iostream>
#include <string>
#include "Administrador.hpp"
#include "Fornecedor.hpp"
#include "Operacoes.hpp"

void Operacoes::Iniciar()
{
    fornecedores.push_back(Fornecedor("Gabriel", "rua", "00000-000000", 100));
    fornecedores.push_back(Fornecedor("Ronaldo", "ladera", "10000-000000", 100));
    fornecedores.push_back(Fornecedor("Maicon", "rua", "20000-000000", 100));
    administradores.push_back(Administrador("Robson", "alguma rua de sapucaia", "3474-5641", 4, 12500, 2000));
    operarios.push_back(Operario("Ruan", "maua", "34546-4654", 1, 4500, 6000, 5));
}

void Operacoes::cadastrarOperario()
{
    string nome;
    string telefone;
    string endereco;
    float salario;
    int codigoSetor;
    float valorProducao;
    float comissao;
    cout << "\n------------------------------------" << endl;
    cout << "Qual o nome do nosso funcionario - Operario?" << endl;
    cin >> nome;
    cout << "\nOnde mora nosso funcionario - Operario?" << endl;
    cin >> endereco;
    cout << "\nQual o telefone do nosso funcionario - Operario?\n" << endl;
    cin >> telefone;
    cout << "\nQual o salario base do funcionario - Operario?\n" << endl;
    cin >> salario;
    cout << "\nQual o codigo do setor do funcionario - Operario?\n" << endl;
    cin >> codigoSetor;
    cout << "\nQual o valor produzido pelo funcionario - Operario?\n" << endl;
    cin >> valorProducao;
    cout << "\nQual a comissao do funcionario - Operario?\n" << endl;
    cin >> comissao;

    operarios.push_back(Operario(nome, endereco, telefone, codigoSetor, salario, valorProducao, comissao));
}

void Operacoes::buscarOperario()
{
    string nome;
    cout << "Digite o nome ou id do operario" << endl;
    cin >> nome;

    for (size_t i = 0; i < operarios.size(); i++)
    {
        if (operarios[i].getNome() == nome || to_string(i) == nome)
        {
            operarios[i].imprimirDetalhes();
        }
    }
}

void Operacoes::cadastrarVendedor()
{
    string nome;
    string telefone;
    string endereco;
    float salario;
    int codigoSetor;
    float valorVendido;
    float comissao;
    cout << "\n------------------------------------" << endl;
    cout << "Qual o nome do nosso funcionario - Vendedor?" << endl;
    cin >> nome;
    cout << "\nOnde mora nosso funcionario - Vendedor?" << endl;
    cin >> endereco;
    cout << "\nQual o telefone do nosso funcionario - Vendedor?" << endl;
    cin >> telefone;
    cout << "\nQual o salario base do funcionario - Vendedor?" << endl;
    cin >> salario;
    cout << "\nQual o codigo do setor do funcionario - Vendedor?" << endl;
    cin >> codigoSetor;
    cout << "\nQual o valor vendido pelo funcionario - Vendedor?" << endl;
    cin >> valorVendido;
    cout << "\nQual a comissao do funcionario - Vendedor?" << endl;
    cin >> comissao;

    vendedores.push_back(Vendedor(nome, endereco, telefone, codigoSetor, salario, valorVendido, comissao));
}

void Operacoes::buscarVendedor()
{
    string nome;
    cout << "Digite o nome ou id do vendedor" << endl;
    cin >> nome;

    for (size_t i = 0; i < vendedores.size(); i++)
    {
        if (vendedores[i].getNome() == nome || to_string(i) == nome)
        {
            vendedores[i].imprimirDetalhes();
        }
    }
}

void Operacoes::cadastrarAdministrador()
{
    string nome;
    string telefone;
    string endereco;
    float salario;
    int codigoSetor;
    float ajudaDeCusto;
    cout << "\n------------------------------------" << endl;
    cout << "Qual o nome do nosso funcionario - Administrador?" << endl;
    cin >> nome;
    cout << "\nOnde mora nosso funcionario - Administrador?" << endl;
    cin >> endereco;
    cout << "\nQual o telefone do nosso funcionario - Administrador?" << endl;
    cin >> telefone;
    cout << "\nQual o salario base do funcionario - Administrador?" << endl;
    cin >> salario;
    cout << "\nQual o codigo do setor do funcionario - Administrador?" << endl;
    cin >> codigoSetor;
    cout << "\nQual o valor da ajuda de custo recebida pelo funcionario - Administrador?" << endl;
    cin >> ajudaDeCusto;

    administradores.push_back(Administrador(nome, endereco, telefone, codigoSetor, salario, ajudaDeCusto));
}

void Operacoes::buscarAdministrador()
{
    string nome;
    cout << "Digite o nome ou id do administrador" << endl;
    cin >> nome;

    for (size_t i = 0; i < administradores.size(); i++)
    {
        if (administradores[i].getNome() == nome || to_string(i) == nome)
        {
            administradores[i].imprimirDetalhes();
        }
    }
}

void Operacoes::cadastrarFornecedor()
{
    string nome;
    string telefone;
    string endereco;
    int credito;
    cout << "\n------------------------------------" << endl;
    cout << "Qual o nome do nosso Fornecedor?" << endl;
    cin >> nome;
    cout << "\nOnde mora nosso Fornecedor?" << endl;
    cin >> endereco;
    cout << "\nQual o telefone do nosso Fornecedor?" << endl;
    cin >> telefone;
    cout << "\nQuanto de credito tem nosso Fornecedor?" << endl;
    cin >> credito;
    Fornecedor forn(nome, endereco, telefone, credito);
}

void Operacoes::buscarFornecedor()
{
    string nome;
    cout << "Digite o nome ou id do fornecedor" << endl;
    cin >> nome;

    for (size_t i = 0; i < fornecedores.size(); i++)
    {
        if (fornecedores[i].getNome() == nome || to_string(i) == nome)
        {
            fornecedores[i].imprimirDetalhes();
        }
    }
}