#include <iostream>
#include "ConsoleLogger.h"
#include "AbstractLogger.h"
#include "FileLogger.h"

using namespace std;

int main()
{
	FileLogger logger = FileLogger();

	logger.Log("I like toast");
	logger.Warn("this is a warning");
	logger.Error("i broke it");
	logger.Log("another log message");
}