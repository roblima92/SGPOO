#include <iostream>
#include <string>
#include "Administrador.hpp"
#include "Fornecedor.hpp"
#include "Operacoes.hpp"
#include "vendedor.hpp"

void Operacoes::Iniciar()
{
    ///DADOS MOCADOS PARA TESTE DAS LISTAGEM
    fornecedores.push_back(Fornecedor("Gabriel", "rua", "00000-000000", 100, 200));
    fornecedores.push_back(Fornecedor("Ronaldo", "ladera", "10000-000000", 100, 300));
    fornecedores.push_back(Fornecedor("Maicon", "rua", "20000-000000", 100, 500));
    administradores.push_back(Administrador("Robson", "alguma rua de sapucaia", "3474-5641", 3, 12500, 2000));
    administradores.push_back(Administrador("Administrador2", "alguma rua de gravatai", "3474-5641", 3, 10000, 3500));
    operarios.push_back(Operario("Operario1", "maua", "34546-4654", 1, 4500, 6000, 5));
    operarios.push_back(Operario("Operario2", "testando", "39996-4654", 1, 1000, 2500, 15));
    vendedores.push_back(Vendedor("Vendedor1", "espaco", "132465-65465", 2, 6020, 2100, 16));
    vendedores.push_back(Vendedor("Vendedor2", "infinita high way", "144465-65465", 2, 10000, 4500, 31));
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
    cout << "\nQual o telefone do nosso funcionario - Operario?" << endl;
    cin >> telefone;
    cout << "\nQual o salario base do funcionario - Operario?" << endl;
    cin >> salario;
    cout << "\nQual o codigo do setor do funcionario - Operario?" << endl;
    cin >> codigoSetor;
    cout << "\nQual o valor produzido pelo funcionario - Operario?" << endl;
    cin >> valorProducao;
    cout << "\nQual a comissao do funcionario - Operario?" << endl;
    cin >> comissao;
    cout << "\n\nID: " << operarios.size() << endl;
    system("pause");

    operarios.push_back(Operario(nome, endereco, telefone, codigoSetor, salario, valorProducao, comissao));
}

void Operacoes::buscarOperario()
{
    string nome;
    cout << "Digite o nome ou ID do operario" << endl;
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
    cout << "\n\nID: " << vendedores.size() << endl;
    system("pause");

    vendedores.push_back(Vendedor(nome, endereco, telefone, codigoSetor, salario, valorVendido, comissao));
}

void Operacoes::buscarVendedor()
{
    string nome;
    cout << "Digite o nome ou ID do vendedor" << endl;
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
    cout << "\n\nID: " << administradores.size() << endl;
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
    float credito;
    float divida;
    cout << "\n------------------------------------" << endl;
    cout << "Qual o nome do nosso Fornecedor?" << endl;
    cin >> nome;
    cout << "\nOnde mora nosso Fornecedor?" << endl;
    cin >> endereco;
    cout << "\nQual o telefone do nosso Fornecedor?" << endl;
    cin >> telefone;
    cout << "\nQuanto de credito tem nosso Fornecedor?" << endl;
    cin >> credito;
    cout << "\nQuanto de divida tem nosso Fornecedor?" << endl;
    cin >> divida;
    cout << "\n\nID: " << fornecedores.size() << endl;
    system("pause");

    fornecedores.push_back(Fornecedor(nome, endereco, telefone, credito, divida));
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
    float variavel1;
    float variavel2;
    string numero;
    int id;
    system("cls");
    cout << "\n------------------------------------" << endl;
    cout << "Para editar Fornecedor, digite --> 1 " << endl;
    cout << "Para editar Adminstrador, digite --> 2 " << endl;
    cout << "Para editar Operario, digite --> 3 " << endl;
    cout << "Para editar Vendedor, digite --> 4 " << endl;
    cin >> numero;
    cout << "Qual o ID da pessoa?" << endl;
    cin >> id;
    cout << "\n------------------------------------" << endl;
    if (numero == "2" || numero == "3" || numero == "4") {
        cout << "Qual o novo nome do nosso funcionario?" << endl;
        cin >> nome;
        cout << "\nQual o novo endereco do nosso funcionario?" << endl;
        cin >> endereco;
        cout << "\nQual o novo telefone do nosso funcionario?" << endl;
        cin >> telefone;
        cout << "\nQual o novo salario base do funcionario?" << endl;
        cin >> salario;
    }

    try {
        switch (stoi(numero))
        {
        case 1:
            cout << "Qual o novo nome do nosso fornecedor?" << endl;
            cin >> nome;
            cout << "\nQual o novo endereco do nosso fornecedor?" << endl;
            cin >> endereco;
            cout << "\nQual o novo telefone do nosso fornecedor?" << endl;
            cin >> telefone;
            cout << "\nQual o valor divida pelo fornecedor?" << endl;
            cin >> variavel1;
            cout << "\nQual a nova saldo do fornecedor?" << endl;
            cin >> variavel2;
            fornecedores[id].setNome(nome);
            fornecedores[id].setEndereço(endereco);
            fornecedores[id].setTelefone(telefone);
            fornecedores[id].setValorDivida(variavel1);
            fornecedores[id].setValorCredito(variavel2);
            break;
        case 2:
            cout << "\nQual o novo codigo do setor do funcionario - Administrador?" << endl;
            cin >> codigoSetor;
            cout << "\nQual a nova ajuda de custa do funcionario - Administrador?" << endl;
            cin >> variavel1;
            administradores[id].setNome(nome);
            administradores[id].setEndereço(endereco);
            administradores[id].setTelefone(telefone);
            administradores[id].setSalarioBase(salario);
            administradores[id].setCodigoSetor(codigoSetor);
            administradores[id].setAjudaDeCusto(variavel1);
            break;
        case 3:
            cout << "\nQual o novo codigo do setor do funcionario - Operario?" << endl;
            cin >> codigoSetor;
            cout << "\nQual o valor produzido pelo funcionario - Operario?" << endl;
            cin >> variavel1;
            cout << "\nQual a nova comissao do funcionario - Operario?" << endl;
            cin >> variavel2;
            operarios[id].setNome(nome);
            operarios[id].setEndereço(endereco);
            operarios[id].setTelefone(telefone);
            operarios[id].setSalarioBase(salario);
            operarios[id].setCodigoSetor(codigoSetor);
            operarios[id].setProducao(variavel1);
            operarios[id].setComissao(variavel2);
            break;
        case 4:
            cout << "\nQual o novo codigo do setor do funcionario - Vendedor?" << endl;
            cin >> codigoSetor;
            cout << "\nQual o valor vendido pelo funcionario - Vendedor?" << endl;
            cin >> variavel1;
            cout << "\nQual a nova comissao do funcionario - Vendedor?" << endl;
            cin >> variavel2;
            vendedores[id].setNome(nome);
            vendedores[id].setEndereço(endereco);
            vendedores[id].setTelefone(telefone);
            vendedores[id].setSalarioBase(salario);
            vendedores[id].setCodigoSetor(codigoSetor);
            vendedores[id].registrarVenda(variavel1);
            vendedores[id].setComissao(variavel2);
            break;
        default:
            cout << "\nErro na operacao. Por favor, reinicie o processo" << endl;
            system("pause");
            break;
        }
    }
    catch (exception ex)
    {
        cout << "\nErro na operacao. Por favor, reinicie o processo" << endl;
        system("pause");
    }
}

void Operacoes::listarPessoas()
{
    cout << "\n" << endl;

    for (size_t i = 0; i < administradores.size(); i++)
    {
        administradores[i].imprimirDetalhesPessoas();
        cout << "-Administrador-" << endl;
        cout << "\n*********************" << endl;
    }
    for (size_t i = 0; i < fornecedores.size(); i++)
    {
        fornecedores[i].imprimirDetalhesPessoas();
        cout << "-Fornecedor-" << endl;
        cout << "\n*********************" << endl;
    }
    for (size_t i = 0; i < vendedores.size(); i++)
    {
        vendedores[i].imprimirDetalhesPessoas();
        cout << "-Vendedor-" << endl;
        cout << "\n*********************" << endl;
    }
    for (size_t i = 0; i < operarios.size(); i++)
    {
        operarios[i].imprimirDetalhesPessoas();
        cout << "-Operario-" << endl;
        cout << "\n*********************" << endl;
    }
    system("pause");
}

void Operacoes::listarEmpregados()
{
    float totalFolha = 0;
    for (size_t i = 0; i < administradores.size(); i++)
    {
        cout << "\n" << endl;
        administradores[i].imprimirDetalhesEmpregados();
        totalFolha = totalFolha + administradores[i].calculaSalario();
        cout << "\n*********************" << endl;
    }
    for (size_t i = 0; i < operarios.size(); i++)
    {
        cout << "\n" << endl;
        operarios[i].imprimirDetalhesEmpregados();
        totalFolha = totalFolha + operarios[i].calculaSalario();
        cout << "*********************" << endl;
    }
    for (size_t i = 0; i < vendedores.size(); i++)
    {
        cout << "\n" << endl;
        vendedores[i].imprimirDetalhesEmpregados();
        totalFolha = totalFolha + vendedores[i].calculaSalario();
        cout << "*********************" << endl;
    }
    cout << "\nNossa folha de pagamento custa: R$" << totalFolha << endl;
    cout << "\n\n" << endl;
    system("pause");
}

void Operacoes::listarAdministradores()
{
    float totalFolha = 0;
    float ajudaCusto = 0;
    for (size_t i = 0; i < administradores.size(); i++)
    {
        cout << "\n" << endl;
        administradores[i].imprimirDetalhesEmpregados();
        totalFolha = totalFolha + administradores[i].calculaSalario();
        ajudaCusto = ajudaCusto + administradores[i].getAjudaDeCusto();
        cout << "\n*********************" << endl;
    }
    cout << "\nAdministradores recebem um salario total de: R$" << totalFolha << endl;
    cout << "As ajudas de custo somam: R$" << ajudaCusto << endl;
    cout << "\n\n" << endl;
    system("pause");
}

void Operacoes::listarOperarios()
{
    float totalFolha = 0;
    for (size_t i = 0; i < operarios.size(); i++)
    {
        cout << "\n" << endl;
        operarios[i].imprimirDetalhesEmpregados();
        totalFolha = totalFolha + operarios[i].calculaSalario();
        cout << "*********************" << endl;
    }
    cout << "\nOperarios recebem um salario total de: R$" << totalFolha << endl;
    cout << "\n\n" << endl;
    system("pause");
}

void Operacoes::listarVendedores()
{
    float totalFolha = 0;
    for (size_t i = 0; i < vendedores.size(); i++)
    {
        cout << "\n" << endl;
        vendedores[i].imprimirDetalhesEmpregados();
        totalFolha = totalFolha + vendedores[i].calculaSalario();
        cout << "*********************" << endl;
    }
    cout << "\nVendedores recebem um salario total de: R$" << totalFolha << endl;
    cout << "\n\n" << endl;
    system("pause");
}

void Operacoes::listarFornecedores()
{
    float dividaTotal = 0;
    for (size_t i = 0; i < fornecedores.size(); i++)
    {
        cout << "\n" << endl;
        fornecedores[i].imprimirDetalhes();
        dividaTotal = dividaTotal - fornecedores[i].obterSaldo();
        cout << "*********************" << endl;
    }
    cout << "\nValor total que nossos fornecedores devem: R$" << dividaTotal << endl;
    cout << "\n\n" << endl;
    system("pause");
}