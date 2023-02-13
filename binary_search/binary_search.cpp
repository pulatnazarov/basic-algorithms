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
