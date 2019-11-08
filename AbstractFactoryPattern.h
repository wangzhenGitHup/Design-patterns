#pragma once

#include <iostream>

namespace WZ
{

	class AbstractApple
	{
	public:
		virtual void ShowName() = 0;
	};

	class AbstractOrange
	{
	public:
		virtual void ShowName() = 0;
	};

	class ChineseApple : public AbstractApple
	{
	public:
		virtual void ShowName()
		{
			std::cout << "�й�ƻ��" << std::endl;
		}
	};

	class ChineseOrange : public AbstractOrange
	{
	public:
		virtual void ShowName()
		{
			std::cout << "�й�����" << std::endl;
		}
	};

	class USAApple : public AbstractApple
	{
	public:
		virtual void ShowName()
		{
			std::cout << "����ƻ��" << std::endl;
		}
	};

	class USAOrange : public AbstractOrange
	{
	public:
		virtual void ShowName()
		{
			std::cout << "��������" << std::endl;
		}
	};

	class AbstractFactory
	{
	public:
		virtual AbstractApple* CreateApple() = 0;
		virtual AbstractOrange* CreateOrange() = 0;
	};


	class ChineseFactory : public AbstractFactory
	{
	public:
		virtual AbstractApple* CreateApple()
		{
			return new ChineseApple();
		}

		virtual AbstractOrange* CreateOrange()
		{
			return new ChineseOrange();
		}
	};

	class USAFactory : public AbstractFactory
	{
	public:
		virtual AbstractApple* CreateApple()
		{
			return new USAApple();
		}

		virtual AbstractOrange* CreateOrange()
		{
			return new USAOrange();
		}
	};
}