#include <iostream>
using namespace std;

void pares(int);

int main(){

	    string nome_completo;
	    int idade;

	    cout << "Digite o seu nome completo: ";
	    getline(cin, nome_completo);
	    cout << "Seu nome é: " << nome_completo << endl;

	    cout << "Digite a sua idade: ";
	    cin >> idade;
	    pares(idade);

return 0;
}

void pares(int idade)
{
		    cout << "A sua idade é: " << idade << endl
		         << "Os numeros pares entre 0 e a sua idade são: ";

		    for (int i = 0; i <= idade; ++i)
		        if(i % 2 == 0)
		            cout << i << " ";
}
