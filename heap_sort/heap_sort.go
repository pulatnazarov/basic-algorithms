package heap_sort

import "fmt"

func HeapSort() {
	arr := []int{2, 2, 2, 2, 2, 2, 2, 2, 2, 2, -9, 5, 11, 13, 12}
	heapSort(arr, len(arr))

	fmt.Println("Heap  Sort:", arr)
}

func heapSort(arr []int, n int) {
	for i := n/2 - 1; i >= 0; i-- {
		heapify(arr, n, i)
	}

	for i := n - 1; i > 0; i-- {
		arr[0], arr[i] = arr[i], arr[0]
		heapify(arr, i, 0)
	}
}

func heapify(arr []int, n int, i int) {
	largest := i
	l := 2*i + 1
	r := 2*i + 2

	if l < n && arr[l] > arr[largest] {
		largest = l
	}

	if r < n && arr[r] > arr[largest] {
		largest = r
	}

	if largest != i {
		arr[i], arr[largest] = arr[largest], arr[i]
		heapify(arr, n, largest)
	}
}
