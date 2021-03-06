#include <vector>
#include <numeric>

template<typename T>
T Product(const std::vector<T> &v) {
    return static_cast<T> (accumulate(v.begin(), v.end(), 1, std::multiplies<>()));
}
