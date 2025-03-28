name = 'mahmud un nabi'
name1 = "Nabi"

# multiline string
name2 = """ 
    mahmud un nabi
    student
"""
name3 = 'mahmud\'s id'  #escape
print(name)
print(name1)
print(name2)
print(name3)

# string is sequence of characters
# string is immutable . it means you can not change it


text = 'Mahmud Un Nabi'

# upper() function to convert
# string to upper case
print("\nConverted String:")
print(text.upper())

# lower() function to convert
# string to lower case
print("\nConverted String:")
print(text.lower())

# converts the first character to 
# upper case and rest to lower case 
print("\nConverted String:")
print(text.title())

# swaps the case of all characters in the string
# upper case character to lowercase and viceversa
print("\nConverted String:")
print(text.swapcase())

# convert the first character of a string to uppercase
print("\nConverted String:")
print(text.capitalize())

# original string never changes
print("\nOriginal String")
print(text)
