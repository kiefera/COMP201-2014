#include <iostream>

using namespace std;

class Animal {
public:
	Animal()
	{
		greeting = "hi";
	}

	// This is the constructor
	Animal (string thing)
	{
		greeting = thing;
	}
	
	void speak()
	{
		cout << greeting << endl;
	}
	
private:
	string greeting;

};

int main()
{
	//Animal lion; //This calls the default constructor
	Animal lion("roar"); //Calls the same function, but puts roar in the string
	
	Animal cat("woof");
	Animal elephant("meow");
	//These animals are on the stack
	
	lion.speak();
	cat.speak();
	elephant.speak();
	
	//These animals live on the heap/off the stack
	Animal * tiger = new Animal("roar");
	Animal * liger = new Animal("lol");
	Animal * person ;
	
	person = new Animal("Don't eat me");
	
	// These animals are pointers
	person -> speak;
	
	delete tiger;
}