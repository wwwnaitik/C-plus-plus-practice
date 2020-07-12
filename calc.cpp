#Include < IOSTREAM>

using namespace std;

// Main program

void main()
{

	char op;
	float num1, num2;

	// It allow user to enter the operands
	cout << "Enter a number: ";
	cin >> num1;
	cout << "enter another number: ";
	cin >> num2;

	// It allows user to enter operator i.e. +, -, *, /, % ;
	cout << "enter operator i.e. +, -, *, / or % ";
	cin >> op;

	// Switch statement begins

	switch (op)
	{

		// If user enter +

	case '+':

		cout << num1 + num2;

		break;

		// If user enter -

	case '-':

		cout << num1 - num2;

		break;

		// If user enter *

	case '*':

		cout << num1 * num2;

		break;

		// If user enter /

	case '/':

		cout << num1 / num2;

		break;

		//If user enter %

	case '%':

		cout << num1 * num2 / 100;

		break;

		// If the operator is other than +, -, * , / or % ",

		// error message will display

	default:

		cout << "Error! operator is not correct";

		break;

		// switch statement ends

		//return 0;
	}
}