#pragma once

#include <iostream>


/*
模板方法：
	定义一个操作中算法的框架，而将一些步骤延迟到子类中。使得子类不改变一个算法的结构即可重定义该算法的某些特定步骤
*/
class DrinkTemplate
{
public:
	virtual void BoildWater() = 0; //煮水
	virtual void AddSomething(); //添加冲泡物
	virtual void Brew() = 0; //冲泡

	//模板方法
	void MakeDrink()
	{
		BoildWater();
		AddSomething();
		Brew();
	}
};

void DrinkTemplate::BoildWater()
{

}

void DrinkTemplate::AddSomething()
{

}

void DrinkTemplate::Brew()
{

}


class Coffee : public DrinkTemplate
{
public:
	virtual void BoildWater()
	{
		std::cout << "冲咖啡煮水" << std::endl;
	}

	virtual void AddSomething()
	{
		std::cout << "加入速溶咖啡" << std::endl;
	}

	virtual void Brew()
	{
		std::cout << "冲泡咖啡" << std::endl;
	}
};

class Milk : public DrinkTemplate
{
public:
	virtual void BoildWater()
	{
		std::cout << "喝牛奶煮水" << std::endl;
	}

	virtual void AddSomething()
	{
		std::cout << "加入奶粉" << std::endl;
	}

	virtual void Brew()
	{
		std::cout << "冲泡奶粉" << std::endl;
	}
};