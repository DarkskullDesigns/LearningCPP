//Files to use:

#include <iostream>
#include <string>

//Libraries
using namespace std;

//Main Function
int main()
{
	

	cout << "Hello, I am learning c++ atm, so this is just a demo!\n" << endl;

	//Variables Experimentation
	int x = 1;
	float y = 2.1;
	double z = 3.73648624;
	string a = "STRING!";

	cout << "Let's start with some variables (as i'm using 'cout' to do this text)" << endl;
	cout << "the integer x =" << x << endl;
	cout << "the integer y =" << y << endl;
	cout << "the integer z =" << z << endl;
	cout << "the integer a =" << a << "\n" << endl;

	//Operators Experimentation
	cout << "Let's start experimenting with operators!" << endl;
	cout << "2+2=" << 2 + 2 << endl;
	cout << "2-2=" << 2 - 2 << endl;
	cout << "2*2=" << 2 * 2 << endl;
	cout << "2/2=" << 2 / 2 << endl;
	cout << "2%2=" << 2 % 2 << "\n" << endl;

	//User Input
	cout << "Okay, now lets do some User Inputs!" << endl;
	string name;
	int age;

	cout << "What is your first name: " << endl;
	cin >> name;
	cout << "What is your age: " << endl;
	cin >> age;
	cout << "Your name is: " << name << " and your age is: " << age << "\n" << endl;



	//--------------
	system("Pause");

	//--------------
	return 0;

	//End
	return 0;
}
