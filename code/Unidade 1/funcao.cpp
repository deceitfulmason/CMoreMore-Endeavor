#include <iostream>

using namespace std;

int funcao(int); /*DEFINITION OF FUNCTION. Before anything, if you're going to use a function, you have to declare it before main.
It goes like this (type of function), be it int, float or void. Then (name of function), better to make it a short but descriptive name for an easy time.
Then you describe the parameters, the variables the user or the code itself will use when calling the function. This is important because when calling
the function, you have to describe the parameters in the same order you declared them in definition.
type -> name -> (parameters);
*/
int n;

int main(){

cout << "Digite o seu zap zap: ";
cin >> n;
cout << endl;
cout << "Que legal o seu zap zap, agora vamos dividir ele por dois!" << endl;
cout << funcao(n);

/*
When calling the function, you have to simply type its name, and what value you will put in the parameter, in this case, it's the variable n.
Now, the code will search outside of main, what does the function do.
*/

cout << endl;

return 0;
}

/*
Now, we have to describe how the function functions(lol), first of, we have to type the type of the function, then define a local variable that
will be a placeholder for the parameter we first defined.
And then, simply process the local variable however we wish, in this case, dividing it by two.

Then, we have to return the new value of a to main
*/
int funcao(int a){

a = a/2;

return a;
}
