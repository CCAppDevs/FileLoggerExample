#pragma once
#include "AbstractLogger.h"
#include <iostream>


class ConsoleLogger : public AbstractLogger
{
public:
	ConsoleLogger();

	void Log(std::string message);
	void Warn(std::string message);
	void Error(std::string message);
};

