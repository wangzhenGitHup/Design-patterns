#pragma once

#include <iostream>

/*
	外观模式：
		将复杂的子类系统抽象到同一个接口进行管理，
		外界只需要通过该接口与子类系统进行交互，
		而不必直接与复杂的子系统进行交互
*/

class SubSystem1
{
public:
	void run()
	{
		std::cout << "子系统 1 运行" << std::endl;
	}
};

class SubSystem2
{
public:
	void run()
	{
		std::cout << "子系统 2 运行" << std::endl;
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


//-----------------------案例2--------------------------------
class Television
{
public:
	void Open()
	{
		std::cout << "打开电视机" << std::endl;
	}

	void Closed()
	{
		std::cout << "关闭电视机" << std::endl;
	}
};

class Light
{
public:
	void Open()
	{
		std::cout << "打开灯" << std::endl;
	}

	void Closed()
	{
		std::cout << "关灯" << std::endl;
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

