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

int32_t main() {
    vector<int> v = {5, 4, 3, 0, 21, 1, 0, 9};

    v = insertionSort(v);

    for (auto x:v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}