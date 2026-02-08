#include <iostream>
#include <cmath>

using namespace std;

void rquadrada();
void triangulo(int, int);

int main(){

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
        if(i % 2 == 0)
            cout << "A raiz quadrada de " << i << " é: " << sqrt(i) << endl;
        else {
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


