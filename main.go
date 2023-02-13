package main

import (
	"github.com/pulatnazarov/basic-algorithms/binary_search"
	"github.com/pulatnazarov/basic-algorithms/heap_sort"
	"github.com/pulatnazarov/basic-algorithms/insertion_sort"
	"github.com/pulatnazarov/basic-algorithms/linear_search"
	"github.com/pulatnazarov/basic-algorithms/selection_sort"
)

func main() {
	selection_sort.SelectionSort()
	heap_sort.HeapSort()
	insertion_sort.InsertionSort()
	binary_search.BinarySearch()
	linear_search.LinearSearch()
}
