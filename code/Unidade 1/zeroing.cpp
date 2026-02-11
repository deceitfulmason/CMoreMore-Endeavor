#include <iostream>

using namespace std;

int x;

void zeroing(int &);

int main(){

cout << "Type your variable so it can be zero'ed: " << endl;
cin >> x;
zeroing(x);
cout << x << endl;

return 0;
}

void zeroing(int &x){
x = 0;
}


