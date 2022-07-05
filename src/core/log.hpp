#pragma once

#include "core/core.hpp"
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace Ampere {
  class AMPERE_API Log {
      public:
        Log();
        void Init();
        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
      private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
  };
}

// Core log macros
#define AMP_CORE_TRACE(...)    ::Ampere::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AMP_CORE_DEBUG(...)    ::Ampere::Log::GetCoreLogger()->debug(__VA_ARGS__)
#define AMP_CORE_INFO(...)     ::Ampere::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AMP_CORE_WARN(...)     ::Ampere::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AMP_CORE_ERROR(...)    ::Ampere::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AMP_CORE_CRITICAL(...) ::Ampere::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define AMP_TRACE(...)         ::Ampere::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AMP_DEBUG(...)         ::Ampere::Log::GetClientLogger()->debug(__VA_ARGS__)
#define AMP_INFO(...)          ::Ampere::Log::GetClientLogger()->info(__VA_ARGS__)
#define AMP_WARN(...)          ::Ampere::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AMP_ERROR(...)         ::Ampere::Log::GetClientLogger()->error(__VA_ARGS__)
#define AMP_CRITICAL(...)      ::Ampere::Log::GetClientLogger()->critical(__VA_ARGS__)