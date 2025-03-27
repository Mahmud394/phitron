
# Default parameters
def sum(num1,num2,num3=0):
    result = num1 + num2
    print(result)

sum(10,4)

# args
def all_sum(*args):
    print(args)

all_sum(3,6,4,5,8)


def all_sum(num1,num2,*args):
    print(args)
    sum = 0
    for num in args:
        print(num)
        sum += num
    return sum
        
total = all_sum(3,6,4,5,8)
print(total)


