#pragma once

#include <iostream>

/*
	���ģʽ��
		�����ӵ�����ϵͳ����ͬһ���ӿڽ��й���
		���ֻ��Ҫͨ���ýӿ�������ϵͳ���н�����
		������ֱ���븴�ӵ���ϵͳ���н���
*/

class SubSystem1
{
public:
	void run()
	{
		std::cout << "��ϵͳ 1 ����" << std::endl;
	}
};

class SubSystem2
{
public:
	void run()
	{
		std::cout << "��ϵͳ 2 ����" << std::endl;
	}
};


class FacadeModel
{
public:
	FacadeModel()
	{
		m_sys1 = new SubSystem1;
		m_sys2 = new SubSystem2;
	}

	~FacadeModel()
	{
		delete m_sys1;
		m_sys1 = nullptr;

		delete m_sys2;
		m_sys2 = nullptr;
	}

	void RunSystem()
	{
		m_sys1->run();
		m_sys2->run();
	}


private:
	SubSystem1* m_sys1;
	SubSystem2* m_sys2;
};


//-----------------------����2--------------------------------
class Television
{
public:
	void Open()
	{
		std::cout << "�򿪵��ӻ�" << std::endl;
	}

	void Closed()
	{
		std::cout << "�رյ��ӻ�" << std::endl;
	}
};

class Light
{
public:
	void Open()
	{
		std::cout << "�򿪵�" << std::endl;
	}

	void Closed()
	{
		std::cout << "�ص�" << std::endl;
	}
};

class FamilyEquipment
{
public:
	FamilyEquipment()
	{
		m_tv = new Television();
		m_light = new Light();
	}

	~FamilyEquipment()
	{
		delete m_tv;
		m_tv = nullptr;

		delete m_light;
		m_light = nullptr;
	}

	void RunEquipment()
	{
		m_tv->Open();
		m_light->Open();
	}

	void ClosedEquipment()
	{
		m_tv->Closed();
		m_light->Closed();
	}

private:
	Television* m_tv;
	Light* m_light;
};

