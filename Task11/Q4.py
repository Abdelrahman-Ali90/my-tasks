def lucky_number(number):
    str_number = str(number)
    for digit_char in str_number:
        digit = int(digit_char)
        if digit != 4 and digit != 7:
            return False
    return True

def middle_nums(a, b):
    lucky_numbers = []
    for num in range(a, b + 1):
        if lucky_number(num):  
            lucky_numbers.append(num)
    return lucky_numbers

num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

lucky_nums = middle_nums(num1, num2)
if not lucky_nums:
    print("-1")
else:
    print(f"The lucky numbers between {num1} and {num2} are {lucky_nums}")
