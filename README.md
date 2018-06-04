# UWPOpenCVRuntimeComponentTest
This project is used to demonstrate using prebuild OpenCV.lib inside Windows Runtime Component makes UWP Application crash on run time.

How to run the project:

- Open in Visual Studio
- Press ctrl+F5

App crashes with this error: 

unable to activate Windows Store app '1c51.....!App'. The activation request failed with error 'Operation not supported. Unknown error: 0x80040904' 

When I set a break point, the output shows .dll for runtime component loaded then unloaded. Module not found. Which I think is caused by dll unloaded


