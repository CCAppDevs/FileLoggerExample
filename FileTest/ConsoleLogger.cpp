#include "ConsoleLogger.h"

ConsoleLogger::ConsoleLogger()
{
	// do consolelogger stuff here
	std::cout << "ConsoleLogger is loaded\n";
}

void ConsoleLogger::Log(std::string message)
{
	std::cout << "[LOG] " << message << std::endl;
}

void ConsoleLogger::Warn(std::string message)
{
	std::cout << "[WARN] " << message << std::endl;
}

void ConsoleLogger::Error(std::string message)
{
	std::cout << "[ERROR] " << message << std::endl;
}
