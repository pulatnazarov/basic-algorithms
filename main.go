package main

import (
	"github.com/pulatnazarov/basic-algorithms/binary_search"
	"github.com/pulatnazarov/basic-algorithms/heap_sort"
	"github.com/pulatnazarov/basic-algorithms/insertion_sort"
	"github.com/pulatnazarov/basic-algorithms/linear_search"
)

func main() {
	heap_sort.HeapSort()
	insertion_sort.InsertionSort()
	binary_search.BinarySearch()
	linear_search.LinearSearch()
}
