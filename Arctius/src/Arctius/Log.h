#pragma once

#include "Core.h"
// Including the spdlog headers
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace Arctius {

	class ARCTIUS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// ===== Core Log Macros =====
#define ARC_CORE_TRACE(...)	::Arctius::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ARC_CORE_INFO(...)	::Arctius::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ARC_CORE_WARN(...)	::Arctius::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ARC_CORE_ERROR(...)	::Arctius::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ARC_CORE_FATAL(...)	::Arctius::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// ===== Client Log Macros =====
#define ARC_TRACE(...)	::Arctius::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ARC_INFO(...)	::Arctius::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ARC_WARN(...)	::Arctius::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ARC_ERROR(...)	::Arctius::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ARC_FATAL(...)	::Arctius::Log::GetCoreLogger()->fatal(__VA_ARGS__)