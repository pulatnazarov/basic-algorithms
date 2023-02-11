package binary_search

import "sort"

func BinarySearch() {
	array := []int{3, 10, 1, 4, 5, 7, 6, 8, 9, 2}
	sort.Ints(array)
	result := binarySearch(array, 6, 0, len(array)-1)
	if result == -1 {
		println("Element is not present in array")
	} else {
		println("Element is present at index", result)
	}
}

func binarySearch(array []int, key, l, r int) int {
	if r >= l {
		mid := (l + r) / 2
		if array[mid] == key {
			return mid
		} else if key > array[mid] {
			return binarySearch(array, key, mid+1, r)
		} else if key < array[mid] {
			return binarySearch(array, key, l, mid-1)
		}
	}
	return -1
}
