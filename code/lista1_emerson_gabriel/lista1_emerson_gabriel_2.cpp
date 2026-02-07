#include <iostream>

int main(){

int i;

	std::cout << "Esses são todos os valores entre 1 e 100:";
	for(i = 1; i <= 100; ++i) std::cout << " " << i;

	std::cout << std::endl << "Esses são todos os valores entre 100 e 1:";
	for (i = 100; i >= 1; --i) std::cout << " " << i;

return 0;
}
