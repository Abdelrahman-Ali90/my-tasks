def sum(arr, size):
    sum = 0

    for i in range(size):
        sum += int(arr[i])

    return sum


size = int(input("Enter the size: "))
arr = input("Enter array array: ")
print("The sum of the array = ",sum(arr , size))
