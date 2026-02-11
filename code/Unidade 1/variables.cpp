#include <iostream>

using namespace std;

/* In this file, I will detail everything to do with VARIABLES.
First off, there are multiple types of varibles ALL of which are required for a specific situation, none of them are useless, if you
want to become a C++ GOD, you'll need to master all of them.

int - Int as in integers refers to whole numbers and their negatives, -3, -2, -1, 0, 1, 2, 3.
double and float - They refer to floating point numbers, with decimals, such as 3.99, 3.14, -87,77.
char - single characters only, 'a', 'b' always surrounded by single quotes.
string - multiple characters, can be considered a combination of chars, text such as "Hello World", surrounded by double quotes.
bool - Refers to boolean variables, can only be 0 or 1.

*/

//Declaring a variable is easy, you start typing the name of the variable you want, then the name.

int x = 1;

//type -> name -> you can do whatever you want with it, in this case, I assigned the integer variable named x, the number 1.

int y;

//or I can simply not assign anything to the variable, however, this requires you to set it's values later in other ways.




float pi = 3.14;
char letter = 'p';
string pie = "the number pi is";
bool boolean = true;
//As shown previously, this is how you declare these types of variables.
int main(){

int x = 3;
/*Also I can do this, which doesn't specifically change the value of the original variable, but it creates a 'local x' that only
affects main.
*/

//But if I do this...
x = 4;
//It changes the global variable outside of main.

cout << "Type a number: ";
cin >> y;
//Here I atribute the value of y, which I purposefuly let empty.

cout << "Here is the result of your number added to y: " << x + y;
// I can do operations with the variables

cout << endl << letter << endl << pie << endl << boolean << pi << endl;



cout << "Here I'm adding the string pie to the char letter: " << letter + pie << endl;

return 0;

}



//Constants are unchangeable and for read-only, use const int number = 15, number will always be 15 but you can use number to change
//other variables, for example. number * 3. Which will result in 45.
