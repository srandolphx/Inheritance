

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include "CreditAccount.h"

int menu();


using namespace std;


int main()
{
	srand(time(NULL));
	int choice;
	
	double amount;
	SavingAccount sA;
	CheckingAccount cA;
	CreditAccount credit;

	while (true)
	{
		cout << "\n~~ MENU ~~" << endl;
		cout << "1.Savings Account" << endl;
		cout << "2.Checking Account" << endl;
		cout << "3.Credit Account" << endl;
		cout << "4.Print Reciept " << endl;
		cout << "5.Exit" << endl;

		cout << "Enter Choice :";
		cin >> choice;
		switch (choice)
		{
		case 1: {
			choice = menu();
			switch (choice)
			{
			case 1: {
				cout << "Enter amount to deposit :$";
				cin >> amount;
				sA.Deposit(amount);
				cout << "Your Balance :$" << sA.GetBalance() << endl;
				break;
			}
			case 2: {
				cout << "Enter amount to withdraw :$";
				cin >> amount;
				sA.Withdraw(amount);
				cout << "Your Balance :$" << sA.GetBalance() << endl;
				break;
			}

			}
			continue;
		}
		case 2: {
			choice = menu();
			switch (choice)
			{
			case 1: {
				cout << "Enter amount to deposit :$";
				cin >> amount;
				cA.Deposit(amount);
				cout << "Your Balance :$" << cA.GetBalance() << endl;
				break;
			}
			case 2: {
				cout << "Enter amount to withdraw :$";
				cin >> amount;
				cA.Withdraw(amount);
				cout << "Your Balance :$" << cA.GetBalance() << endl;
				break;
			}

			}
			continue;
		}
		case 3: {
			
			int shoppingBill = 40;
			cout << "Your Shopping Amount is :$" << shoppingBill << endl;
			credit.Withdraw(shoppingBill);
			cout << "You Limit in Credit Account :$" << credit.getLimit() << endl;
			continue;
			
		}
		case 4: {
			cout << " Printing out your reciept..." << endl;
			Sleep(2000);
			cout << "Your Checking Balance is :$" << cA.GetBalance() << endl;
			cout << "Your Savings Balance is :$" << sA.GetBalance() << endl;
			continue;
			
		}
		default: {
			cout << "* Invalid Choice.. *" << endl;
			continue;
		}


		}
		break;
	}


	return 0;
}
int menu()
{
	int choice;
	while (true)
	{
		cout << "1.Deposit :" << endl;
		cout << "2.Withdraw " << endl;
		cout << "Enter Choice :";
		cin >> choice;
		if (choice == 1 || choice == 2)
		{
			break;
		}
		else {
			cout << "* Invalid.Must be either 1 or 2 *" << endl;
		}
	}
	return choice;
}

