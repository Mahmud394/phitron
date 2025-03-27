# List, array , collection

# index =   0   1  2  3  4  5  6  7  8   9 
numbers = [34, 45, 6, 7, 3, 4, 2, 1, 56, 8]
#index =  -10 -9  -8 -7 -6 -5 -4 -3 -2  -1

print (numbers[3],numbers[-3])

# list(start : end) # start from the start index and stop before the end index
print(numbers[2:6])
print(numbers[1:7])

# list(start : end : step)
print(numbers[1:7:1])
print(numbers[7:1:-1])
print(numbers[4:])
print(numbers[:6])
print(numbers[:]) # shortcut to copy a list
print(numbers[::-1]) # shortcut to reverse a list

