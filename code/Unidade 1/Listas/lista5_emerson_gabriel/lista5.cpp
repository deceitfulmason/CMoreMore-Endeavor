#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class cidadaos
{
private:
        string nomeCompleto, cpf;
        int idade;
        bool estadoCivil; // 1 se casado 0 se solteiro
        double altura, peso, renda;

public:
        void setarNome(string nome)
        {
                nomeCompleto = nome;
        }

        void setarIdade(int age) { idade = age; }

        void setarEstado(bool casado) { estadoCivil = casado; }

        void setarAltura(double height) { altura = height; }

        void setarPeso(double weight) { peso = weight; }

        void setarRenda(double income) { renda = income; }
};

void mostrarMenu(), opcao1(cidadaos pessoas[], int &cadastros), opcao2(), opcao3(), opcao4(), opcaoInvalida(), opcao0(), retornarMenu();

int main()
{

        cidadaos pessoas[10];
        int cadastros = 0;

        int seletor = 0;

        do
        {
                mostrarMenu();
                cin >> seletor;
                switch (seletor)
                {
                case 1:
                        opcao1(pessoas, cadastros);
                        break;
                case 2:
                        opcao2();
                        break;
                case 3:
                        opcao3();
                        break;
                case 4:
                        opcao4();
                        break;
                case 0:
                        opcao0();
                        break;
                default:
                        opcaoInvalida();
                        break;
                }
        } while (seletor != 0);

        return 0;
};



void opcao1(cidadaos pessoas[], int &cadastros)
{

        int quantidade = 0;

        cout << endl << "Quantas pessoas deseja cadastrar?";
        cin >> quantidade;
        cin.ignore();

        for (int i = 0; i < quantidade; i++)
        {
                string nome;
                        cout << "Digite o nome completo da pessoa " << cadastros + 1 << ": ";
                        getline(cin, nome);
                        pessoas[cadastros].setarNome(nome);
                int age;
                        cout << "Digite a idade da pessoa " << cadastros + 1 << ": ";
                        cin >> age;
                        pessoas[cadastros].setarIdade(age);
                bool estado;
                        cout << "Digite o estado civil da pessoa " << cadastros + 1 << "(0 para solteiro, 1 para casado): ";
                        cin >> estado;
                        pessoas[cadastros].setarEstado(estado);
                double height;
                        cout << "Digite a altura da pessoa " << cadastros + 1 << ": ";
                        cin >> height;
                        pessoas[cadastros].setarAltura(height);
                double weight;
                        cout << "Digite o peso da pessoa " << cadastros + 1 << ": ";
                        cin >> weight;
                        pessoas[cadastros].setarPeso(weight);

                
                
                        double income;

                cadastros++;
        }

/*
       class cidadaos
{
private:
        string nomeCompleto, cpf;
        int idade;
        bool estadoCivil; // 1 se casado 0 se solteiro
        double altura, peso, renda;

public:
        void setarNome(string nome)
        {
                nomeCompleto = nome;
        }

        void setarIdade(int age) { idade = age; }

        void setarEstado(bool casado) { estadoCivil = casado; }

        void setarAltura(double height) { altura = height; }

        void setarPeso(double weight) { peso = weight; }

        void setarRenda(double income) { renda = income; }
}; */




        retornarMenu();
};

void opcao2()
{
        cout << "Vc escolheu a opcao 2";
        retornarMenu();
};

void opcao3()
{
        cout << "Vc escolheu a opcao 3";
        retornarMenu();
};

void opcao4()
{
        cout << "Vc escolheu a opcao 4";
        retornarMenu();
};

void opcao0()
{
        cout << endl
             << "Saindo do programa..." << endl;
}

void mostrarMenu()
{
        cout << "Bem-vindo, selecione uma opcao" << endl
             << "(1) Cadastramento" << endl
             << "(2) Ver dados"
             << endl
             << "(3) Media e desvio padrao" << endl
             << "(4) Calculo de IMC" << endl
             << "(0) Sair do programa" << endl;
};

void opcaoInvalida()
{
        cout << endl
             << "Opcao invalida, digite um numero entre 0 e 4!";
}

void retornarMenu()
{
        cout << "Operacao realizada!!! Retornando ao menu..." << endl;
}