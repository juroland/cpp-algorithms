#include <algorithm>
#include <vector>
#include <iostream>

#include "utility.hpp"
 
int main(int argc, char* argv[])
{
    std::vector<int> data = parse_args<int>(argc, argv);

    std::sort(data.begin(), data.end());

    std::cout << data << std::endl;
}