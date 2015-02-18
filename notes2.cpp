#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	//Create an array with 50 numbers
	//type array_name[size]
	int numbers[50];
	
	//vector<type> vector_name(size)
	vector<long long> numbers(50);
	
	//array[index] = value;
	numbers[0] = 1;
	
	for(int i = 0; i < 50; i++)
	{
		cout << numbers[i]<< endl;
	}
	
	return 0;
}