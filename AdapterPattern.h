#pragma once

#include <iostream>

class Print
{
public:
	virtual void operator()(int val1, int val2)
	{
		std::cout << "val1: " << val1 << ", val2: " << val2 << std::endl;
	}
};

class Target
{
	virtual void operator()(int val) = 0;
};

class Adapter : public Target
{
public:
	Adapter() : m_param(10){}
	Adapter(int val) : m_param(val)
	{}

	virtual void operator()(int val)
	{
		m_print(val, m_param);
	}

private:
	Print m_print;
	int m_param;
};

Adapter Bind2nd(int val)
{
	return Adapter(val);
}