#include <iostream>
#include <thread>
#include "State.h"


class CreditState :public State
{
public:
	virtual void Scene()
	{
		std::cout << "credit\n";
		std::this_thread::sleep_for(std::chrono::seconds(3));// 3 �b�҂�	
	}
};

class TitleState :public State
{
public:
	virtual void Scene()
	{
		std::cout << "title\n";
		std::this_thread::sleep_for(std::chrono::seconds(3));// 3 �b�҂�
	}
};

class OpeningState :public State
{
public:
	virtual void Scene()
	{
		std::cout << "opening\n";
		std::this_thread::sleep_for(std::chrono::seconds(5));// 5 �b�҂�
	}
};

class DemoState :public State
{
public:
	virtual void Scene()
	{
		std::cout << "demo\n";
		std::this_thread::sleep_for(std::chrono::seconds(5));// 5 �b�҂�
	}
};
