#include <iostream>

using namespace std;

void mostrarBinario(int);

void impar(int);

int f(int n);

int main(){

    char a;
    int n;

    cout << "Digite um caractere: ";
    cin >> a;

	//QUESTAO 1

    if(a >= 48 && a <= 57)
        cout << endl << a << " eh um numero" << endl;

    if((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
        cout << endl << a << " eh uma letra" << endl;


    do {
        cout << endl << "Digite um numero inteiro entre 1 e 8: ";
        cin >> n;
    } while (n < 1 || n > 8);

    int ascii = a;

    cout << endl << a << " em binario eh: ";
    mostrarBinario(ascii);
    cout << " ou " << ascii << " em ascii. ";

    int mascara = 0b00000001 << (n - 1);  // Máscara para pegar o n-ésimo bit
    int bit;
    if (ascii & mascara)
        bit = 1;
    else
        bit = 0;

    cout << "O " << n << "-esimo bit de " << a << " eh: " << bit << endl;


	impar(n);

	cout << endl << "f(n): " << f(n);

    return 0;
}


// QUESTAO 2
void mostrarBinario(int ascii)
{
    for (int i = 7; i >= 0; i--) {
        int binario = (ascii >> i) & 0b00000001;
        cout << binario;
    }
}

//QUESTAO 3

void impar(int n)
{
	if(n % 2 == 0)
		cout << endl << n << " eh par.";
	else
		cout << endl << n << " eh impar.";



}

//QUESTAO 4

int f(int n)
{
return n*n + 5 * n + 2;
}