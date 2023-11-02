#include<iostream>
using namespace std;
int main()
{
	int choice, number, upperlimit, lowerlimit;

	cout << "     Prime Number Checker  \n\n";
	cout << "If you  want to find prime numbers in a given range press 1\n";
	cout << "If you want check if a specific number is prime press 2\n";
	cout << "Enter your choice";
	cin >> choice;
	switch(choice)
     case'2':
		 
		 cout << "Enter the number you want to check : ";
		 cin >> number;

		 for (int i = 1; i <= number; i++)

		 {
			 if (number % i == 0)
			 {
				 cout << "Not a prime number ";
			 }
		 }

}