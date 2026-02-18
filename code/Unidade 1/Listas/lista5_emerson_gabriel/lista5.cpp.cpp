#include <iostream>
using namespace std;

void mostrarMenu(), opcao1(), opcao2(), opcao3(), opcao4(), opcaoInvalida(), opcao0(), retornarMenu();



int main(){

int seletor = 0;

do{
mostrarMenu();
cin >> seletor;
switch(seletor) {
case 1: opcao1();

}


} while (seletor != 0);


return 0;
};

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