#include "Ocean.h"
#include <iostream>
#include <string>
#include "windows.h"

int main(int argc, char** argv)
{
	Ocean x;

	std::cout << " Enter the name: ";
	std::string name; std::cin >> name;
	x.SetName(name);

	std::cout << " Enter the type: ";
	std::string type; std::cin >> type;
	x.SetType(type);

	std::cout << " Enter the width: ";
	int width; std::cin >> width;
	x.SetWidth(width);

	std::cout << " Enter the length: ";
	int length; std::cin >> length;
	x.SetLength(length);

	std::cout << " Enter the depth: ";
	int depth; std::cin >> depth;
	x.SetDepth(depth);

	system("cls");

	name = x.GetName();
	std::cout << " Name: " << name << std::endl;

	type = x.GetType();
	std::cout << " Type: " << type << std::endl;

	int res = x.GetVolume();
	std::cout << "\n Result: " << res << std::endl;

	Sleep(2000);
	system("cls");

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Ocean y;

	std::cout << "\n Enter the name: ";
	std::string name2; std::cin >> name2;
	y.SetName(name2);

	std::cout << " Enter the type: ";
	std::string type2; std::cin >> type2;
	y.SetType(type2);

	std::cout << " Enter the width: ";
	int width2; std::cin >> width2;
	y.SetWidth(width2);

	std::cout << " Enter the length: ";
	int length2; std::cin >> length2;
	y.SetLength(length2);

	std::cout << " Enter the depth: ";
	int depth2; std::cin >> depth2;
	y.SetDepth(depth2);

	system("cls");

	name2 = y.GetName();
	std::cout << " Name: " << name2 << std::endl;

	type2 = y.GetType();
	std::cout << " Type: " << type2 << std::endl;

	int res2 = y.GetVolume();
	std::cout << "\n Result: " << res2 << std::endl;

	Sleep(2000);
	system("cls");

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if (x.GetType() == y.GetType())
	{
		std::cout << " " << type << " = " << type2 << std::endl;

		if (res == res2)
		{
			std::cout << " Area to the '" << x.GetType() << "' = area of the " << y.GetType() << std::endl;
		}
		else if (res < res2)
		{
			std::cout << " Area to the '" << x.GetType() << "' < area of the " << y.GetType() << std::endl;
		}
		else if (res > res2)
		{
			std::cout << " Area to the '" << x.GetType() << "' > area of the " << y.GetType() << std::endl;
		}
	}
	else if (x.GetType() != y.GetType())
	{
		std::cout << " " << type << " != " << type2 << std::endl;

		if (res == res2)
		{
			std::cout << " Area to the '" << x.GetType() << "' = area of the " << y.GetType() << std::endl;
		}
		else if (res < res2)
		{
			std::cout << " Area to the '" << x.GetType() << "' < area of the " << y.GetType() << std::endl;
		}
		else if (res > res2)
		{
			std::cout << " Area to the '" << x.GetType() << "' > area of the " << y.GetType() << std::endl;
		}
	}

	return 0;
}