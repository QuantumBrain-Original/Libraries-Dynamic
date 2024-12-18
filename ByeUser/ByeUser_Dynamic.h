#pragma once
#include <iostream>
#include <string>

#ifdef MYLIB_DLL_EXPORT
	#define MYLIB_DLL __declspec(dllexport)
#else
	#define MYLIB_DLL __declspec(dllimport)
#endif

class MYLIB_DLL Leaver
{
	public:
		void leave(std::string name);
};
