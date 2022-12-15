#pragma once

#ifdef KRIG_PLATFORM_WIN

extern Krig::Application* Krig::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Krig::CreateApplication();
	app->Run();
	delete app;
}

#endif
