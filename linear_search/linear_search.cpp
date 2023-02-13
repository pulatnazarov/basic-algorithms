#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> array, int key, int size) {
    if (size == 0) {
        return -1;
    }

    if (array[size - 1] == key) {
        return size - 1;
    }

    return linearSearch(array, key, size - 1);
}

//int32_t main() {
//    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int result = linearSearch(array, 11, array.size());
//    (result == -1) ? cout << "Not found\n" : cout << "Found at index " << result << endl;
//
//    return 0;
//}
