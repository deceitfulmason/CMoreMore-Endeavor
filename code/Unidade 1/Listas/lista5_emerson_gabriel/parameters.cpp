#include <iostream>
using namespace std;

class Car{
	public:
		int speed(int maxSpeed);
};

		int Car::speed(int maxSpeed){
		return maxSpeed;
		}


int main(){
Car obj0;
cout << obj0.speed(200);


return 0;
};
