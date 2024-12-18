#include <iostream>
#include <string>
#include <Windows.h>
#include "ByeUser_Dynamic.h"

int main() // Задача 2. Динамическая библиотека
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	Leaver user;
	user.leave(name);
	system("pause");
}
