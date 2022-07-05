#include "core/log.hpp"
#include "ampinc.hpp"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/ansicolor_sink.h>

namespace Ampere {
  std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
  std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

  Log::Log() {

    Init();
    GetCoreLogger()->debug(">--- Ampere Engine ---<");
    
    bool iAmRainbow = false;
    if (iAmRainbow) {
      GetCoreLogger()->trace("test");
      GetCoreLogger()->debug("test");
      GetCoreLogger()->info("test");
      GetCoreLogger()->warn("test");
      GetCoreLogger()->error("test");
      GetCoreLogger()->critical("test");

      GetClientLogger()->warn("Hello");
      GetClientLogger()->trace("test");
      GetClientLogger()->debug("test");
      GetClientLogger()->info("test");
      GetClientLogger()->warn("test");
      GetClientLogger()->error("test");
      GetClientLogger()->critical("test");
    }
  };
    
  void Log::Init() {

    auto sink = std::make_shared<spdlog::sinks::ansicolor_stdout_sink_mt>();
    sink->set_color(spdlog::level::warn, sink->yellow);
    sink->set_color(spdlog::level::err, sink->red);
    sink->set_color(spdlog::level::critical, sink->magenta);

    s_CoreLogger = std::make_shared<spdlog::logger>("Ampere", sink);
    s_CoreLogger->set_pattern("%^[%T] %n: %v%$");
    s_CoreLogger->set_level(spdlog::level::trace);

    s_ClientLogger = std::make_shared<spdlog::logger>("App", sink);
    s_ClientLogger->set_pattern("%^[%T] %n: %v%$");
    s_ClientLogger->set_level(spdlog::level::trace);
  }
}