#pragma once

#ifdef ARC_PLATFORM_WINDOWS

extern Arctius::Application* Arctius::CreateApplication();

int main(int argc, char** argv)
{
	Arctius::Log::Init();
	ARC_CORE_WARN("Initialization of Log!");
	int a = 5;
	ARC_INFO("Success! Test value = {0}", a);

	auto app = Arctius::CreateApplication();
	app->Run();
	delete app;
}

#endif