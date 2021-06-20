#include <iostream>
#include <string>
#include "Administrador.hpp"
#include "Fornecedor.hpp"
#include "Operacoes.hpp"
#include "vendedor.hpp"

void Operacoes::Iniciar()
{
    fornecedores.push_back(Fornecedor("Gabriel", "rua", "00000-000000", 100));
    fornecedores.push_back(Fornecedor("Ronaldo", "ladera", "10000-000000", 100));
    fornecedores.push_back(Fornecedor("Maicon", "rua", "20000-000000", 100));
    administradores.push_back(Administrador("Robson", "alguma rua de sapucaia", "3474-5641", 4, 12500, 2000));
    administradores.push_back(Administrador("maria", "alguma rua de gravatai", "3474-5641", 4, 12500, 2000));
    operarios.push_back(Operario("Ruan", "maua", "34546-4654", 1, 4500, 6000, 5));
    vendedores.push_back(Vendedor("et bilu", "espaço", "132465-65465", 666, 10000, 0, 1));
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
    cout << "ID: " << vendedores.size() << endl;
    system("pause");

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
    cout << "\nID: " << administradores.size() << endl;
    system("pause");

    administradores.push_back(Administrador(nome, endereco, telefone, codigoSetor, salario, ajudaDeCusto));
}

void Operacoes::buscarAdministrador()
{
    string nome;
    cout << "Digite o nome ou ID do administrador" << endl;
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
    cout << "\nID: " << fornecedores.size() << endl;
    system("pause");

    fornecedores.push_back(Fornecedor(nome, endereco, telefone, credito));
}

void Operacoes::buscarFornecedor()
{
    string nome;
    cout << "Digite o nome ou ID do fornecedor" << endl;
    cin >> nome;

    for (size_t i = 0; i < fornecedores.size(); i++)
    {
        if (fornecedores[i].getNome() == nome || to_string(i) == nome)
        {
            cout << "ID: " << i << endl;
            fornecedores[i].imprimirDetalhes();
        }
    }
}

void Operacoes::editarPessoa()
{
    string nome;
    string telefone;
    string endereco;
    float salario;
    int codigoSetor;
    float variavel;
    float comissao;
    string numero;
    int id;
    cout << "\n------------------------------------" << endl;
    cout << "Para editar Fornecedor, digite --> 1 " << endl;
    cout << "Para editar Funcionario--Adminstrador, digite --> 2 " << endl;
    cout << "Para editar Funcionario--Operario, digite --> 3 " << endl;
    cout << "Para editar Funcionario--Vendedor, digite --> 4 " << endl;
    cin >> numero;
    cout << "Qual o id da pessoa?" << endl;
    cin >> id;
    cout << "\n------------------------------------" << endl;
    if(numero != "1")
    cout << "Qual o novo nome do nosso funcionario?" << endl;
    cin >> nome;
    cout << "\nQual o novo endereço do nosso funcionario?" << endl;
    cin >> endereco;
    cout << "\nQual o novo telefone do nosso funcionario?" << endl;
    cin >> telefone;
    cout << "\nQual o novo salario base do funcionario?" << endl;
    cin >> salario;

    
    try {
        switch (stoi(numero))
        {
        case 1:
            if (numero == "1");
            cout << "Qual o novo nome do nosso fornecedor?" << endl;
            cin >> nome;
            cout << "\nQual o novo endereço do nosso fornecedor?" << endl;
            cin >> endereco;
            cout << "\nQual o novo telefone do nosso fornecedor?" << endl;
            cin >> telefone;
            cout << "\nQual o valor divida pelo fornecedor?" << endl;
            cin >> variavel;
            cout << "\nQual a nova saldo do fornecedor?" << endl;
            cin >> comissao;
            fornecedores[id].setNome(nome);
            fornecedores[id].setEndereço(endereco);
            fornecedores[id].setTelefone(telefone);
            fornecedores[id].setValorDivida(variavel);
            fornecedores[id].setValorCredito(comissao);
            break;
        case 2:
            cout << "\nQual o novo codigo do setor do funcionario - Administrador?" << endl;
            cin >> codigoSetor;
            cout << "\nQual a nova ajuda de custa do funcionario - Administrador?" << endl;
            cin >> variavel;
            administradores[id].setNome(nome);
            administradores[id].setEndereço(endereco);
            administradores[id].setTelefone(telefone);
            administradores[id].setSalarioBase(salario);
            administradores[id].setCodigoSetor(codigoSetor);
            administradores[id].setAjudaDeCusto(variavel);
            break;
        case 3:
            cout << "\nQual o novo codigo do setor do funcionario - Operario?" << endl;
            cin >> codigoSetor;
            cout << "\nQual o valor produzido pelo funcionario - Operario?" << endl;
            cin >> variavel;
            cout << "\nQual a nova comissao do funcionario - Operario?" << endl;
            cin >> comissao;
            operarios[id].setNome(nome);
            operarios[id].setEndereço(endereco);
            operarios[id].setTelefone(telefone);
            operarios[id].setSalarioBase(salario);
            operarios[id].setCodigoSetor(codigoSetor);
            operarios[id].setProducao(variavel);
            operarios[id].setComissao(comissao);
            break;
        case 4:
            cout << "\nQual o novo codigo do setor do funcionario - Vendedor?" << endl;
            cin >> codigoSetor;
            cout << "\nQual o valor vendido pelo funcionario - Vendedor?" << endl;
            cin >> variavel;
            cout << "\nQual a nova comissao do funcionario - Vendedor?" << endl;
            cin >> comissao;
            vendedores[id].setNome(nome);
            vendedores[id].setEndereço(endereco);
            vendedores[id].setTelefone(telefone);
            vendedores[id].setSalarioBase(salario);
            vendedores[id].setCodigoSetor(codigoSetor);
            vendedores[id].registrarVenda(variavel);
            vendedores[id].setComissao(comissao);
            break;
        default:
            break;
        }
    }
    catch (exception ex)
    {
    }
}

void Operacoes::listarPessoas()
{
    cout << "\n" << endl;

    for (size_t i = 0; i < administradores.size(); i++)
    {
        administradores[i].imprimirDetalhesPessoas();
        cout << "Administrador" << endl;
        cout << "\n*********************" << endl;
    }
    for (size_t i = 0; i < fornecedores.size(); i++)
    {
        fornecedores[i].imprimirDetalhesPessoas();
        cout << "Fornecedor" << endl;
        cout << "\n*********************" << endl;
    }
    for (size_t i = 0; i < vendedores.size(); i++)
    {
        vendedores[i].imprimirDetalhesPessoas();
        cout << "Vendedor" << endl;
        cout << "\n*********************" << endl;
    }
    for (size_t i = 0; i < operarios.size(); i++)
    {
        operarios[i].imprimirDetalhesPessoas();
        cout << "Operario" << endl;
        cout << "\n*********************" << endl;
    }
    system("pause");
}

void Operacoes::listarFornecedores()
{
    int dividatotal = 0;
    cout << "\n" << endl;
    for (size_t i = 0; i < fornecedores.size(); i++)
    {
        fornecedores[i].imprimirDetalhes();
        dividatotal = dividatotal + fornecedores[i].getValorDivida();
        cout << "\n*********************" << endl;
    }
    cout << "O valor total que nossos fornecedores devem é R$" << dividatotal << endl;
    system("pause");
}

void Operacoes::listarEmpregados()
{
    float totalFolha = 0;
    cout << "\n" << endl;
    for (size_t i = 0; i < administradores.size(); i++)
    {
        administradores[i].imprimirDetalhesEmpregados();
        totalFolha = totalFolha + administradores[i].calculaSalario();
        cout << "\n\n*********************" << endl;
    }
    for (size_t i = 0; i < operarios.size(); i++)
    {
        operarios[i].imprimirDetalhesEmpregados();
        totalFolha = totalFolha + operarios[i].calculaSalario();
        cout << "\n\n*********************" << endl;
    }
    for (size_t i = 0; i < vendedores.size(); i++)
    {
        vendedores[i].imprimirDetalhesEmpregados();
        totalFolha = totalFolha + vendedores[i].calculaSalario();
        cout << "\n\n*********************" << endl;
    }
    cout << "Nossa folha de pagamento custa " << totalFolha << endl;
    system("pause");
}

void Operacoes::listarAdministradores()
{
    float totalFolha = 0;
    float ajudaCusto = 0;
    cout << "\n" << endl;
    for (size_t i = 0; i < administradores.size(); i++)
    {
        administradores[i].imprimirDetalhesEmpregados();
        totalFolha = totalFolha + administradores[i].calculaSalario();
        ajudaCusto = ajudaCusto + administradores[i].getAjudaDeCusto();
        cout << "\n*********************" << endl;
    }
    cout << "Administradores recebem um salario total de R$" << totalFolha << endl;
    cout << "As ajudas de custo somam: R$" << ajudaCusto << endl;
    system("pause");
}

void Operacoes::listarOperarios()
{
    float totalfolha = 0;
    float ajudacusto = 0;
    cout << "\n" << endl;
    for (size_t i = 0; i < operarios.size(); i++)
    {
        operarios[i].imprimirDetalhesEmpregados();
        totalfolha = totalfolha + operarios[i].calculaSalario();
        cout << "\n*********************" << endl;
    }
    cout << "Operarios recebem um salario total de R$" << totalfolha << endl;
    system("pause");
}

void Operacoes::listarVendedores()
{
    float totalfolha = 0;
    cout << "\n" << endl;
    for (size_t i = 0; i < vendedores.size(); i++)
    {
        vendedores[i].imprimirDetalhesEmpregados();
        totalfolha = totalfolha + vendedores[i].calculaSalario();
        cout << "\n*********************" << endl;
    }
    cout << "Vendedores recebem um salario total de R$" << totalfolha << endl;
    system("pause");
}