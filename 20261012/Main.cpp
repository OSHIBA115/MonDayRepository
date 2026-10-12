#include<iostream>
#include"Dog.h"
using namespace std;

int main(void)
{
	Dog dog("ƒnƒX‹g");
	cout << dog.GetName() << endl;
	
	dog.Speak();

	return 0;
}