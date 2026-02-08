#include <iostream>
using namespace std;

int main(){

int N, P, i;

cout << "Digite até que número você quer contar: ";
cin >> N;
cout << endl << "Digite o número que você quer pular: ";
cin >> P;

cout << "Contaremos até o número "<< N << " pulando o número " << P << "." << endl;
for(i = 1; i <= N; ++i)
if(i != P) cout << " " << i;


cout << endl;

return 0;
}
