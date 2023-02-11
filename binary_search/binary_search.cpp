#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> array, int key, int l, int r) {
    if (r >= l) {
        int mid = (l + r) / 2;
        if (array[mid] == key){
            return mid;
        } else if (array[mid] > key) {
            return binarySearch(array, key, l, mid - 1);
        } else {
            return binarySearch(array, key, mid + 1, r);
        }
    }
    return -1;
}

int32_t main() {
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = binarySearch(array, 0, 0, array.size() - 1);
    (result == -1) ? cout << "Not found\n" : cout << "Found at index " << result << endl;

    return 0;
}
