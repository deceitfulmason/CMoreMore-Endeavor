#include <iostream>

using namespace std;

void Switch(int&, int&);

int a, b;

int main(){

cout << "Type your 'a' variable: ";
cin >> a;
cout << "Your 'a' variable is: " << a << endl << "Type your 'b' variable: ";
cin >> b;
cout << "Your 'b' variable is: " << b << endl << "Now we will switch them around using the void function" << endl;
Switch(a, b);
cout << "Your new variables are: "<< endl <<"a: " << a <<endl <<  "b: " << b << endl; 

return 0;

}

void Switch(int &a, int &b){
int temp = a;
a = b;
b = temp;
}
