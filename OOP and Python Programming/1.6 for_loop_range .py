numbers = [5,7,9,10,12]
sum = 0

for num in numbers :
    print(num)
    sum += num
print(sum)

text = 'mahmud'
len = 0
for char in text :
    print(char)
    len += 1
print(len)


# range -> start (inclusive) to stop (exclusive) "if need"-> step  range(1,10)/range(1,10,2)
for i in range(1,10,2):
    print(i)

for i in range(1,10):
    print(i)




for index, value in enumerate(numbers):  # index and value
    print(index, value)



for index in range(len(numbers)):  # index
    print(index)

for index, _ in enumerate(numbers):  # index
    print(index)