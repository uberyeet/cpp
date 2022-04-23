#include <iostream>

int main()
{
	//we store our number of banknotes used in banknote[]
	
	int banknote[6]{}, num, bank[6]{ 100,50,20,10,5,1 }, i = 0;
	std::cout << "Insert number \n";
	std::cin >> num;
	num;

	while (num >= 0)
	{
		//if our number - bank[i] is greater or equal to 0 (i=0 in our first iteration, which is equal to 100)
		//then subtract 100 from our number and store 1 banknote of 100 in our banknote[], else increase i
		if ((num - bank[i]) >= 0)
		{
			num -= bank[i];
			banknote[i] += 1;
		}
		else i++;
		if (num <= 0) break;
	}

	for (int i = 0; i < 6; i++)
	{
		if (banknote[i] > 0)
		{
			if (banknote[i] < 2)
			{
				std::cout << banknote[i] << " banknote of  " << bank[i] << std::endl;
			}
			else
			{
				std::cout << banknote[i] << " banknotes of  " << bank[i] << std::endl;
			}
		}
	}
}
