def binary_sum(a, b):
    return bin(int(a, 2) + int(b, 2))[2:]

print(binary_sum('10', '1')) # Output : "11"