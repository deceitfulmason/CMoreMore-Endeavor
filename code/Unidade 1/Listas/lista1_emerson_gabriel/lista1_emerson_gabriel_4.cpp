#include <iostream>
using namespace std;

int main(){
int N, i, o;
		cout << "Digite o valor de N: ";
		cin >> N;

		for(i = 1; i <= N; ++i){
				for(o = 1; o <=i; ++ o){
				cout << o;}
				cout << endl;
		}
return 0;
}
