#include <iostream>
#include <vector>

using namespace std;

vector<int> selectionSort(vector<int> arr) {
	int n = arr.size();
	int i = 0;

	while (i < n-1) {
        int minIndex = i;
        int j = i + 1;
        while (j < n) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            j++;
        }
        swap(arr[minIndex], arr[i]);
        i++;
    }

	return arr;
}
