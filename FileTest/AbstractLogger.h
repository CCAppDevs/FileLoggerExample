#pragma once
#include <string>

class AbstractLogger
{
public:
	virtual void Log(std::string message) = 0;
	virtual void Warn(std::string message) = 0;
	virtual void Error(std::string message) = 0;
};

