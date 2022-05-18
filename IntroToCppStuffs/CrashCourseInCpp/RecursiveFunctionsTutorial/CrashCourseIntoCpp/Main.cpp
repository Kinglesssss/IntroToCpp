#include <Windows.h>
#include <iostream>
#include <string> 

void printDirectory(std::string directory, int depth)
{
	HANDLE hFind;
	WIN32_FIND_DATAA data;

	std::string padding(depth + 1, ' ');

	std::string searchPath = directory + "\\*";

	hFind = FindFirstFileA(searchPath.c_str(), &data);
	if (hFind != INVALID_HANDLE_VALUE)
	{
		do {
			//Don't process the '.' or '..' entries
			if (strcmp(data.cFileName, ".") == 0 || strcmp(data.cFileName, "..") == 0)
				continue;

			std::cout << padding << data.cFileName << std::endl;

			if ((data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) == FILE_ATTRIBUTE_DIRECTORY)
			{
				printDirectory(directory + "\\" + data.cFileName, depth + 1);
			}
		} while (FindNextFileA(hFind, &data));
		FindClose(hFind);
	}
}
void printFibonacci(int n)
{
	static int n1 = 0, n2 = 1, n3;

	if (n > 0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		std::cout << n3 << " ";
		printFibonacci(n - 1);
	}
}
int calculatePower(int base, int powerRaised)
{
	if (powerRaised != 0)
		return(base * calculatePower(base, powerRaised - 1));
	else
		return 1;


}
void tower(int n, char source, char des, char via)
{
	if (n == 1)
	{
		std::cout << "Moved the ring " << n << " from " << source << " to " << des << " via " << via << ".\n";
	}
	else
	{
		tower(n - 1, source, via, des);
		std::cout << "Moved the ring " << n << " from " << source << " to " << des << " via " << via << ".\n";
		tower(n - 1, via, des, source);
	}
}
void main()
{
	printDirectory("D:\\Users\\Kai\\Documents\\My Games", 0);

	int n;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> n;

	std::cout << "Fibonacci Series : ";

	std::cout << "0 " << "1 ";
	printFibonacci(n - 2);
	std::cout << std::endl;

	int base, powerRaised, result;

	std::cout << "Enter base number: " << std::endl;
	std::cin >> base;

	std::cout << "Enter power number: " << std::endl;
	std::cin >> powerRaised;

	result = calculatePower(base, powerRaised);
	std::cout << base << "^" << powerRaised << " = " << result << std::endl;

	int rings;
	char source = 'A';
	char des = 'B';
	char via = 'C';
	std::cout << "Enter the number of rings: ";
	std::cin >> rings;
	tower(rings, source, des, via);

	return;
}
