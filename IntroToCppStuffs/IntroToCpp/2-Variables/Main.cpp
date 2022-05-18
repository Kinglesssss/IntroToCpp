#include <iostream>

int main(int argc)
{
	//creating and Assigning to Variables
	int age = 15;
	std::cout << age << std::endl;
	age = 20;
	std::cout << age << std::endl;
	age = 25;
	std::cout << age << std::endl;
	age = 30;
	std::cout << age << std::endl;
	//Using Arithmetic Operators on Interget Variables
	int blue = 20;
	int red = 30;
	int purple = 50;

	std::cout << blue << " + " << red << " = " << purple << std::endl;
	//Using Arithmetic Operators on Floating-Point Variables
	int redTheSecond = 2.0f;
	int yellow = 3.0f;
	int orange = 5.0f;

	std::cout << redTheSecond << " + " << yellow << " = " << orange << std::endl;
	//Storing User Input in Interger Variables
	int givenNumber;
	std::cout << "Please give me a number" << std::endl;
	std::cin >> givenNumber;
	std::cout << "Cool thanks for that, I'll keep " << givenNumber << " in mind" << std::endl;
	//1 My Final Form
	//problem A
	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	std::cout << "A) " << numberA << std::endl;
	//problem B
	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "B) " << numberB << std::endl;
	//problem C
	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	std::cout << "C) " << numberC << std::endl;
	//problem D
	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	std::cout << "D) " << somethingD << std::endl;
	//problem E
	int x = 13;
	x = x / 2;

	std::cout << "E) " << x << std::endl;
	//problem F
	float y = 13;

	y = y / 2;

	std::cout << "F) " << y << std::endl;
	//2 Celsius to farenheit
	float degCelsius;
	float degFarenheit = 0.0f;

	std::cout << "What are the degrees in celsius?" << std::endl;
	std::cin >> degCelsius;

	degFarenheit = degCelsius * 9 / 5 + 32;

	std::cout << "Celsius to farenheit" << std::endl;
	std::cout << "Celsius: " << degCelsius << std::endl;
	std::cout << "Farenheit: " << degFarenheit << std::endl;
	//3 Area of a Rectangle
	float rectWidth = 0.0f;
	float rectHeight = 0.0f;
	float rectArea = 0.0f;

	std::cout << "What is the Width of the rectangle? " << std::endl;
	std::cin >> rectWidth;
	std::cout << "What is the Height of the rectangle? " << std::endl;
	std::cin >> rectHeight;

	rectArea = rectWidth * rectHeight;

	std::cout << "Area of a Rectangle) " << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;
	//4 Average of Five
	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0.0f; //initialize all to zero

	std::cout << "Enter a Number: " << std::endl;
	std::cin >> a;
	std::cout << "Enter another Number: " << std::endl;
	std::cin >> b;
	std::cout << "Enter and another Number: " << std::endl;
	std::cin >> c;
	std::cout << "Enter a Number again: " << std::endl;
	std::cin >> d;
	std::cout << "Enter and again another Number: " << std::endl;
	std::cin >> e;

	avg = (a + b + c + d + e) / 5;

	std::cout << "Average of Five) " << std::endl;
	std::cout << a << ", " << b << ", " << c << ", " << d << ", " << e << std::endl;
	std::cout << "avg: " << avg << std::endl;
	//5 Number Swap
	int z;
	int w;
	int yourAnswersSir;
	int tempZ;

	std::cout << "Sir could you please enter a number?" << std::endl;
	std::cin >> z;
	std::cout << "Thank you Sir" << std::endl;
	std::cout << "And another please sir" << std::endl;
	std::cin >> w;
	std::cout << "Thank you Sir" << std::endl;

	tempZ = z;
	z = w;
	w = tempZ;

	std::cout << "How would you like your answers sir?" << std::endl;
	std::cout << "please type '1' if you would like both answers" << std::endl;
	std::cout << "please type '2' if you would like just 'z'" << std::endl;
	std::cout << "please type '3' if you would like just 'w'" << std::endl;
	std::cin >> yourAnswersSir;

	if (yourAnswersSir == 1)
	{
		std::cout << "Number Swap) " << "z is " << z << ", w is " << w << std::endl;
	}
	else if (yourAnswersSir == 2)
	{
		std::cout << "Number Swap) " << "z is " << z << std::endl;
	}
	else if (yourAnswersSir == 3)
	{
		std::cout << "Number Swap) " << "w is " << w << std::endl;
	}
	//6 Fun Facts for Your Age
	int ageStatistics = 0;
	int decades;
	int months;
	int weeks;
	int days;
	int hours;
	int minutes;
	int seconds;
	int milliseconds;

	std::cout << "Please enter your age: " << std::endl;
	std::cin >> ageStatistics;
	decades = ageStatistics / 10;
	months = ageStatistics * 12;
	weeks = ageStatistics * 52;
	days = ageStatistics * 365;
	hours = ageStatistics * 8760;
	minutes = ageStatistics * 525600;
	seconds = ageStatistics * 31536000;
	milliseconds = ageStatistics * 31557600000;

	std::cout << "Howdy! You are " << ageStatistics << " years old!" << std::endl;
	std::cout << "So that mus mean you have lived " << decades << " decades!" << std::endl;
	std::cout << "And you have lived for " << months << " months!" << std::endl;
	std::cout << "Wow you have lived for " << weeks << " weeks!" << std::endl;
	std::cout << "Whoa these numbers are getting big, you have been alive for about " << days << " days!" << std::endl;
	std::cout << "Ya know now its just getting satifsiying seeing these numbers get longer and longer, youve spent " << hours << " hours breathing... hopefully" << std::endl;
	std::cout << "OMG thats a lot of minutes, like " << minutes << " many dude" << std::endl;
	std::cout << "Ok these numbers are getting big. You have lived " << seconds << " seconds" << std::endl;
	std::cout << "This is the last one. You have been alive for around " << milliseconds << " milliseconds" << std::endl;
}
