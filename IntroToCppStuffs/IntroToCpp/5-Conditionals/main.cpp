#include <iostream>

int main()
{
	//1
	int x = 0;
	int y = 0;

	if (y == 0)
	{
		x = 100;
	}
	std::cout << x << std::endl;
	//2
	int a = 0;
	int b = 0;

	std::cout << "Please enter a number: " << std::endl;
	std::cin >> a;
	std::cout << "Please enter a number: " << std::endl;
	std::cin >> b;

	if (a > b)
	{
		std::cout << a << std::endl;
	}
	else
	{
		std::cout << b << std::endl;
	}
	//3
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int sumOfNumbers;

	std::cout << "Please enter a number: " << std::endl;
	std::cin >> c;
	std::cout << "Please enter a number: " << std::endl;
	std::cin >> d;
	std::cout << "Please enter a number: " << std::endl;
	std::cin >> e;
	std::cout << "Please enter a number: " << std::endl;
	std::cin >> f;
	std::cout << "Please enter a number: " << std::endl;
	std::cin >> g;

	sumOfNumbers = c + d + e + f + g;

	if (sumOfNumbers > 1)
	{
		std::cout << "Postitive" << std::endl;
	}
	else if (sumOfNumbers == 0)
	{
		std::cout << "Zero" << std::endl;
	}
	else
	{
		std::cout << "Negative" << std::endl;
	}
	//4 
	//int choice;
	//switch (choice)
	//{
	//case 1:
	//	std::cout << "1";
	//	break;
	//case 2: case 3:
	//	std::cout << "2 or 3";
	//	break;
	//case 4:
	//	std::cout << "4";
	//	break;
	//default:
	//	std::cout << "Invalid";
	//	break;
	//}
	//5
	int result;
	result = (x < y) ? y = 0 : y = 10 / x;
	//6
	int h = 0;
	int i = 0;
	char symbol;

	std::cout << "Please enter a number: " << std::endl;
	std::cin >> h;
	std::cout << "Please entre a number: " << std::endl;
	std::cin >> i;
	std::cout << "Please enter a symbol: " << std::endl;
	std::cin >> symbol;

	std::cout << "Heres the question you just made" << std::endl;
	switch (symbol)
	{
	case '+' :
		std::cout << h << " + " << i << " = " << (h + i) << std::endl;
		break;
	case '-' :
		std::cout << h << " - " << i << " = " << (h - i) << std::endl;
		break;
	case '*' :
		std::cout << h << " * " << i << " = " << (h * i) << std::endl;
		break;
	case '/' :
		std::cout << h << " / " << i << " = " << (h / i) << std::endl;
		break;
	case '%' :
		std::cout << h << " % " << i << " = " << (h % i) << std::endl;
		break;
	default:
		std::cout << "Your input is invalid" << std::endl;
		break;
	}
	//7
	int j = 0;
	

	std::cout << "Please enter a number 1-12: " << std::endl;
	std::cin >> j;
	std::cout << "The month you just chose was " << std::endl;

	switch (j)
	{
	case 1:
		std::cout << "Janurary" << std::endl;
		break;
	case 2:
		std::cout << "Feburary" << std::endl;
		break;
	case 3:
		std::cout << "March" << std::endl;
		break;
	case 4:
		std::cout << "April" << std::endl;
		break;
	case 5:
		std::cout << "May" << std::endl;
		break;
	case 6: 
		std::cout << "June" << std::endl;
		break;
	case 7:
		std::cout << "July" << std::endl;
		break;
	case 8:
		std::cout << "August" << std::endl;
		break;
	case 9:
		std::cout << "September" << std::endl;
		break;
	case 10:
		std::cout << "October" << std::endl;
		break;
	case 11:
		std::cout << "November" << std::endl;
		break;
	case 12:
		std::cout << "December" << std::endl;
		break;
	default:
		std::cout << "The number you just entered is invalid" << std::endl;
		break;
	}
	
	std::cout << "That month has ";

	switch (j)
	{
	case 1: 
		std::cout << "31 days" << std::endl;
		break;
	case 2:
		std::cout << "28 days unless its a leap year which is 29 days" << std::endl;
		break;
	case 3: 
		std::cout << "31 days" << std::endl;
		break;
	case 4:
		std::cout << "30 days" << std::endl;
		break;
	case 5:
		std::cout << "31 days" << std::endl;
		break;
	case 6:
		std::cout << "30 days" << std::endl;
		break;
	case 7:
		std::cout << "31 days" << std::endl;
		break;
	case 8: 
		std::cout << "31 days" << std::endl;
		break;
	case 9:
		std::cout << "30 days" << std::endl;
		break;
	case 10:
		std::cout << "31 days" << std::endl;
		break;
	case 11:
		std::cout << "30 days" << std::endl;
		break;
	case 12:
		std::cout << "31 days" << std::endl;
		break;
	default:
		std::cout << "The number you just entered is invalid" << std::endl;
		break;
	}
	//8
	bool flag = true;
	int numPos = 35, numNeg = -55;
	char frstChar = 'J', scndChar = 'O';
	double frstPrice = 5.60;

	std::cout << numPos << " > " << numNeg << " = " << (numPos > numNeg) << std::endl;
	if (numPos > numNeg)
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << frstChar << " > " << scndChar << " = " << (frstChar > scndChar) << std::endl;

	if (frstChar > scndChar)
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << "!(" << numPos << " + " << numNeg << ") = " << (!(numPos + numNeg)) << std::endl;
	if (!(numPos + numNeg))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << "(" << numPos << " == -30) || (" << numNeg << " == -55) = " << ((numPos == -30) || (numNeg == -55)) << std::endl;
	if ((numPos == -30) || (numNeg == -55))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << "(" << frstPrice << " >= 4.1) && (" << frstPrice << " <= 9.9) = " << ((frstPrice >= 4.1) && (frstPrice <= 9.9)) << std::endl;
	if ((frstPrice >= 4.1) && (frstPrice <= 9.9))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << "!" << flag << " && (" << scndChar << " <= 'R') = " << (!flag && (scndChar <= 'R')) << std::endl;
	if (!flag && (scndChar <= 'R'))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << "(" << numPos << " < 66) || (" << flag << " && " << numPos << " > 35) = " << ((numPos < 66) || (flag && numPos > 35)) << std::endl;
	if ((numPos < 66) || (flag && numPos > 35))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << "++" << numPos << " == 36 = " << (++numPos == 36) << std::endl;
	if (++numPos == 36)
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << numPos << "++ == 36 = " << (numPos++ == 36) << std::endl;
	if (numPos++ == 36)
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << "(" << frstChar << " == 'j') || (" << frstChar << " == 'J') = " << ((frstChar == 'j') || (frstChar == 'J')) << std::endl;
	if ((frstChar == 'j') || (frstChar == 'J'))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	//9
	bool k = true;
	bool l = false;

	std::cout << "(" << k << " || " << l << ") || (" << k << " && " << l << ") = " << ((k || l) || (k && l)) << std::endl;
	if ((k || l) || (k && l))
	
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << "!((!" << k << ") && (" << k << ")) || (" << k << " && " << l << ") = " << (!((!k) && (k)) || (k && l)) << std::endl;
	if (!((!k) && (k)) || (k && l))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << "!((5 || " << k << ") || (!" << l << ")) && (!(" << k << ") && " << l << ") = " << (!((5 || k) || (!l)) && (!(k) && l)) << std::endl;
	if (!((5 || k) || (!l)) && (!(k) && l))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << k << " || " << l << " && " << k << " = " << (k || l && k) << std::endl;
	if (k || l && k)
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
	std::cout << "!" << k << " && " << l << " = " << (!k && l) << std::endl;
	if (!k && l)
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}
}