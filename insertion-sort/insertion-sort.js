const insertionSort = (Arr, n) => {

	for (let i = 1; i < n; i++){
		let key = Arr[i];
		// insert A[i] into the sorted subarray A[1: i - 1]
		let j = i - 1;
		while (j >= 0 && Arr[j] > key) {
			Arr[j + 1] = Arr[j];
			j = j - 1;
		}
		Arr[j + 1] = key;
	}
	return Arr;
}

const A = [22 ,44 ,21, 45, 65, 46, 75, 42];
const length = A.length;

console.log(insertionSort(A, length));
