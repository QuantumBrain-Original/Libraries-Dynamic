#pragma once
#include <iostream>
#include <string>

#ifdef BYEUSER_EXPORTS
	#define BYEUSER_API __declspec(dllexport)
#else
	#define BYEUSER_API __declspec(dllimport)
#endif

class BYEUSER_API Leaver
{
	public:
		void leave(std::string name);
};
