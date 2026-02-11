#include <iostream>

using namespace std;

double x;
void doubler(double &x);


int main(){
cout << "Welcome to the doubler! Type your awesome floating point digit so our awesome doubler can double it: ";
cin >> x;
doubler(x);
cout <<  x << endl;

return 0;
}

void doubler (double &y){
	y *= 2;
}
