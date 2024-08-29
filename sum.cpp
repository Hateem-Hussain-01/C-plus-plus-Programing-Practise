#include <iostream>

int main()
{
	// Declare variable to storeuser input
	int num1, num2;
	
	// Prompt te user to enter the first number
	std::cout << "Enter the first number: ";
	std::cin >> num1;
	
	// Promt the user to enter the second number
	std::cout << "Enter the second numer: ";
	std::cin >> num2;
	
	// calculate the sum
	int sum = num1 + num2;
	
	// Display the result
	std::cout << "Sum: " << sum << std::endl;
	
	return 0;
}