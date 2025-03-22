# in , is , not , not in , is not , and , or

age = 70

if age >= 18 and age < 60:
    print("can vote")
    print("adult")
elif age >= 60 :
    print("can vote")
    print("old")
else:
    print("can not vote")
    print("not adult")
    
is_pass = True

if is_pass is False :   # is -> ==
    print('Fail')
else:
    print('pass')
    
if is_pass is not False :   # is not -> !=
    print('pass')
else:
    print('Fail')