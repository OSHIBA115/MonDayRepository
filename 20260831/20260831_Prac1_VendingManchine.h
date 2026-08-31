#pragma once
#include"20260831_Prac1_VendingManchine.h"

using namespace std;

class VendingManchine
{
private:
	int money;//‚¨‹ài©”Ì‹@j
	int colaStock;//İŒÉ

public:
	VendingManchine();
	void insertMoney(int amount);
	void buyCola();
	int getMoney() const;	//GetŠÖ”
	int getColaStock()const;
};