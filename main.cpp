#include <iostream>
#include <vector>
#include "linear_search/linear_search.cpp"
#include "binary_search/binary_search.cpp"
#include "insertion_sort/insertion_sort.cpp"
#include "heap_sort/heap_sort.cpp"
#include "selection_sort/selection_sort.cpp"

using namespace std;

void printVector(vector<int> v) {
    for (auto x:v) {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main() {
    vector<int> v, array = {5, 4, 3, 0, 21, 1, 0, 9, 8, 9, 10};
    int result;

    v = selectionSort(array);
    cout << "\nSelectionSort\n";
    printVector(v);

    v = heapSort(array, array.size());
    cout << "\nHeapSort\n";
    printVector(v);

    v = insertionSort(v);
    cout << "\nInsertionSort\n";
    printVector(v);

    result = binarySearch(array, 0, 0, array.size() - 1);
    cout << "\nBinarySearch\n";
    (result == -1) ? cout << "Not found\n" : cout << "Found at index " << result << endl;

    result = linearSearch(array, 1, array.size());
    cout << "\nLinearSearch\n";
    (result == -1) ? cout << "Not found\n" : cout << "Found at index " << result << endl;

    return 0;
}