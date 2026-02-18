#include <iostream>
using namespace std;

//Constructors are special methods which are called automatically when the an object of a class
//is created

class myClass{
	public:
//To create a constructor, use the same name as the class, followed by a parentheses, as if it 
//was a function
	myClass(){cout << "Hello world!";}
//However, unlike a function, a constructor has no return type, not even void.
};


//Constructors, just like regular functions, can also take parameters, which can be used for
//setting initial values for attributes


class Car{
	public:
	string brand;
	string model;
	int year;
		Car(string x, string y, int z) {
		brand = x;
		model = y;
		year = z;
/*
This is a constructor with parameters, as you can see, it has the same name of the class, but
it has paramaters which are given the same value as the classes variables

Also, has no return.
*/
		}
};

int main(){

	myClass myObj;

	cout << endl;

//Creates an object myCar which uses the Car class, and initializes its parameters with the
//given values.
	Car myCar0("BMW", "X5", 1999);
	Car myCar1("Ford", "Mustang", 1969);



//Prints the values

cout << myCar0.brand << " " << myCar0.model << " " << myCar0.year << endl;

return 0;
};
