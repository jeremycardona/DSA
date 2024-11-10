/*
 * =====================================================================================
 *
 *       Filename:  insertion-sort.c
 *
 *    Description: insertion sort n^2 
 *
 *        Version:  1.0
 *        Created:  10/16/2024 08:51:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (Jeremy Cardona), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
void insertion_sort(int a[], int size){
	int i, j, key;
	for (i = 1; i < size; i++){
		key = a[i];
		j = i - 1;
		while ( j >= 0 && a[j] > key){
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
}
int main(void){
	int arr[] = {52, 65, 23, 12, 78, 45, 78, 97, 42, 41, 1};
	int length = sizeof(arr) / sizeof(arr[0]);
	
	int i;
	insertion_sort(arr, length);
	for (i = 0; i < length; i++){
		printf("%d, ", arr[i]);
	}

	return 0;
}
