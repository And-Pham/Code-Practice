def even_fib(up_bound):
    """ Calculates the sum of the numbers of the Fibonnacci sequence below a max bound"""

    n_1 = 1
    n_2 = 2

    counter = 0
    even_sum = 2

    while n_2 < up_bound:

        # The every third value past the first is even
        if counter == 3:
            counter = 1
            even_sum += n_2
        else:
            counter += 1

        # Calculate the next fib value
        n_3 = n_1 + n_2

        # Swap the elements
        n_1, n_2 = n_2, n_3

    return even_sum
