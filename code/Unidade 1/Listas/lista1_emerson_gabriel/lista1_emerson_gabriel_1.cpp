#include <iostream>
using namespace std;

void numIdade (int);

int main(){
	string nome_completo;
	int idade;

	cout <<  "Digite o seu nome completo: ";
	getline(cin, nome_completo);
	cout << endl << "O seu nome completo é: " << nome_completo;

	cout << endl << "Digite a sua idade: ";
	cin >> idade;
	cout << endl << "Os números entre 0 e a sua idade são:";
	numIdade(idade);
	cout << endl;
return 0;
}

void numIdade (int idade){
		int i;
		for(i = 0; i < idade; ++i) cout << " " << i;
		}
