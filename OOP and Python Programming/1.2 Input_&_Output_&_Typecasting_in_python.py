#  by default the input from user will be string type :

money1 = input('No1. Give me some money : ')
money2 = input('No2. Give me some money : ')
total = money1 + money2
print(total)
print(type(money1))

# typecasting
money1_int = int(money1)  # string to int
money2_int = int(money2)

print(money1_int + money2_int)

n = 42
# Convert integer to string
s = str(n)
print(s)

num = 10
decimal_value = float(num)  # number to decmimal
print(decimal_value) 

num_str = "3.1415"
decimal_value = float(num_str)
print(decimal_value)  # String to Float

result = float(5 / 2)
print(result)  # Integer Division to Float

o = 9.56
num_int = int(o)  # decimal to int
print(num_int)



