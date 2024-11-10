def insertion_sort(A, n):
    for i in range(1, n):
        key = A[i]
        # insert A[i] into the sorted subarray A[1: i-1]
        j = i - 1
        while j >= 0 and A[j] > key:
            A[j + 1] = A[j]
            j = j - 1
        A[j + 1] = key
    return A

array = [21,7, 35, 62, 78, 42, 74, 44]
size = len(array)

print(insertion_sort(array, size))
