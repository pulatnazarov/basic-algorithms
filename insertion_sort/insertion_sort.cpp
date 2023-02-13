#include <iostream>
#include <vector>

using namespace std;

vector<int> insertionSort(vector<int> v) {
    for (int i = 1; i < v.size(); i++) {
        for (int j = i; j > 0 && v[j] < v[j - 1]; j--) {
            int temp = v[j];
            v[j] = v[j - 1];
            v[j - 1] = temp;
        }
    }
    return v;
}
