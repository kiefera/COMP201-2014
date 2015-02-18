#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	vector<int> idk;
	string lol;
	char *end;
	
	while (cin >> lol)
	{
		switch(lol){
			case"+":
				
				break;
			case"-":
				
				break;
			case'*':
				
				break;
			case'+':
				
				break;
			
		}
	}
}


/*
	Take two numbers, and do an operation
	For example, abc+-cd-* is
	((b+c)-a)*(c-d)
	Basically, b and c are put in the stack and added, then the result is added to the stack and
	subtracted by a which was also placed on the stack. The c - d operation was done, then the result was placed on the stack
	with the result of (b+c)-a and then multiplied
 */