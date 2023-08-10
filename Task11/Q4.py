def is_lucky_number(number):
    while number > 0:
        digit = number % 10
        if digit != 4 and digit != 7:
            return False
        number //= 10
    return True

def print_lucky_numbers_between(a, b):
    lucky_numbers = []
    for num in range(a, b + 1):
        if is_lucky_number(num):
            lucky_numbers.append(num)
    
    if not lucky_numbers:
        print("-1")
    else:
        print(" ".join(map(str, lucky_numbers)))

# Get input A and B
a, b = map(int, input().split())

# Print lucky numbers between A and B
print_lucky_numbers_between(a, b)
