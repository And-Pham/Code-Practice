def bubble_sort(arr):
    """ Sort an integer array with bubble sort."""

    lst_idx = len(arr) - 1
    num_swaps = 0

    for i in range(0, lst_idx):
        swap = False

        for j in range(0, lst_idx - i):

            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                num_swaps += 1
                swap = True

        if not swap:
            break

    print("Number of swaps: " + str(num_swaps))
    print("Sorted List: " + str(arr))

    return
