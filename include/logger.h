#ifndef __SERVER_LOG_H__
#define __SERVER_LOG_H__

#include <string>
#include <stdint.h>
#include <memory>
#include <list>

namespace OptimusLog {

	class LogLevel {
	public:
		enum Level {
			DEBUG = 1,
			INFO,
			WARN,
			ERROR,
			FATAL,
		};
	};

	class LogEvent {
	public:
		typedef std::shared_ptr<LogEvent> ptr;
		LogEvent();

	private:
		const char* m_file = nullptr; 	//文件名
		int32_t m_line = 0; 			//行号
		uint32_t m_elapse = 0;			//程序启动开始到现在的毫秒数
		uint32_t m_threadid = 0; 		//线程id
		uint32_t m_fiberId = 0;			//协程id
		uint64_t m_time;				//时间戳

		std::string m_content;
	};
//日志格式，考虑不同模块需要不同的格式输出
	class LogFormatter {
	public:
		typedef std::shared_ptr<LogFormatter> ptr;
		std::string format(LogEvent::ptr event);
	};
//日志输出器
	class LogAppender {
	public:
		typedef std::shared_ptr<LogAppender> ptr;
		virtual ~LogAppender() {}

		void log(LogLevel::Level level, LogEvent::ptr event);
	private:
		LogLevel::Level m_level; /*定义针对哪些日志来定义的级别？*/
	};
//日志器
	class Logger {
	public:
		typedef std::shared_ptr<Logger> ptr;

		Logger(const std::string& name = "root");
		void log(LogLevel::Level level, LogEvent::ptr event);

		void debug(LogEvent::ptr event);
		void info(LogEvent::ptr event);
		void warn(LogEvent::ptr event);
		void error(LogEvent::ptr event);
		void fatal(LogEvent::ptr event);

		void addAppender(LogAppender::ptr appender);
		void delAppender(LogAppender::ptr appender);

	private:
		LogLevel::Level m_level; 				/*定义日志器的级别，只有满足了这个日志级别的Log才会被输出*/
		std::string m_name;						/*日志名称*/
		std::list<LogAppender::ptr> m_appenders;	/*Appender列表， 代表需要输出到哪些Appender中*/
	};

	class StdoutLogAppender : public LogAppender {

	};

	class FileLogAppender : public LogAppender {

	};
}


#endif