#include <iostream>
int main()
{
	////1
	//int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0,1, 1 };
	//std::cout << numbers << std::endl;
	//int matrix[5] = { 1, 2, 3, 4, 5, };//6, 7 };
	//std::cout << matrix << std::endl;
	////double radii[10] = (3.2, 4.7};
	////std::cout << radii << std::endl;
	////int table[7] = { 2, , , 27, , 45, 39 };
	////std::cout << table << std::endl;
	//char codes[] = { 'A', 'X', '1', '2', 's' };
	//std::cout << codes << std::endl;
	////int blanks[];
	////std::cout << blanks << std::endl;
	////int collection[-20];
	////std::cout << collection << std::endl;
	////int hours[3] = 8, 12, 16;
	////std::cout << hours << std::endl;

	////2 
	//int values[] = { 2, 6, 10, 14 };
	//std::cout << values[2];
	//std::cout << ++values[0];
	//std::cout << values[1]++;
	//int x = 2;
	//std::cout << values[++x];
	//std::cout << values[4];

	//std::cout << std::endl;

	////3
	//int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	//for (int i = 0; i < 10; i++)
	//{
	//	std::cout << i << ": " << data[i] << "\n";
	//}

	////4
	//std::cout << "Your array will be made up of 5 numbers" << std::endl;
	//
	//int new_array[5];
	//for (int counter = 0; counter < 5; counter++)
	//{
	//	std::cout << "Enter number " << counter+1 << std::endl;
	//	std::cin >> new_array[counter];
	//}
	//
	//std::cout << "You entered: " << std::endl;
	//
	//for (int i = 4; i >= 0; i--)
	//{
	//	std::cout << new_array[i] << std::endl;
	//}
	//return 0;
	////5
	//std::cout << "Please enter 10 different numbers: " << std::endl;
	//
	//int newer_array[10];
	//int i, j, temp;
	//for (int counter = 0; counter < 10; counter++)
	//{
	//	std::cout << "Enter number " << counter + 1 << ": " << std::endl;
	//	std::cin >> newer_array[counter];
	//}
	//
	//std::cout << "You entered: " << std::endl;
	//for (int i = 0; i <= 9; i++)
	//{
	//	std::cout << newer_array[i] << std::endl;
	//}
	//
	//std::cout << "In numerical order: " << std::endl;
	//for(i = 0; i < 10; i++)
	//{
	//	for (j = i + 1; j < 10; j++)
	//	{
	//		if (newer_array[i] > newer_array[j])
	//		{
	//			temp = newer_array[i];
	//			newer_array[i] = newer_array[j];
	//			newer_array[j] = temp;
	//		}
	//	}
	//}
	//for (i = 0; i < 10; i++)
	//	std::cout << newer_array[i] << "\t";
	//std::cout << std::endl;
	//
	//std::cout << "the first numerically is: ";
	//for (i = 0; i < 1; i++)
	//	std::cout << newer_array[i] << std::endl;
	//
	//std::cout << "the last numerically is: ";
	//std::cout << newer_array[(sizeof(newer_array) / sizeof(int)) - 1];
	//6
	int x[2][3][2] = {{{0,1}, {2,3}, {4,5}},
		{{6,7}, {8,9}, {10,11}}};

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				std::cout << "Element at x[" << i
					<< "][" << j << "][" << k << "] = "
				<< x[i][j][k] << std::endl;
			}
		}
	}


	return 0;
}