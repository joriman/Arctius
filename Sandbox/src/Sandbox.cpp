#include <Arctius.h>

class Sandbox : public Arctius::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Arctius::Application* Arctius::CreateApplication()
{
	return new Sandbox();
}