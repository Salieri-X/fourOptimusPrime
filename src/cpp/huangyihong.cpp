#include "huangyihong.h"
#include <iostream>

Uestc::Iot::_444_::Panlong::~Panlong()
{
	std::cout << "But Panlong is not A fool" << std::endl;
}

Uestc::Iot::_444_::HuangYh::HuangYh(std::string str)
{
	this->country = str;
}

Uestc::Iot::_444_::HuangYh::~HuangYh()
{
	std::cout << "his actually A Chinese" << std::endl;
}

void Uestc::Iot::_444_::Panlong::displayWhetherIsAfool()
{
	if(this->isFool || this->isVeryFool)
	{
		std::cout << "he is a fool" << std::endl;
	}
	else
	{
		std::cout << "he still is a fool" << std::endl;
	}
}

void Uestc::Iot::_444_::HuangYh::displayCountry()
{
	std::cout << "he is " << this->country << std::endl;
}