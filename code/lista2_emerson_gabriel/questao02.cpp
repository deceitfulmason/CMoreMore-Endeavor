#include <iostream>
#include <cmath>

const double PI = 3.141592653589793;

using namespace std;

void rquadrada();
void triangulo(int, int);

int main()
{
    int catA, catB;
    cout << endl;
    rquadrada();

    cout << endl << "Agora, iremos calcular um triângulo, digite o cateto A: ";
    cin >> catA;
    cout << "Digite o cateto B: ";
    cin >> catB;
    triangulo(catA, catB);

    return 0;
}


//===============================================================
// Questão 2a
//===============================================================

void rquadrada()
{
    cout << "A raiz quadrada de todos os números pares entre 0 e 100 são:" << endl;

    for (int i = 0; i <= 100; ++i)
    {
        if (i % 2 == 0)
            cout << "A raiz quadrada de " << i << " é: " << sqrt(i) << endl;
    }
}


//===============================================================
// Questão 2b
//===============================================================

void triangulo(int catA, int catB)
{
    double hip = hypot(catA, catB);
    double area = (catA * catB) / 2.0;

    double radA = atan2(catA, catB);
    double radB = atan2(catB, catA);

    double angA = radA * 180.0 / PI;
    double angB = radB * 180.0 / PI;

    double senA = 0, cosA = 0, tanA = 0;
    double senB = 0, cosB = 0, tanB = 0;

    if (hip != 0)
    {
        senA = catA / hip;
        cosA = catB / hip;

        senB = catB / hip;
        cosB = catA / hip;
    }

    if (catB != 0)
        tanA = catA * 1.0 / catB;

    if (catA != 0)
        tanB = catB * 1.0 / catA;

    cout << "A hipotenusa é: " << hip
         << endl << "A área é: " << area
         << endl << "O perímetro é: " << catA + catB + hip

         << endl << "O ângulo A é: " << angA << "°"
         << endl << "O seno de A é: " << senA
         << endl << "O cosseno de A é: " << cosA
         << endl << "A tangente de A é: " << tanA

         << endl << "O ângulo B é: " << angB << "°"
         << endl << "O seno de B é: " << senB
         << endl << "O cosseno de B é: " << cosB
         << endl << "A tangente de B é: " << tanB << endl;
}
