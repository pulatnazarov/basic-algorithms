package selection_sort

import "fmt"

func SelectionSort() {
	arr := []int{5, -4, 3, 2, 1}
	i := 0
	n := len(arr)

	for i < n-1 {
		minIndex := i
		j := i + 1
		for j < n {
			if arr[j] < arr[minIndex] {
				minIndex = j
			}
			j++
		}
		arr[minIndex], arr[i] = arr[i], arr[minIndex]
		i++
	}

	fmt.Println("sorted array: ", arr)
}
