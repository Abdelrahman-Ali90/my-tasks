n = int(input("Enter the number: "))
numbers = input("Enter the array :")


numbers = [int(digit) for digit in numbers]
sum = 0
for i in range(n):
    sum += numbers[i]


print("Array of digits:", numbers)
print("Sum of digits:", sum)
