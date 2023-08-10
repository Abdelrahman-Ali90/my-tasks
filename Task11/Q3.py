def split_string_in_half(s):
    length = len(s)
    half_length = length // 2
    first_half = s[:half_length]
    second_half = s[half_length:]
    return first_half, second_half


strings = ["apple", "banana", "cherry", "date", "fig", "grape"]

first_halves = []
second_halves = []

for s in strings:
    first_half, second_half = split_string_in_half(s)
    first_halves.append(first_half)
    second_halves.append(second_half)

print("First halves:", first_halves)
print("Second halves:", second_halves)
