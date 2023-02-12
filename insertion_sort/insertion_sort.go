package insertion_sort

import "fmt"

func InsertionSort() {
	array := []int{10, 9, 8, 27, 16, 15, 4, 3, 3, 3, 2, 1}
	result := insertionSort(array)
	fmt.Println("Sorted array is:", result)
}

func insertionSort(array []int) []int {
	for i := 1; i < len(array); i++ {
		for j := i; j > 0 && array[j] < array[j-1]; j-- {
			array[j], array[j-1] = array[j-1], array[j]
		}
	}
	return array
}
