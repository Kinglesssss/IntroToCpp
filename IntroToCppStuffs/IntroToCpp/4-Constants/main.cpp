#include <iostream>
//#include <Header.h>

void(callCount()) 
{
	//2
	static int called = 1;
	std::cout << "this function has been called " << called << " times" << std::endl;
	called++;
}
int main() 
{
	float gallons;
	float litres;
	const float gallonsToLitres = 3.78533;
	
	std::cout << "Please enter an amount of gallons" << std::endl;
	std::cin >> gallons;
	litres = gallons * gallonsToLitres;
	std::cout << gallons << " gallons translates to " << litres << " litres." << std::endl;

	callCount();
	callCount();
	callCount();
	callCount();
	callCount();
	callCount();
	callCount();
	callCount();
	callCount();
	callCount();
	//3
	//extern char bondType;
	//char choice;
	//int flag;
	//long date, time;
	//int main()
	//{
	//
	//}
	//
	//double factor;
	//double watts()
	//{
	//
	//}
	//double thrust()
	//{
	//
	//}
}