#pragma once

#include "Core.h"

namespace Krig {

	class KRIG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To de defined in client
	Application* CreateApplication();

}

