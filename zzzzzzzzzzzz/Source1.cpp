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
        case'1': 
            
            
            
            
            break;








     case'2':

         int number, count;

         cout << "Enter the number: ";
         cin >> number;
         count = 0;// count keeps record of factors of the number 
         for (int i = 1; i <= number; i++)
         {
             if (number % i == 0)
             {
                 count++;
             }
         }
         if (count == 2)//since prime number has onnly 2 factors ,1 and the number itself.
             cout << "Prime number";
         else
             cout << "Not a prime number ";
         break;

		

}