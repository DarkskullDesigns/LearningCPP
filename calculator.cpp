#include <iostream>
#include <string>

using namespace std;


int main()
{
	cout << "This is a calculator where you can add two numbers.\n" << endl;

	float nOne;
	float nTwo;
	string Op;
	float result;

	cout << "Please define your first number: " << endl;
	cin >> nOne;

	cout << "\nPlease define your second number: " << endl;
	cin >> nTwo;

	cout << "\nPlease define your operator: " << endl;
	cin >> Op;

	if (Op == "+") {
		result = nOne + nTwo;
	}
	else if (Op == "-") {
		result = nOne - nTwo;
	}
	else if (Op == "*") {
		result = nOne * nTwo;
	}
	else if (Op == "/") {
		result = nOne / nTwo;
	}

	cout << "Result: " << result << endl;

	//--------------
	system("Pause");

	//--------------
	return 0;

	//End
	return 0;
}	
