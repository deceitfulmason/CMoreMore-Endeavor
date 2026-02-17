#include <iostream>
#include <string>
#include <cmath>

using  namespace std;



		class pessoa{
		private:
		string nomeCompleto, cpf;
		int idade;
		bool estadoCivil; //1 se casado 0 se solteiro
		double altura, peso, renda;
		public:

		};


void mostrarMenu(), opcao1(), opcao2(), opcao3(), opcao4(), opcaoInvalida(), opcao0(), retornarMenu();



int main(){

int seletor;

mostrarMenu();
cin >> seletor;

if (seletor == 1) opcao1();
if (seletor == 2) opcao2();
if (seletor == 3) opcao3();
if (seletor == 4) opcao4();
if (seletor == 0) opcao0();
if (seletor < 0 | seletor > 4) opcaoInvalida();


return 0;
}



void mostrarMenu(){
cout << "Bem-vindo, selecione uma opcao" << endl << "(1) Quantas pessoas deseja cadastrar?" << endl << "(2) Ver dados"
<< endl << "(3) Media e desvio padrao" << endl << "(4) Calculo de IMC" << endl << "(0) Sair do programa" << endl;
};



void opcao1(){
cout << "Vc escolheu a opcao 1";
retornarMenu();
};


void opcao2(){
cout << "Vc escolheu a opcao 2";
retornarMenu();
};

void opcao3(){
cout << "Vc escolheu a opcao 3";
retornarMenu();
};

void opcao4(){
cout << "Vc escolheu a opcao 4";
retornarMenu();
};

void opcao0(){
cout << endl << "Saindo do programa..." << endl;
}

void opcaoInvalida(){
cout << endl << "Opcao invalida, digite um numero entre 0 e 4!";
retornarMenu();
}

void retornarMenu(){
cout << "Operacao realizada!!! Retornando ao menu..." << endl;

main();
};


