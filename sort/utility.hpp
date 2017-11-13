#pragma once

#include <vector>
#include <ostream>

template<typename T>
std::vector<T> parse_args(int argc, char* argv[]) {
    std::vector<int> data(argc-1);

    std::transform(std::next(argv),
                   std::next(argv, argc),
                   std::begin(data),
                   std::atoi);

    return data;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)  
{  
    std::copy(v.begin(), v.end(), std::ostream_iterator<T>(os, " "));
    return os;  
}  