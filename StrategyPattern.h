#pragma once

#include <iostream>

/*
	策略模式：
		定义了一系列算法，并将每个算法封装起来，而且使它们还可以互相替换。
		让算法独立于使用它的客户而独立变化
*/

class AbstractGun
{
public:
	virtual void UseGun() = 0;
};


class AK47 : public AbstractGun
{
public:
	virtual void UseGun()
	{
		std::cout << "使用AK47" << std::endl;
	}
};

class Chinese56 : public AbstractGun
{
public:
	virtual void UseGun()
	{
		std::cout << "使用国产56式手枪" << std::endl;
	}
};


class  Soldier
{
public:
	~Soldier(){ delete m_pGun; m_pGun = nullptr; }
	void SetGun(AbstractGun* pGun)
	{
		m_pGun = pGun;
	}

	void UseGun()
	{
		m_pGun->UseGun();
	}


private:
	AbstractGun* m_pGun;
};