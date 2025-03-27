def full_name(first,last):
    name = f'Full Name :{first} {last}'
    return name

name = full_name("alu" , 'kodu') # take parameters in order (serial wish)
fullname = full_name(first = 'kodu' , last = 'alu')
print(name)
print(fullname)

# kargs
# def function_name(num1,num2,*args,**kargs):

def famous_name(first,last,**addition):
    f_name = f' {first} {last}'
   # print(addition)
   # print(addition['title'])
    for key , value in addition.items():
        print(key,value)
    return f_name

a_name = famous_name(first = 'tahir' , last = 'ali', title = 'hojur' , title2 = 'shayokh' , last2 = 'taheri')
print(a_name)   


# multiple return 

def lot_of(num1,num2):
    sum = num1 + num2
    mul = num1 * num2
    sub = num1 - num2
    return sum,mul,sub
    # return [sum,mul,sub]

everything = lot_of(50 ,5)
print(everything)