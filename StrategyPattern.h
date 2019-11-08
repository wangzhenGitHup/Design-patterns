#pragma once

#include <iostream>

/*
	����ģʽ��
		������һϵ���㷨������ÿ���㷨��װ����������ʹ���ǻ����Ի����滻��
		���㷨������ʹ�����Ŀͻ��������仯
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
		std::cout << "ʹ��AK47" << std::endl;
	}
};

class Chinese56 : public AbstractGun
{
public:
	virtual void UseGun()
	{
		std::cout << "ʹ�ù���56ʽ��ǹ" << std::endl;
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