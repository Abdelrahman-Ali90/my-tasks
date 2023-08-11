def second_largest_smallest(numbers):
    if len(numbers) < 2:
        print("The list should contain at least two numbers.")
        return None, None
    
    first_largest = second_largest = numbers[0]
    first_smallest = second_smallest = numbers[0]
    
    for num in numbers:
        if num > first_largest:
            second_largest = first_largest
            first_largest = num
        elif num > second_largest and num < first_largest:
            second_largest = num
        
        if num < first_smallest:
            second_smallest = first_smallest
            first_smallest = num
        elif num < second_smallest and num > first_smallest:
            second_smallest = num
    
    return second_smallest, second_largest

numbers = [5, 7, 7, 8, 8, 8, 10]

second_smallest, second_largest = second_largest_smallest(numbers)

if second_smallest is not None and second_largest is not None:
    print("Second Smallest:", second_smallest)
    print("Second Largest:", second_largest)
