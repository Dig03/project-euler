#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<int> multiples;
    for (int i = 0; i < 1000; i++)
    {
        if ( (i % 3) == 0 || (i % 5) == 0 )
        {
            multiples.push_back(i);
        }
    }
    int sum = std::accumulate(multiples.begin(), multiples.end(), 0);
    std::cout << sum;
    return 0;
}