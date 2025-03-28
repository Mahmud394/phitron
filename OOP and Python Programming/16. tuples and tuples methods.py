# list ->[]
# tuple ->()

def multiple():
	return 3,4

# print(multiple())
things = 'pen','tripod','water bottole','charger','phone'

# print(type(things))
# print(things[0])
# print(things[-2])
# print(things[2:4])

if 'phone' in things:
	print('exitsts')

for item in things:
    print(item)
    
t = 12345, 54321, 'hello!'
print(t[1])
print(t)
(12345, 54321, 'hello!')
# Tuples may be nested:
u = t, (1, 2, 3, 4, 5)
print(u)
((12345, 54321, 'hello!'), (1, 2, 3, 4, 5))

# Tuples are immutable:
#t[0] = 88888
        #Traceback (most recent call last):
        # File "<stdin>", line 1, in <module>
        #TypeError: 'tuple' object does not support item assignment
        
# but they can contain mutable objects:
v = ([1, 2, 3], [3, 2, 1])
print(v)

empty = ()
singleton = 'hello',    # <-- note trailing comma
print(len(empty))

print(len(singleton))

print(singleton)


mega = [(3,5,7),(9,40,69)]  # list -> tuple  
print(mega)
print(type(mega))
mega[0][1] = 55  # list mutable
print(mega)