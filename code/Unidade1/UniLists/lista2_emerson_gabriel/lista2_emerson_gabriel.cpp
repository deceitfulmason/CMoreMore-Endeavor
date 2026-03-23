#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define PI 3.141592653589793

void pares(int);
void rquadrada();
void triangulo(int, int);
void circulo(int);
void angulos();
bool continuar();

int main()
{
    string nome_completo;
    int idade, catA, catB, raioC;

    // Questão 1
    cout << "Digite o seu nome completo: ";
    getline(cin, nome_completo);
    cout << "Seu nome é: " << nome_completo << endl;

    cout << "Digite a sua idade: ";
    cin >> idade;
    pares(idade);
    if (!continuar()) return 0;

    // Questão 2a
    rquadrada();
    if (!continuar()) return 0;

    // Questão 2b
    cout << "Digite o cateto A: ";
    cin >> catA;
    cout << "Digite o cateto B: ";
    cin >> catB;
    triangulo(catA, catB);
    if (!continuar()) return 0;

    // Questão 3
    cout << "Digite o raio do círculo: ";
    cin >> raioC;
    circulo(raioC);
    if (!continuar()) return 0;

    // Questão 4
    angulos();

    return 0;
}

//===============================================================
// Função para decidir se para ou não
//===============================================================

bool continuar()
{
    char op;
    cout << "\nDigite S para sair ou qualquer outra tecla para continuar: ";
    cin >> op;
    return (op != 'S' && op != 's');
}

//===============================================================
// Questão 1
//===============================================================

void pares(int idade)
{
    cout << "Os números pares entre 0 e " << idade << " são: ";
    for (int i = 0; i <= idade; i++)
        if (i % 2 == 0)
            cout << i << " ";
    cout << endl;
}

//===============================================================
// Questão 2a
//===============================================================

void rquadrada()
{
    cout << "Raiz quadrada dos números pares de 1 até 100:" << endl;
    for (int i = 2; i <= 100; i += 2)
        cout << "A raiz quadrada de " << i << " é: " << sqrt(i) << endl;
}

//===============================================================
// Questão 2b
//===============================================================

void triangulo(int catA, int catB)
{
    double hip = sqrt(catA * catA + catB * catB);
    double area = (catA * catB) / 2.0;
    double perimetro = catA + catB + hip;

    double senA = catA / hip;
    double cosA = catB / hip;
    double tanA = (catB != 0) ? catA / (double)catB : 0;

    double senB = catB / hip;
    double cosB = catA / hip;
    double tanB = (catA != 0) ? catB / (double)catA : 0;

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
    double perimetro = 2.0 * PI * raioC;
    double area = PI * raioC * raioC;

    cout << "Diâmetro: " << diametro << endl;
    cout << "Perímetro: " << perimetro << endl;
    cout << "Área: " << area << endl;
}

//===============================================================
// Questão 4
//===============================================================

void angulos()
{
    cout << "Senos e cossenos de 0° a 90° (passo 5°):" << endl;
    for (int i = 0; i <= 90; i += 5)
    {
        double rad = i * (PI / 180.0);
        cout << "Ang: " << i << "°  "
             << "Sen: " << sin(rad)
             << "  Cos: " << cos(rad) << endl;
    }
}
