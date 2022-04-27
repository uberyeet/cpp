#include <iostream>

int main()
{
    int k{ 0 }, n[256]{}, numOfElem{ 0 };
    bool isAscending = true, isDescending = true;
    std::cout << "k="; std::cin >> k;
chooseAgain:
    std::cout << "Number of elements="; std::cin >> numOfElem;
    if (numOfElem <= k) goto chooseAgain;
    for (int i{ 0 }; i < numOfElem; i++)
    {
        std::cout << "n[" << i + 1 << "]= "; std::cin >> n[i];
    }
    for (int i{ 0 }; i < k - 1; i++)
    {
      //checks if numbers are ordered ascending until reaching k
        if (n[i] < n[i + 1]) continue; //if it is, then we move on to the next iteration
        else
        {
            isAscending = false;
            break;
        }
    }
    for (int i = k - 1; i < numOfElem - 1; i++)
    {
      
        if (n[i] > n[i + 1]) continue;
        else
        {
            isDescending = false;
            break;
        }
    }
    if (isAscending) std::cout << "The n numbers ARE ordered ascending (from 1 to " << k << ")\n";
    else std::cout << "The n numbers ARE NOT ordered ascending (from 1 to " << k << ")\n";
    if (isDescending) std::cout << "The k numbers ARE ordered descending (from " << k << " to " << numOfElem << ")\n";
    else std::cout << "The k numbers ARE NOT ordered descending (from " << k << " to " << numOfElem << ")\n";
}
