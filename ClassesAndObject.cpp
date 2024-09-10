#include <iostream>
using namespace std;
class Hero {
private:
	// By default data members of a class are private - i.e. you can access the private properties only inside class using getter & setter methods that are public
	int health;

public:
	// All the public data members can be accessed inside as well as outside a class
	char name;
	int age;

	int getHealth() {
		return health;
	}
	
	void setHealth(int h) {
		this->health = h;
	}

	Hero(char name, int age) {
		name = name;
		age = age;
	}

	void print_details() {
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
	}
	// Hero() {
	// 	cout << "Removed default constructor after creating a user-defined constructors" << endl;
	// }

	// static const int justValue = 1999;
	static const int justValue = 1999;
};

int main() {
	// Creation an object
	// Hero Sam;

	// Hero Ron ("B", 75);
	
	cout << Hero::justValue << endl;
	cout << "Output" << endl;

	// Sam.name = 'A';
	// Sam.age = 90;
	// Sam.setHealth(95);

	// cout  << "Hero Sam Health: " << Sam.getHealth() << endl;
	// cout  << "Hero Sam name: " << Sam.name << endl;
	// cout  << "Hero Sam age: " << Sam.age << endl;
	// cout  << "Hero Ron name: " << (*Ron).name << endl;
	// cout  << "Hero Ron age: " << Ron->age << endl;
	// Ron.print_details();
	return 0;
}