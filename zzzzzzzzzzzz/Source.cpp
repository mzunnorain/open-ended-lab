#include<iostream>
#include<string>
using namespace std;
int main()
{
	char option;
	string username;
	char Book;
	int borrowdate, returndate, date, fine;
	char pay;

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
		cin >> Book;
		switch (Book)

		{
		case'1':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			cout << "order confirmed ";
			break;
		case'2':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			cout << "order confirmed ";
			break;
		case'3':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			cout << "order confirmed ";
			break;
		case'4':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			cout << "order confirmed ";
			break;
		case'5':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			cout << "order confirmed ";
			break;
		case'6':
			cout << " ok now enter issue date :";
			cin >> borrowdate;
			cout << "order confirmed ";
			break;
		}
		break;

	case'2':
		cout << "Enter the date you issued the book ";
		cin >> borrowdate;

		cout << "Enter the return date:";
		cin >> returndate;
		date = returndate - borrowdate;

		fine = (date - 5) * 1;//since $1 is fine for one day and date-5 gives us the over time .

		cout << "you have a fine of $" << fine << endl;
		cout << "Would you like to pay now or later " << endl;
		cout << "press Y to pay now or press N to pay later" << endl;
		cin >> pay;


		if (pay == 'Y' || pay == 'y')
		{
			cout << "You have successfully paid the fine ";
		}
		else if (pay == 'N' || pay == 'n')
		{
			cout << "Alright you can pay it later if you dont  ";
			cout << "it will automatically be entered in your fee challan";

		}
		break;

	case'Q':
		break;

	}
	return 0;
}