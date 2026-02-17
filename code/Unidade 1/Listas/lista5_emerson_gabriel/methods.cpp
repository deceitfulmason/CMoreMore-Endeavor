#include <iostream>
using namespace std;

//methods are just what functions inside a class are called
//Two ways to define em
//Inside or outside class definition

class myClass {
	public:
	void myMethod(){cout << "Hello world" << endl;}
	//myMethod is just a function defined inside a class
};

class myClassOut {
	public:
	void myMethod0(); //here we just define the function
//without saying what it does
};


void myClassOut::myMethod0(){
	cout << "Hello world! But better." << endl;
}

int main(){

myClass myObj0;
	myObj0.myMethod();


myClassOut myObj1;
myObj1.myMethod0();
return 0;
};
