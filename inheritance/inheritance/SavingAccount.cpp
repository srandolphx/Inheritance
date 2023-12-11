

#include "SavingAccount.h"





SavingAccount::SavingAccount()
{

}
void SavingAccount::Withdraw(float amt)
{

	if (this->withDrawls < 3)
	{
		BaseAccount::Withdraw(amt);
	
	}
}