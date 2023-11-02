#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int main()
{
	char option;
	string username;
	char BookNumber;
	int borrowdate, returndate, date, fine;

	cout << "Enter your name : ";
	getline(cin, username);
	cout << "If you want to \n";
	cout << "Issue book  press 1 \n";
	cout << "Return book press 2 \n";
	cout << "To Quit press Q \n ";
	cout << "Enter you choice:";
	cin >> option;

	switch (option)

	{
	case'1':
		cout << "Select the book you want to borrow ";
		cout << "(only 5 days after that a fine of $1 is per day) " << endl;
		cout << "1.One piece" << endl;
		cout << "2.Naruto " << endl;
		cout << "3.Black clover " << endl;
		cout << "4.Bleach " << endl;
		cout << "5.Dragon Ball" << endl;
		cout << "6.Vinland Saga " << endl;
		cout << "Press the corresponding number to select :";
		cin >> BookNumber;
		switch (BookNumber)

		{
		case'1':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			break;
		case'2':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			break;
		case'3':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			break;
		case'4':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			break;
		case'5':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			break;
		case'6':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			break;
		}

	case'2':
		cout << "Enter the date you issued the book ";
		cin >> borrowdate;

		cout << "Enter the return date:";
		cin >> returndate;
		date = returndate - borrowdate;

		cout << date;
		if (date > 5)
		{
			for (int fine = 0; fine <= date; fine++)
			{
				fine = fine + fine;
			}cout << "fine equals $" << fine << endl;


		}













	}
}