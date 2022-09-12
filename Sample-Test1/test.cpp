#include "pch.h"
#include "BankAccount.h"

//test fixture
struct BankAccountTest : testing::Test
{
	BankAccount* account;

	BankAccountTest() //constructor
	{
		account = new BankAccount;
	}

	~BankAccountTest() //destructor
	{
		delete account;
	}
};

TEST_F(BankAccountTest, IsBankAccountEmpty)
{
	EXPECT_EQ(0, account->balance);
}

TEST_F(BankAccountTest, CanDepositMoney)
{
	account->deposit(1000);
	EXPECT_EQ(1000, account->balance);
}