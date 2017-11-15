#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "sort.hpp"

TEST_CASE ("Insertion Sort") {
    std::vector<int> v {3, 2, -10, 107, 17, 23, 23, -2, 20, 8, 9, 11, -2, 32};
    const std::vector<int> const_v = v;
    const std::vector<int> v_sorted = {-10, -2, -2, 2, 3, 8, 9, 11, 17, 20, 23, 23, 32, 107};

    SECTION ("Complete range") {
        insertion_sort(v.begin(), v.end());
        REQUIRE(v == v_sorted);
    }

    SECTION ("Empty range") {
        insertion_sort(v.begin(), v.begin());
        REQUIRE(v == const_v);
    }

    SECTION ("Partial range") {
        auto first = std::next(v.begin(), 2);
        auto last = std::next(v.begin(), 5);
        insertion_sort(first, last);
        std::vector<int> part_sorted = {3, 2, -10, 17, 107, 23, 23, -2, 20, 8, 9, 11, -2, 32};
        REQUIRE(v == part_sorted);
    }
}