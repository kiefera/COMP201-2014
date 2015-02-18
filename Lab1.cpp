#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv [])
{	
	ifstream input;
	int x, y = 0;
	input.open(argv[1]);
	
	if(input.fail())
	{
		cout << "Input file not found\n";
	}
	
	cout <<"x x^2 Current Sum\n= === ===========\n";
	while (input >> x)
	{
		cout << x << " " << x*x << "   " << x + y << endl;
		y = x + y;
	}
	input.close();
	
	
	
	return 0;
}