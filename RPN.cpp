#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <cstdlib>
using namespace std;

int pop(vector<int>& stk);
int main() {
    vector<int> vectorStack; // vector used as operand stack
    string input;          // to read number or operator

	cout << "RPN calculator\n";
    while (cin >> input) 
	{
		//Checks first element for digit
        if (isdigit(input[0])) 
		{
            vectorStack.push_back(atoi(input.c_str())); // convert, push
            
        } 
		
		else // If it's not a number, assume it's an operator
		{ 
            int left, right;

            switch (input[0]) {  // assume operators are one char
              case '+': vectorStack.push_back(pop(vectorStack) + pop(vectorStack));
                        break;
              case '-': right = pop(vectorStack); // get right operand
                        left  = pop(vectorStack); // get left operand
                        vectorStack.push_back(left - right);
                        break;
              case '*': vectorStack.push_back(pop(vectorStack) * pop(vectorStack));
                        break;
              case '/': right = pop(vectorStack); // get right operand
                        left  = pop(vectorStack); // get left operand
                        vectorStack.push_back(left / right);
                        break;
              default:  throw domain_error("Undefined operator");
            }
            cout << "Result: " << vectorStack.back() << endl;
        }
    }
    return 0;
}


int pop(vector<int>& stk) 
{
    if (stk.empty()) {
        throw underflow_error("Stack underflow.");
    }
    int result = stk.back();
    stk.pop_back();
    return result;
}