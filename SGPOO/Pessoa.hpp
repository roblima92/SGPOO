// SGPOO.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

#include <stdlib.h>
#include <iostream>
#include "Operacoes.hpp"
using namespace std;

int main()
{
public:
	Pessoa(string nome, string endereço, string telefone);
	Pessoa();
	void setNome(string nome);
	string getNome();
	void setEndereço(string endereço);
	string getEndereço();
	void setTelefone(string telefone);
	string getTelefone();
	virtual void imprimirDetalhes();
	void imprimirDetalhesPessoas();

    op.Iniciar();

    while (continuar)
    {
        system("cls");
        cout << "\n\n\nBem vindo ao SGPOO: Sistema de Gestao de Pessoas Orientado ao Objeto\n\n";
        cout << "selecione a opção que deseja:" << endl;
        cout << "cadastrar um Fornecedor, digite --> 1 " << endl;
        cout << "cadastrar um Funcionario--Adminstrador, digite --> 2 " << endl;
        cout << "cadastrar um Funcionario--Operario, digite --> 3 " << endl;
        cout << "cadastrar um Funcionario--Vendedor, digite --> 4 " << endl;
        cout << "editar pessoa, digite --> 5 " << endl;
        cout << "listar todas as pessoas do sistema, digite --> 6 " << endl;
        cout << "listar todas empregados e seu salario total do sistema, digite --> 7 " << endl;
        cout << "listar todas os fornecedores do sistema, digite --> 8 " << endl;
        cout << "listar todas os administradores do sistema, digite --> 9 " << endl;
        cout << "listar todas os operarios do sistema, digite --> 10 " << endl;
        cout << "listar todas os vendedores do sistema, digite --> 11 " << endl;
        cout << "finalizar a execucao, digite --> 0 " << endl;
        cin >> switch_on;
        switch (switch_on)
        {
        case 0:
            cout << "Obrigado por usa nosso sistema" << endl;
            continuar = false;
            break;
        case 1:
            op.cadastrarFornecedor();
            break;
        case 2:
            op.cadastrarAdministrador();
            break;
        case 3:
            op.cadastrarOperario();
            break;
        case 4:
            op.cadastrarVendedor();
            break;
        case 5:
            op.editarpessoa();
            break;
        case 6:
            op.listapessoa();
            break;
        case 7:
            op.listaempregados();
            break;
        case 8:
            op.listafornecedor();
            break;
        case 9:
            op.listaadministradores();
            break;
        case 10:
            op.listaoperarios();
            break;
        case 11:
            op.listavendedores();
            break;
        default:
            cout << "Nao consegui compreender, pode informar novamente?" << endl;
            break;
            system("pause");
        }
    }
}
