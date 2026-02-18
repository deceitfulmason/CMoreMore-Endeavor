#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

class cidadaos
{
private:
    string nomeCompleto, cpf;
    int idade;
    bool estadoCivil;
    double altura, peso, renda;

public:
    // CONSTRUTOR
    cidadaos()
    {
        nomeCompleto = "Nao informado";
        cpf = "00000000000";
        idade = 0;
        estadoCivil = false;
        altura = 0.0;
        peso = 0.0;
        renda = 0.0;

        cout << "Objeto pessoa criado com valores padrao." << endl;
    }

    // DESTRUTOR
    ~cidadaos()
    {
        cout << "Pessoa descadastrada." << endl;
    }

    void setarNome(string nome) { nomeCompleto = nome; }
    void setarCpf(string documento) { cpf = documento; }
    void setarIdade(int age) { idade = age; }
    void setarEstado(bool casado) { estadoCivil = casado; }
    void setarAltura(double height) { altura = height; }
    void setarPeso(double weight) { peso = weight; }
    void setarRenda(double income) { renda = income; }

    string getNome() const { return nomeCompleto; }
    string getCpf() const { return cpf; }
    int getIdade() const { return idade; }
    bool getCasado() const { return estadoCivil; }
    double getHeight() const { return altura; }
    double getWeight() const { return peso; }
    double getIncome() const { return renda; }

    double calcularIMC() const
    {
        if (altura == 0) return 0;
        return peso / (altura * altura);
    }

    string getCpfFormatado() const
    {
        if (cpf.length() != 11) return cpf; // CPF invalido
        return cpf.substr(0,3) + "." + cpf.substr(3,3) + "." + cpf.substr(6,3) + "-" + cpf.substr(9,2);
    }
};

// Protótipos das funções
void mostrarMenu();
void opcao1(cidadaos pessoas[], int &cadastros);
void opcao2(cidadaos pessoas[], int cadastros);
void opcao3(cidadaos pessoas[], int cadastros);
void opcao4(cidadaos pessoas[], int cadastros);
void opcaoInvalida();
void opcao0();
void retornarMenu();


bool validarCPF(const string& cpf)
{
    if(cpf.length() != 11) return false;
    for(char c : cpf)
        if(!isdigit(c)) return false;
    return true;
}

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
            opcao2(pessoas, cadastros);
            break;
        case 3:
            opcao3(pessoas, cadastros);
            break;
        case 4:
            opcao4(pessoas, cadastros);
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
}

// =================== Funções ===================

void opcao1(cidadaos pessoas[], int &cadastros)
{
    int quantidade = 0;

    do
    {
        cout << endl << "Quantas pessoas deseja cadastrar? ";
        cin >> quantidade;

        if (quantidade < 0 || quantidade > 10 - cadastros)
            cout << "Quantidade de pessoas invalida!" << endl;

    } while (quantidade < 0 || quantidade > 10 - cadastros);

    for (int i = 0; i < quantidade; i++)
    {
        cin.ignore(); 

        string nome;
        cout << "Digite o nome completo da pessoa " << cadastros + 1 << ": ";
        getline(cin, nome);
        pessoas[cadastros].setarNome(nome);

        string documento;
        do
        {
            cout << "Digite o CPF da pessoa " << cadastros + 1 << " (apenas numeros, 11 digitos): ";
            getline(cin, documento);
            if (!validarCPF(documento))
                cout << "CPF invalido! Tente novamente." << endl;
        } while (!validarCPF(documento));
        pessoas[cadastros].setarCpf(documento);

        int age;
        do
        {
            cout << "Digite a idade da pessoa " << cadastros + 1 << ": ";
            cin >> age;
            if (age <= 0 || age >= 123)
                cout << "Idade invalida!" << endl;
        } while (age <= 0 || age >= 123);
        pessoas[cadastros].setarIdade(age);

        int estado;
        do
        {
            cout << "Digite o estado civil da pessoa "
                 << cadastros + 1
                 << " (0 solteiro, 1 casado): ";
            cin >> estado;
            if (estado != 0 && estado != 1)
                cout << "Valor invalido!" << endl;
        } while (estado != 0 && estado != 1);
        pessoas[cadastros].setarEstado((bool)estado);

        double height;
        do
        {
            cout << "Digite a altura da pessoa "
                 << cadastros + 1
                 << " (em metros): ";
            cin >> height;
            if (height <= 0.4 || height >= 2.72)
                cout << "Valor invalido!" << endl;
        } while (height <= 0.4 || height >= 2.72);
        pessoas[cadastros].setarAltura(height);

        double weight;
        do
        {
            cout << "Digite o peso da pessoa "
                 << cadastros + 1 << ": ";
            cin >> weight;
            if (weight < 2.7 || weight > 635)
                cout << "Valor invalido!" << endl;
        } while (weight < 2.7 || weight > 635);
        pessoas[cadastros].setarPeso(weight);

        double income;
        do
        {
            cout << "Digite a renda da pessoa "
                 << cadastros + 1 << ": ";
            cin >> income;
            if (income <= 0)
                cout << "Digite um valor maior que 0!" << endl;
        } while (income <= 0);
        pessoas[cadastros].setarRenda(income);

        cadastros++;
    }

    retornarMenu();
}

void opcao2(cidadaos pessoas[], int cadastros)
{
    int escolha;
    do
    {
        cout << endl << "===== VISUALIZAR DADOS =====" << endl;
        cout << "(1) Nome" << endl;
        cout << "(2) CPF" << endl;
        cout << "(3) Idade" << endl;
        cout << "(4) Estado civil" << endl;
        cout << "(5) Altura" << endl;
        cout << "(6) Peso" << endl;
        cout << "(7) Renda" << endl;
        cout << "(0) Voltar ao menu principal" << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;

        if (cadastros == 0 && escolha != 0)
        {
            cout << endl << "Nenhuma pessoa cadastrada." << endl;
            continue;
        }

        switch (escolha)
        {
        case 1:
            for (int i = 0; i < cadastros; i++)
                cout << i + 1 << " - " << pessoas[i].getNome() << endl;
            break;
        case 2:
            for (int i = 0; i < cadastros; i++)
                cout << i + 1 << " - " << pessoas[i].getCpfFormatado() << endl;
            break;
        case 3:
            for (int i = 0; i < cadastros; i++)
                cout << i + 1 << " - " << pessoas[i].getIdade() << endl;
            break;
        case 4:
            for (int i = 0; i < cadastros; i++)
                cout << i + 1 << " - " << (pessoas[i].getCasado() ? "Casado" : "Solteiro") << endl;
            break;
        case 5:
            for (int i = 0; i < cadastros; i++)
                cout << i + 1 << " - " << pessoas[i].getHeight() << endl;
            break;
        case 6:
            for (int i = 0; i < cadastros; i++)
                cout << i + 1 << " - " << pessoas[i].getWeight() << endl;
            break;
        case 7:
            for (int i = 0; i < cadastros; i++)
                cout << i + 1 << " - " << pessoas[i].getIncome() << endl;
            break;
        case 0:
            cout << "Retornando ao menu principal..." << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
            break;
        }

    } while (escolha != 0);

    retornarMenu();
}



void opcao3(cidadaos pessoas[], int cadastros)
{
    if (cadastros == 0)
    {
        cout << "Nenhuma pessoa cadastrada." << endl;
        retornarMenu();
        return;
    }

    double somaIdade = 0, somaRenda = 0, somaAltura = 0, somaPeso = 0;
    for (int i = 0; i < cadastros; i++)
    {
        somaIdade += pessoas[i].getIdade();
        somaRenda += pessoas[i].getIncome();
        somaAltura += pessoas[i].getHeight();
        somaPeso += pessoas[i].getWeight();
    }

    double mediaIdade = somaIdade / cadastros;
    double mediaRenda = somaRenda / cadastros;
    double mediaAltura = somaAltura / cadastros;
    double mediaPeso = somaPeso / cadastros;

    double dpIdade = 0, dpRenda = 0, dpAltura = 0, dpPeso = 0;
    for (int i = 0; i < cadastros; i++)
    {
        dpIdade += pow(pessoas[i].getIdade() - mediaIdade, 2);
        dpRenda += pow(pessoas[i].getIncome() - mediaRenda, 2);
        dpAltura += pow(pessoas[i].getHeight() - mediaAltura, 2);
        dpPeso += pow(pessoas[i].getWeight() - mediaPeso, 2);
    }

    dpIdade = sqrt(dpIdade / cadastros);
    dpRenda = sqrt(dpRenda / cadastros);
    dpAltura = sqrt(dpAltura / cadastros);
    dpPeso = sqrt(dpPeso / cadastros);

    cout << endl << "===== MEDIAS =====" << endl;
    cout << "Idade: " << mediaIdade << endl;
    cout << "Renda: " << mediaRenda << endl;
    cout << "Altura: " << mediaAltura << endl;
    cout << "Peso: " << mediaPeso << endl;

    cout << endl << "===== DESVIO PADRAO =====" << endl;
    cout << "Idade: " << dpIdade << endl;
    cout << "Renda: " << dpRenda << endl;
    cout << "Altura: " << dpAltura << endl;
    cout << "Peso: " << dpPeso << endl;

    retornarMenu();
}

void opcao4(cidadaos pessoas[], int cadastros)
{
    if (cadastros == 0)
    {
        cout << "Nenhuma pessoa cadastrada." << endl;
        retornarMenu();
        return;
    }

    cout << endl << "===== IMC =====" << endl;

    for (int i = 0; i < cadastros; i++)
    {
        double imc = pessoas[i].calcularIMC();
        cout << i + 1 << " - " << pessoas[i].getNome() << " | IMC: " << imc;
        cout << (imc >= 30 ? " | Obeso" : " | Nao obeso") << endl;
    }

    retornarMenu();
}

void opcao0()
{
    cout << endl << "Saindo do programa..." << endl;
}

void mostrarMenu()
{
    cout << endl;
    cout << "===== ESCOLHA UMA OPCAO =====" << endl
         << "(1) Cadastramento" << endl
         << "(2) Ver dados" << endl
         << "(3) Media e desvio padrao" << endl
         << "(4) Calculo de IMC" << endl
         << "(0) Sair do programa" << endl;
}

void opcaoInvalida()
{
    cout << "Opcao invalida, digite um numero entre 0 e 4!" << endl;
}

void retornarMenu()
{
    cout << "Operacao realizada! Retornando ao menu..." << endl;
}
