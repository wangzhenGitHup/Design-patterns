#pragma once

#include<iostream>

/*
//一般处理
class InputHandler
{
public:
	void handleInput()
	{
		if (...)
			jump();
		else if (...)
			fireGun();
		else if(...)
				....
	}
};*/


/*
	采用命令模式

	命令是对象的方法调用
*/
class Command
{
public:
	virtual ~Command()
	{

	}

	virtual void execute() = 0;
};

class JumpCommand : public Command
{
public:
	virtual void execute()
	{
		std::cout << "执行跳跃\n";
	}
};

class FireCommand : public Command
{
public:
	virtual void execute()
	{
		std::cout << "执行开火\n";
	}
};

class InputHandler
{
	enum InputType
	{
		BUTTON_A,
		BUTTON_B
	};

public:
	~InputHandler()
	{
		delete m_buttonA;
		delete m_buttonB;
	}

	void handlerInput()
	{
		//if (...)
			m_buttonA->execute();
		//else if (...)
			m_buttonB->execute();
	}

private:
	Command* m_buttonA;
	Command* m_buttonB;
};
