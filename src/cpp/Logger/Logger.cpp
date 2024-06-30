#include <iostream>
#include <logger.h>

namespace OptimusLog {
	Logger::Logger(const std::string& name = "root") {
		
	}

	void addAppender(LogAppender::ptr appender) {
		
	}
	void delAppender(LogAppender::ptr appender) {
		
	}
	
	void Logger::log(LogLevel::Level level, LogEvent::ptr event) {
		
	}
	void Logger::debug(LogEvent::ptr event) {
		
	}
	void Logger::info(LogEvent::ptr event) {
		
	}
	void Logger::warn(LogEvent::ptr event) {
		
	}
	void Logger::error(LogEvent::ptr event) {
		
	}
	void Logger::fatal(LogEvent::ptr event) {
		
	}
}