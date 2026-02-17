#include <iostream>
using namespace std;


class Car{
	public:
	string brand;	
	string model;
	int year;
};

int main(){


Car carObj0;
	carObj0.brand = "BMW";
	carObj0.model = "X9";
	carObj0.year = 1999;

cout << endl << "BMW car: " << carObj0.brand << endl;
cout << carObj0.model << endl << carObj0.year;



return 0;
}

