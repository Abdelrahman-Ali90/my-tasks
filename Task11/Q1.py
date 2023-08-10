def factorial(x):
    
    if x == 0:
        return 1
    else:
        return x * factorial(x - 1)


num = int(input("Enter a number: "))


result = factorial(num)


print(f"The factorial of {num} is {result}")
