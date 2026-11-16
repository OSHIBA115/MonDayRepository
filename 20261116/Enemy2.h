#pragma once
#include<iostream>
#include<string>
class Enemy2
{
private:
	std::string name;
	int hp;

public:
	Enemy2(const std::string& name);
	~Enemy2();

	void Draw() const;
};

