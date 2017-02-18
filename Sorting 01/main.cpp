#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "SortingAlgorithms.h"
using namespace std;


int main(int argc, char** argv)
{

	
	int numberElements;
	int numberInput;

	//Checking the input
	if(argc != 2)
	{
		cout << "\n\n \t *** ERROR! *** \n" << endl;

		cout << "\t" << argv[0] << " <method_number> < <input_file_name>" << endl;

		cout << "\t -> Menu - sorting methods:\n"
			 "\t 1- Selection sort \n"
			 "\t 2- Insertion sort \n"
			 "\t 3- merge\n"
			 "\t 4- quick\n"
			 "\t 5- heap\n";

		return -1;
	}

	std::cin >> numberElements;

    //std::vector<int> vElements(numberElements) ;
    std::vector<int> vElements;
	vElements.reserve(numberElements);
	
	for (int i = 0; i < numberElements; ++i)
	{
		std::cin >> numberInput;
		vElements.push_back(numberInput);
	}

	//Creating the object the class SortingAlgorithms
	SortingAlgorithms *sortingAlgorithms = new SortingAlgorithms();

	//Checking the input - Associating the number with thesorting methods:
	switch ( atoi(argv[1]) )
	{

	case 1:
		sortingAlgorithms->selectionSort(vElements);

		cout << "\n\n\n \t*** 1- Selection sort ***" << endl;
		for(int i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;
	case 2:
		sortingAlgorithms->insertSort(vElements);
		cout << "\t*** 2- Insertion sort ***" << endl;
		for(int i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;
	case 3:
		sortingAlgorithms->mergeSort(0, vElements.size(), vElements);
		cout << "\t*** 3- merge ***" << endl;
		for(int i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}

		break;
	case 4:
		sortingAlgorithms->quickSort(0, vElements.size() - 1, vElements);

		cout << "\t*** 4- quick ***" << endl;
		for(int i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;
	case 5:
		sortingAlgorithms->heapSort(vElements);
		cout << "\t*** 5- heap ***" << endl;
		for(int i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;
	}



	return 0;
}
