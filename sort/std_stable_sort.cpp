#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>
#include <iterator>

#include "utility.hpp"
 
int main(int argc, char* argv[])
{
    std::vector<int> data = parse_args<int>(argc, argv);

    std::stable_sort(data.begin(), data.end());

    std::cout << data << std::endl;
}