def add_binary(a, b):
    # Convert the input strings to integer values using int() function
    a = int(a, 2)
    b = int(b, 2)

    # Perform addition by shifting bits one place left for each digit
    result = a + b

    # Return the binary representation of the resulting value with leading zeros removed (using bin() function)
    return str(bin(result))[2:]


print(add_binary('10', '1'))   # Output: "11"
print(add_binary('1010', '1011'))   # Output: "10101"

#In this example, we first convert both inputs from decimal to binary format
