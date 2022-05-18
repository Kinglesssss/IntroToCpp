#include <iostream>
int main()
{
	//1
	int i;
	//1.a
	for (int i = 100; i > -1; i--)
	{
		if (i < 0)
		{
			break;
		}
		std::cout << i << std::endl;
	}
	//1.b
	for (int i = 99; i > -1; i--)
	{
		if (i < 0)
		{
			break;
		}
		std::cout << i << std::endl;
	}
	//1.c
	for (int i = 100; i > 0; i--)
	{
		if (i < 0)
		{
			break;
		}
		std::cout << i << std::endl;
	}
	//1.d
	for (int i = 100; i > -1; i -= 2)
	{
		if (i < 0)
		{
			break;
		}
		std::cout << i << std::endl;
	}
	//2
	for (int i = 0; i < 101; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			std::cout << i << "FizzBuzz, " << std::endl;
		}
		else if (i % 3 == 0)
		{
			std::cout << i << "Fizz, " << std::endl;
		}
		else if (i % 5 == 0)
		{
			std::cout << i << "Buzz, " << std::endl;
		}
		else
		{
			std::cout << i << ", " << std::endl;
		}
	}
	//3
	int a = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			a += i;
		}
		
		
	}
	std::cout << a << std::endl;
	//4.1
	//4.1.a
	int j = 100;
	while (j >= 0)
	{
		std::cout << j << std::endl;
		j--;
	}
	//4.1.b
	int c = 99;
	while (c >= 0)
	{
		std::cout << c << std::endl;
		c--;
	}
	//4.1.c
	int d = 100;
	while (d >= 1)
	{
		std::cout << d << std::endl;
		d--;
	}
	//4.1.d
	int e = 100;
	while (e >= 0)
	{
		std::cout << e << std::endl;
		e -= 2;
	}
	//4.2
	int f = 0;
	while (f <= 100)
	{
		if (f % 5 == 0 && f % 3 == 0)
		{
			std::cout << f << "FizzBuzz" << std::endl;
		}
		else if (f % 3 == 0)
		{
			std::cout << f << "Fizz" << std::endl;
		}
		else if (f % 5 == 0)
		{
			std::cout << f << "Buzz" << std::endl;
		}
		else
		{
			std::cout << f << std::endl;
		}
		f++;
	}
	//4.3
	int b = 0;
	int g = 0;
	while (b < 1000)
	{
		if (b % 3 == 0 || b % 5 == 0)
		{
			g += b;
		}
		b++;
	}
	std::cout << g << std::endl;
}