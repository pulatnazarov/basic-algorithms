package linear_search

import "fmt"

func LinearSearch() {
	array := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	result := linearSearch(array, 1, len(array))
	if result == -1 {
		fmt.Println("Element is not present in array")
	} else {
		fmt.Println("Element is present at index", result)
	}
}

func linearSearch(array []int, key, size int) int {
	if size == 0 {
		return -1
	}

	if array[size-1] == key {
		return size - 1
	}

	return linearSearch(array, key, size-1)
}
