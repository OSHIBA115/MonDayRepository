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
};

//派生クラス（犬）
class Dog:public Animal
{
public:
	Dog(string Name,string Eyes,string Foot)
	{
		dogName = Name;
		eyes = Eyes;
		foot = Foot;
	}
	void bark()
	{
		cout << "わんわん" << endl;
	}
	void ShowName()
	{
		cout << "名前:" << dogName << endl;
		cout << "目の色:" << eyes << endl;
		cout << "足の色:" << foot << endl;
	}
private:
	string dogName;

};

int main(void)
{
	string name;
	string eyeColor;
	string footColor;
	cout << "犬の名前を入力して下さい。" << endl;
	cin >> name;
	cout << "犬の目の色を入力して下さい。" << endl;
	cin >> eyeColor;
	cout << "犬の足の色を入力してください。" << endl;
	cin >> footColor;
	Dog mydog(name,eyeColor,footColor);
	mydog.ShowName();
	mydog.Animal::bark();
	mydog.bark();
}