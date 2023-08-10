def count_zeros(number):
    count = 0
    while number > 0:
        digit = number % 10
        if digit == 0:
            count += 1
        number //= 10
    return count


user_number = input("Enter a number: ")
num = int(user_number)

zero_count = count_zeros(num)

print(f"The number of zeros in {num} is {zero_count}")
