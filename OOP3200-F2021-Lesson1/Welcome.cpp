#include "Welcome.h"
#include <iostream>
Welcome::Welcome(): m_name("Gaelen")
{
	std::cout << "Hello, World" << std::endl;
}

Welcome::~Welcome()
{
}

void Welcome::Greeting()
{
	std::cout << "Greetings, " << m_name << std::endl;
}
