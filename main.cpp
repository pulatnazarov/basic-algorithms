#include <iostream>
#include "../linear_search/linear_searc.cpp"

using namespace std;

int32_t main() {
    int[] array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = linearSearch(array, 1, array.size());
    (result == -1) ? cout << "Not found" : cout << "Found at index " << result;

    return 0;
}