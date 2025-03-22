num = 1
while num <= 10:
    print(num)
    num += 1

# break 
num1 = 1
while num1 <= 10:
    print(num1)
    num1 += 1
    if num1 == 5:
        break
 
# continue 
num2 = 0 
while num2 <= 10:
    num2 += 1
    if num2 % 2 == 1:
        continue
    print(num2)
    
    