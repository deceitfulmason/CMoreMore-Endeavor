#include <iostream>

using namespace std;

void mostrarBinario(int);

void impar(int);

void semiPiramide(char, int);

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

	//QUESTAO 2

    do {
        cout << endl << "Digite um numero inteiro entre 1 e 8: ";
        cin >> n;
    } while (n < 1 || n > 8);

    int ascii = a;

    cout << endl << a << " em binario eh: ";
    mostrarBinario(ascii);
    cout << " ou " << ascii << " em ascii. ";

    int mascara = 0b00000001 << (n - 1);  // Mascara para pegar o n-esimo bit
    int bit;
    if (ascii & mascara)
        bit = 1;
    else
        bit = 0;

    cout << "O " << n << "-esimo bit de " << a << " eh: " << bit << endl;

	//QUESTAO 3
	impar(n);


	//QUESTAO 4
	cout << endl << "f(n): " << f(n);


	//QUESTAO 5
	semiPiramide(n, a);


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



//QUESTAO 5

void semiPiramide(char a, int n){

for (int a = 1; a <= n; ++a){
	for (int i = 1; i <= a; ++ i){
		cout << a;
}


	cout << endl;
}

}
