#include "FileLogger.h"

FileLogger::FileLogger()
{
	File.open("file.txt", File.app);
}

void FileLogger::Log(std::string message)
{
	File << "[LOG] " << message << std::endl;
}

void FileLogger::Warn(std::string message)
{
	File << "[WARN] " << message << std::endl;
}

void FileLogger::Error(std::string message)
{
	File << "[ERROR] " << message << std::endl;
}
