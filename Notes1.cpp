#include <iostream>
#include <cstring>
//C-style strings: char* an array of characters; * refers to a pointer

#include <string>
//C++ style strings: a nice wrapper around char*

using namespace std;

/*
argc is the number of parameters
argv is the argument vector, aka array of strings*/

int main(int argc, char* argv[]){
	for (int i = 0; i < argc; i++){
		cout << argv[i] << endl;
	}
}