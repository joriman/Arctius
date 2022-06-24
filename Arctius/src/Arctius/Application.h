#pragma once

#include "Core.h"

namespace Arctius {

	class ARCTIUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Needs to be defined in client
	Application* CreateApplication();

}