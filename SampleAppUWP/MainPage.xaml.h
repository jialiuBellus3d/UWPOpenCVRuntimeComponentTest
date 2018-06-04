//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include "SimpleLogger.h"

namespace SampleAppUWP
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();
	private:
		//Bellus3DRuntimeComponent::SessionManager^ sessionManager;
		WindowsRuntimeComponent1::Class1^ class1;
		SimpleLogger^ simpleLogger;
		//Bellus3DRTC::SessionManager^ sessionManager;
	};
}
