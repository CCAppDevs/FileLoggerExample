#pragma once
#include "AbstractLogger.h"
#include <fstream>

class FileLogger : public AbstractLogger
{
private:
	std::fstream File;

public:
	FileLogger();

	// overriden methods
	void Log(std::string message);
	void Warn(std::string message);
	void Error(std::string message);
};

