#include <iostream>

bool isPrime(int num)
{
	//we assume every number that enters the function is a prime number until proven otherwise
	bool prime = true;
	int temp = 0;
	//we don't consider 0 and 1 prime numbers
	if (num == 0 || num == 1) prime = false;
	for (temp = num-1; temp > 1; --temp)
	{
		if (num % temp == 0)
		{
			prime = false;
			break;
		}
	}
	if (prime) return true; 
	else return false;
}

int main()
{
	int x{ 0 };
	std::cout << "Insert number\n";
	std::cin >> x;
	if (isPrime(x)) std::cout << "Prime";
	else std::cout << "Not prime";
}
