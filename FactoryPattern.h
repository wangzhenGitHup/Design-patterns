#pragma  once

#include <iostream>

class AbstractFruit{
public:
	virtual void ShowName() = 0;
};

class Apple : public AbstractFruit
{
public:
	virtual void ShowName();
};

class Orange : public AbstractFruit
{
public:
	virtual void ShowName();
};

class AbstractFactory
{
public:
	virtual AbstractFruit* createFruit() = 0;
};

class AppleFactory : public AbstractFactory
{
public:
	virtual AbstractFruit* createFruit();
};

class OrangeFactory : public AbstractFactory
{
public:
	virtual AbstractFruit* createFruit();
};

//-----------------------------------------------------
void Apple::ShowName()
{
	std::cout << "Apple" << std::endl;
}

void Orange::ShowName()
{
	std::cout << "Orange" << std::endl;
}

AbstractFruit* AppleFactory::createFruit()
{
	return new Apple;
}

AbstractFruit* OrangeFactory::createFruit()
{
	return new Orange();
}
