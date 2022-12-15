
#include <Krig.h>


class Sandbox : public Krig::Application 
{
public:
	Sandbox() { }
	~Sandbox() { }
};

Krig::Application* Krig::CreateApplication()
{
	return new Sandbox();
}