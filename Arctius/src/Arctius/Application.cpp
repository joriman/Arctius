#include "arcpch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Arctius {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(2180, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			ARC_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			ARC_TRACE(e);
		}

		while (true);
	}

}