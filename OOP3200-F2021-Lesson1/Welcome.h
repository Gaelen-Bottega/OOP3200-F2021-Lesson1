#pragma once
#include <string>

class Welcome
{
public:
	// CONSTRUCTOR
	Welcome();

	// DESTRUCTOR
	~Welcome();

	void Greeting();

private:
	std::string m_name;
};

