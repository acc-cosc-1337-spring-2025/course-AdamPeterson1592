//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using namespace std;
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	cout << "Meal cost: ";
	cin >> meal_amount;
	
	cout << "Tip rate: ";
	cin >> tip_rate;

	cout << "\n";

	tax_amount = get_sales_tax_amount(meal_amount);	

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;
	
	//should have used printf and ($.2f, val)
	cout << "Amount: " << meal_amount << "\n"
		 << "Tax: " << tax_amount << "\n"
		 << "Tip: " << tip_amount << "\n"
		 << "Total: " << total << "\n";
	

	return 0;
}
