#include <iostream>

using namespace std;

int main(){

int item;
double price;
char currency = '$';

cout << "Type the price of the product: ";
cin >> price;
cout << "Type how many items you bought: ";
cin >> item;
double total_cost = item * price;
cout << "The total cost of the purchase is: " << currency << " " << total_cost << " ";


return 0;
}
