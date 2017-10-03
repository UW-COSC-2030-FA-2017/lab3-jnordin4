//Lab03-jnordin4.cpp
//Jarrett Nordin
//Lab 3
#include <iostream>

using namespace std;

int main()
{
	// Parts 1 & 2
	int short num1, sum1(0);
	do
	{
		num1 = 0;
		sum1 = 0;
		cout << "1) Enter an integer 'n' (Enter 0 to move to next function): ";
		cin >> num1;
		for (int i = 0; i <= num1; i++)
		{
			sum1 += i;
		}
		cout << "The sum of 1 through n is: " << sum1 << endl;
	} while (num1 != 0);
	// Overflow occurs at numbers greater than 255

	//Part 3
	int long num2, sum2(0);
	do
	{
		num2 = 0;
		sum2 = 0;
		cout << "2) Enter an integer 'n'(Enter 0 to move to next function): ";
		cin >> num2;
		for (int i = 0; i <= num2; i++)
		{
			sum2 += i;
		}
		cout << "The sum of 1 through n is: " << sum2 << endl;
	} while (num2 != 0);
	//Overflow occurs at numbers greater than 65536

	//Part 4
	int long num3;
	float product1(1);
	do
	{
		num3 = 0;
		product1 = 1;
		cout << "3) Enter an integer 'n'(Enter 0 to move to next function): ";
		cin >> num3;
		for (int i = 1; i <= num3; i++)
		{
			product1 *= i;
		}
		cout << "The product of n! is: " << product1 << endl;
	} while (num3 != 0);
	//Overflow occurs at numbers greater than 34

	//Part 5
	int long num4;
	double product2(1);
	do
	{
		num4 = 0;
		product2 = 1;
		cout << "4) Enter an integer 'n'(Enter 0 to move to next function): ";
		cin >> num4;
		for (int i = 1; i <= num4; i++)
		{
			product2 *= i;
		}
		cout << "The product of n! is: " << product2 << endl;
	} while (num4 != 0);
	//Overflow occurs at numbers greater than 170

	//Part 6
	int num5;
	float ratio, ratio_sum(0);
	do
	{
		num5 = 0;
		ratio_sum = 0;
		cout << "5) Enter an integer 'n'(Enter 0 to move to next function): ";
		cin >> num5;
		ratio = 1 / static_cast<float>(num5);
		for (int i = 1; i <= num5; i++)
		{
			ratio_sum += ratio;
		}
		cout << "The sum of the ratio 1/n = " << ratio_sum << endl;

	} while (num5 != 0);
	//The expected result of this calculation would naturally be 1.
	//If the value of n goes beyond a certain point though it will begin producing numbers like .999991
	//This happens because floats cannot represent the entirety of a number and so rounds off some of the data resulting in a calculation error

	//Parts 7 & 8
	cout << "6) " << endl;
	for (float i = 3.4; i < 4.4; i += 0.2) 
	{ 
		cout << "i = " << i << endl; 
	}
	//The Error in this code occurs in the incrementing of the index
	//the double value is cast into a float value which removes some data and results in a calculation error in the incrementing.
	//Changing the index to a double fixes this.
	return 0;
}