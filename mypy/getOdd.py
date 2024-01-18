def get_odd(numbers):
    return [number for number in numbers if number % 2!= 0]
my_list = [1, 2, 3, 4, 5, 6]
print(get_odd(my_list)) # Output: [1, 3, 5]