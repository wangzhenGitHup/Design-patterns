#pragma once

#include<iostream>

/*
//һ�㴦��
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
	��������ģʽ

	�����Ƕ���ķ�������
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
		std::cout << "ִ����Ծ\n";
	}
};

class FireCommand : public Command
{
public:
	virtual void execute()
	{
		std::cout << "ִ�п���\n";
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
