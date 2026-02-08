#include <iostream>
#include <cmath>
#include <string>

using namespace std;

#define pie 3.14159265

void pares(int);
void rquadrada(double);
void triangulo(int, int);
void circulo(int);
void angulos(int);

int main(){

    string nome_completo;
    int idade, catA, catB, raioC;
    double raiz = 0;
    int ang = 0;

    cout << "Digite o seu nome completo: ";
    getline(cin, nome_completo);  // agora lê nome completo
    cout << "Seu nome é: " << nome_completo << endl;

    cout << "Digite a sua idade: ";
    cin >> idade;
    pares(idade);

    cout << endl;
    rquadrada(raiz);

    cout << endl << "Agora, iremos calcular um triângulo, digite o cateto A: ";
    cin >> catA;
    cout << "Digite o cateto B: ";
    cin >> catB;
    triangulo(catA, catB);
    cout << endl << "Diga o raio de um círculo: ";
    cin >> raioC;
    circulo(raioC);

    cout << endl << "Aqui estão todos os valores de seno e coseno de ângulos de 0° a 90°:" << endl;
    angulos(ang);

    return 0;
}


//===============================================================
// Questão 1
//===============================================================

void pares(int idade)
{
    cout << "A sua idade é: " << idade << endl
         << "Os numeros pares entre 0 e a sua idade são: ";

    for (int i = 0; i <= idade; ++i)
        if(i % 2 == 0)
            cout << i << " ";
}


//===============================================================
// Questão 2a
//===============================================================

void rquadrada(double raiz)
{
    cout << "A raiz quadrada de todos os números pares entre 0 e 100 são:" << endl;

    for (int i = 0; i <= 100; ++i)
    {
        if(i % 2 == 0)
            cout << "A raiz quadrada de " << i << " é: " << sqrt(i) << endl;
        else {
            cout << i << " não é par." << endl;
            continue;
        }
    }
}


//===============================================================
// Questão 2b
//===============================================================

void triangulo(int catA, int catB)
{
    float hip = hypot(catA, catB);
    float area = (catA * catB) / 2.0;

    float radA = atan2(catA, catB);
    float radB = atan2(catB, catA);

    float angA = radA * 180 / M_PI;
    float angB = radB * 180 / M_PI;

    cout << "A hipotenusa é: " << hip
         << endl << "A área é: " << area
         << endl << "O perímetro é: " << catA + catB + hip
         << endl << "O ângulo A é: " << angA << "°"
         << endl << "O ângulo B é: " << angB << "°";
}


//===============================================================
// Questão 3
//===============================================================

void circulo (int raioC)
{
    float diametro = 2 * raioC;
    float perimetro = 2 * pie * raioC;
    float area = pie * pow(raioC, 2);

    cout << "O perímetro é: " << perimetro
         << endl << "O diâmetro é: " << diametro
         << endl << "A área é: " << area << endl;
}


//===============================================================
// Questão 4
//===============================================================

void angulos(int ang)
{
    for(int i = 0; i <= 90; i += 5)
    {
        float rad = i * (pie / 180);
        cout << "Ang: " << i << "°  "
             << "Sen: " << sin(rad) << "  "
             << "Cos: " << cos(rad) << endl;
    }
}
