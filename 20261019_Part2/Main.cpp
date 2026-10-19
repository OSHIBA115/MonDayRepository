#include<iostream>
using namespace std;
#include"MagicalGirl.h"
#include"Madoka.h"
#include"Homura.h"

int main(void)
{
	Madoka madoka;
	Homura homura;

	MagicalGirl* magicalgirl[2];

	magicalgirl[0] = &madoka;
	magicalgirl[1] = &homura;

	for (int i = 0; i < 2; i++)
	{
		magicalgirl[i]->ShowProfile();
		magicalgirl[i]->Fight();
	}

	return 0;
}