#include <iostream> 
using namespace std;

//Classes and objects are two main aspects of object oriented progamming

/*A class defines what an object should look like, and an object is
created based on that class.

Classes are archetypes, and objects are just things made based themselves
on the classes.
Ex.: Fruit is a class, Apples, bananas and mangos are objects.

*/


//When you create an object from a class, it inherits all the variables
//and functions defined inside that class.

//Class is a user-defined data type that we can use in our program, and it
//works as an object cconstructorwdd


//BASIC SYNTAX OF A CLASS
//class "NameOfClass"
class myClass{
	//Declaring access specifier
	public:
	//Declaring attributes
		int myNum;
		string myString;
};




int main(){


myClass myObj;
	myObj.myNum = 15;
	myObj.myString = "Hello";


cout << myObj.myNum << endl << myObj.myString;

//test
return 0;
}

