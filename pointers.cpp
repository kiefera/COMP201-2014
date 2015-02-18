#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int variable;
	variable = 500;
	
	//Declaring a pointer also declares a variable
	//That memory is also on the stack
	int* pointer;
	
	//Initialize the pointer to where variable happens to be
	pointer = &variable;
	
	// *pointer de-references the pointer
	cout << *pointer << endl;
	
	return 0;
}