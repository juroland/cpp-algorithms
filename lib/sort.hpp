template< class RandomIt >
void insertion_sort(RandomIt first, RandomIt last)
{
    for (auto it = first; it != last; ++it) {
        std::rotate(std::upper_bound(first, it, *it), it, std::next(it));
    }
}