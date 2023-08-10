def unique(numbers):
    unique_numbers = []
    for num in numbers:
        if num not in unique_numbers:
            unique_numbers.append(num)
    
    return unique_numbers

input = input("Enter a list of numbers : ")
numbers = [int(input[i]) for i in range(len(input))]

unique_numbers = unique(numbers)

print("The unique numbers are:", unique_numbers)
