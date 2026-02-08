#include <iostream>
#include <cmath>

using namespace std;

#define pie 3.141592653589793

void pares(int);
void rquadrada();
void triangulo(int, int);
void circulo(int);
void angulos();

int main()
{
    char opcao;

    do {
        string nome_completo;
        int idade, catA, catB, raioC;

        cin.ignore();
        cout << "Digite o seu nome completo: ";
        getline(cin, nome_completo);
        cout << "Seu nome é: " << nome_completo << endl;

        cout << "Digite a sua idade: ";
        cin >> idade;
        pares(idade);

        cout << endl;
        rquadrada();

        cout << endl << "Agora, iremos calcular um triângulo." << endl;
        cout << "Digite o cateto A: ";
        cin >> catA;
        cout << "Digite o cateto B: ";
        cin >> catB;
        triangulo(catA, catB);

        cout << endl << "Digite o raio de um círculo: ";
        cin >> raioC;
        circulo(raioC);

        cout << endl << "Valores de seno e cosseno de 0° a 90° (passo 5°):" << endl;
        angulos();

        cout << endl << "Digite S para sair ou qualquer outra tecla para continuar: ";
        cin >> opcao;

    } while (opcao != 'S' && opcao != 's');

    return 0;
}


//===============================================================
// Questão 1
//===============================================================

void pares(int idade)
{
    cout << "A sua idade é: " << idade << endl;
    cout << "Os números pares entre 0 e a sua idade são: ";

    for (int i = 0; i <= idade; ++i)
        if (i % 2 == 0)
            cout << i << " ";

    cout << endl;
}


//===============================================================
// Questão 2a
//===============================================================

void rquadrada()
{
    cout << "A raiz quadrada de todos os números pares entre 1 e 100:" << endl;

    for (int i = 1; i <= 100; ++i)
        if (i % 2 == 0)
            cout << "A raiz quadrada de " << i << " é: " << sqrt(i) << endl;
}


//===============================================================
// Questão 2b
//===============================================================

void triangulo(int catA, int catB)
{
    double hip = hypot(catA, catB);
    double area = (catA * catB) / 2.0;
    double perimetro = catA + catB + hip;

    double senA = 0, cosA = 0, tanA = 0;
    double senB = 0, cosB = 0, tanB = 0;

    if (hip != 0) {
        senA = catA / hip;
        cosA = catB / hip;
        senB = catB / hip;
        cosB = catA / hip;
    }

    if (catB != 0) tanA = catA * 1.0 / catB;
    if (catA != 0) tanB = catB * 1.0 / catA;

    cout << "Hipotenusa: " << hip << endl;
    cout << "Área: " << area << endl;
    cout << "Perímetro: " << perimetro << endl;

    cout << "Ângulo A -> "
         << "Seno: " << senA
         << "  Cosseno: " << cosA
         << "  Tangente: " << tanA << endl;

    cout << "Ângulo B -> "
         << "Seno: " << senB
         << "  Cosseno: " << cosB
         << "  Tangente: " << tanB << endl;
}


//===============================================================
// Questão 3
//===============================================================

void circulo(int raioC)
{
    double diametro = 2.0 * raioC;
    double perimetro = 2.0 * pie * raioC;
    double area = pie * raioC * raioC;

    cout << "Diâmetro: " << diametro << endl;
    cout << "Perímetro: " << perimetro << endl;
    cout << "Área: " << area << endl;
}


//===============================================================
// Questão 4
//===============================================================

void angulos()
{
    for (int i = 0; i <= 90; i += 5)
    {
        double rad = i * (pie / 180.0);
        cout << "Ang: " << i << "°  "
             << "Sen: " << sin(rad) << "  "
             << "Cos: " << cos(rad) << endl;
    }
}
