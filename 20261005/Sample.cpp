#include<iostream>
#include<string>

using namespace std;

//基底クラス（動物）

class Animal
{
protected:
	string eyes;
	string foot;

public:
	void bark()
	{
		cout << "動物は泣きます\n";
	}

private:
	string name;
};

//派生クラス（犬）
class Dog:public Animal
{
public:
	Dog(string Name)
	{
		dogName = Name;
	}
	void bark()
	{
		cout << "わんわん" << endl;
	}
	void ShowName()
	{
		cout << dogName << endl;
	}
private:
	string dogName;

};

int main(void)
{
	cout << "犬の名前を入力して下さい。" << endl;
	string name;
	cin >> name;
	Dog mydog(name);
	mydog.ShowName();
	mydog.bark();
}