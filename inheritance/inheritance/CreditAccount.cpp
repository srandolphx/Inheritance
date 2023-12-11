

#include "CreditAccount.h"



CreditAccount::CreditAccount()
{
	this->charge = 0;
	this->amount = 40;
}
void CreditAccount::Withdraw(float amt)
{ 
	
	if (amount - amt < 0)
	{
		cout << "You are now being charged $5000 as punishment for over spending!" << endl;
		this->charge += 5000;
	}
	else {
		this->amount -= amt;
	}
}
double CreditAccount::getLimit()
{
	cout << "Charges :$" << charge << endl;
	return amount;
}
