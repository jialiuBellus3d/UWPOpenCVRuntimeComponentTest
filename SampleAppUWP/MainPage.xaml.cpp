//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace SampleAppUWP;
//using namespace Bellus3DRuntimeComponent;
using namespace WindowsRuntimeComponent1;
//using namespace Bellus3DRTC;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
	simpleLogger = ref new SimpleLogger(outputTextBlock);
	simpleLogger->Log("InitializeComponent done");
	class1 = ref new Class1();
	simpleLogger->Log("ref new SessionManager done");
	int answer = class1->AddTwoInts(1000, 45);
	if (answer == 1045) {
		simpleLogger->Log("The answer is correct");
	}
	simpleLogger->Log("openCV version is: "+class1->GetOpenCVString());
	double ans = class1->Add(1000, 45);
	if (ans == 1045) {
		simpleLogger->Log("The answer is correct");
	}
	//sessionManager = ref new SessionManager();


}
