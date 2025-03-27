

balance = 3000  # global variables

def buy_things(item, price):
    
    #you can access global variable without using the global keyword
    dream_phone = 'xphone'  #local scope variable
    # if you want to modify a global variable , you have to use the global keyword
    global balance
    print(f'previous balance value', balance)
    balance = balance - price
    print(f'blance after buying {item} ',balance)
    
buy_things('sunglass',1000)
print('global balance after buy',balance)

    