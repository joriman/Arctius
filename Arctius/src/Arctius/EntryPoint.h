#pragma once

#ifdef ARC_PLATFORM_WINDOWS

extern Arctius::Application* Arctius::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Arctius::CreateApplication();
	app->Run();
	delete app;
}

#endif