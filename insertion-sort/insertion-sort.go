package main

import "fmt"

func InsertionSort(arr *[8]int) {
	for i := 1; i < len(arr); i++ {
		key := arr[i]
		j := i - 1

		for j >= 0 && arr[j] > key {
			arr[j+1] = arr[j]
			j = j - 1
		}
		arr[j+1] = key
	}
}
func main() {
	array := [8]int{13, 53, 11, 65, 76, 41, 32, 12}
	fmt.Println("Original array: ", array)

	InsertionSort(&array)
	fmt.Println("Sorted array: ", array)
}
