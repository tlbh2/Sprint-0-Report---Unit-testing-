#pragma once

struct BankAccount
{
	int balance = 0;

	BankAccount() //constructor
	{
	}

	void deposit(int amount)
	{
		balance += amount;
	}
};