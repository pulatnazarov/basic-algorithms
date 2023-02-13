#include <iostream>
#include <vector>

using namespace std;

int32_t main() {
	vector<int> arr = {64, -25, 12, 22, 11};
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

	cout << "Sorted array: \n";
	for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
	return 0;
}
