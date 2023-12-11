
#include "CheckingAccount.h"




CheckingAccount::CheckingAccount()
{

}
void CheckingAccount::Withdraw(float amount)
{
	
	if (this->withDrawls > 10)
	{
		
		BaseAccount::Withdraw(amount + 5);
	
	}
	else
	{
		BaseAccount::Withdraw(amount);
		
	}
	
}