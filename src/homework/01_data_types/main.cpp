//write include statements
#include "data_types.h"
#include <iostream>


//write namespace using statement for cout
using namespace std;

int main()
{
	//initialize num, num1, result
	int num = 0;
	int num1 = 4;
	int result = 0;

	//get input
	cout << "Number:";
	cin >> num;

	//output result of 5 * input and 5 * 4
	result = multiply_numbers(num);
	cout << result << "\n";

	result = multiply_numbers(num1);
	cout << result << "\n";

	return 0;
}
