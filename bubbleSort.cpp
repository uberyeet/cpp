#include <iostream>

void bubbleSort()
{
	int numOfElem{}, temp{};
	std::cout << "How many elements do you want to sort? ";
	std::cin >> numOfElem;
	bool isSorted = false;
	int elem[516];

	for (int i = 0; i <= numOfElem - 1; i++)
	{
		std::cout << "elem " << i + 1 << " = ";
		std::cin >> elem[i]; std::cout << '\n';
	}

	while (!isSorted)
	{
		isSorted = true;
		for (int i = 0; i < numOfElem - 1; i++)
		{
			if (elem[i] > elem[i + 1])
			{
				temp = elem[i];
				elem[i] = elem[i + 1];
				elem[i + 1] = temp;
				isSorted = false;
			}
		}
	}
	std::cout << "Sorted array: \n";
	for (int i = 0; i <= numOfElem - 1; i++)
	{
		std::cout << elem[i] << ' ';
	}
}



int main()
{
	bubbleSort();
}
