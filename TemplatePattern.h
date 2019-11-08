#pragma once

#include <iostream>


/*
ģ�巽����
	����һ���������㷨�Ŀ�ܣ�����һЩ�����ӳٵ������С�ʹ�����಻�ı�һ���㷨�Ľṹ�����ض�����㷨��ĳЩ�ض�����
*/
class DrinkTemplate
{
public:
	virtual void BoildWater() = 0; //��ˮ
	virtual void AddSomething(); //��ӳ�����
	virtual void Brew() = 0; //����

	//ģ�巽��
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
		std::cout << "�忧����ˮ" << std::endl;
	}

	virtual void AddSomething()
	{
		std::cout << "�������ܿ���" << std::endl;
	}

	virtual void Brew()
	{
		std::cout << "���ݿ���" << std::endl;
	}
};

class Milk : public DrinkTemplate
{
public:
	virtual void BoildWater()
	{
		std::cout << "��ţ����ˮ" << std::endl;
	}

	virtual void AddSomething()
	{
		std::cout << "�����̷�" << std::endl;
	}

	virtual void Brew()
	{
		std::cout << "�����̷�" << std::endl;
	}
};