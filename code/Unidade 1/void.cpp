#include <iostream>

using namespace std;

float r;
void funcao(float&);

int main(){

cout << "Digite quantos reais você tem: ";
cin >> r;
cout << "Nossa, olha só quanto dinheiro você tem! Seu larápio! Você tem R$ " << r << ". Mas é uma pena mesmo, porque agora vamos pegar todo o seu dinheiro e dividir por 3!" << endl;
cout << "Observe agora o poder da função void!" << endl;
funcao(r);
cout << "Agora você tem R$ " << r << ". HAHAHAHA, OTÁRIO! Percebeu como eu usei a funcão void para modificar uma variável enquanto o código estava rodando?" << endl;
return 0;
}

void funcao(float &r){


r = r /3;

}
