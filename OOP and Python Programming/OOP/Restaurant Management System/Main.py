from FoodItem import FoodItem
from Menu import Menu
from users import Customer, Admin, Employee
from Restaurant import Restaurant
from orders import Order


mamar_restaurent = Restaurant("Mamar Restaurant")
def customer_menu():
    name = input('Enter Your Name: ')
    email = input('Enter Your Email: ')
    phone = input('Enter Your Phone: ')
    address = input('Enter Your Address: ')
    customer = Customer(name=name,email=email,phone=phone,address=address)
    
    while True:
        print(f'Welcome {customer.name}!!')
        print('1. view Menu')
        print('2. Add item to cart')
        print('3. View cart')
        print('4. payBill')
        print('5. Exit')
        
        choice = int (input ('Enter Your choice: '))
        if choice ==1:
            customer.view_menu(mamar_restaurent)
        elif choice == 2:
            item_name = input("Enter item name: ")
            item_quantity = int(input("Enter item Qantity: "))
            customer.add_to_cart(mamar_restaurent,item_name,item_quantity)
        elif choice == 3:
            customer.view_cart()
        elif choice == 4:
            customer.pay_bill()
        elif choice == 5:
            break
        else:
            print('Invalid Input!!')
            
            
def Admin_menu():
    name = input('Enter Your Name: ')
    email = input('Enter Your Email: ')
    phone = input('Enter Your Phone: ')
    address = input('Enter Your Address: ')
    admin = Admin(name=name,email=email,phone=phone,address=address)
    
    while True:
        print(f'Welcome {admin.name}!!')
        print('1. Add new item')
        print('2. Add New Employee')
        print('3. View Employee')
        print('4. View items')
        print('5. Delete Item')
        print('6. Exit')
        
        choice = int (input ('Enter Your choice: '))
        if choice ==1:
            item_name = input('Enter item name: ')
            item_price =int( input('Enter price: '))
            item_quantity = int(input("Enter Quantity: "))
            item = FoodItem(item_name, item_price, item_quantity)                           
            admin.add_new_item(mamar_restaurent, item)
        elif choice == 2:
            name = input('Enter employee name: ')
            email = input('Enter employee email: ')
            phone = input('Enter employee phone: ')
            designation = input('Enter employee designation: ')
            age = input('Enter employee age: ')
            salary = input('Enter employee salary: ')
            address = input('Enter employee adderss: ')
            employee = Employee(name, phone, email, address, age, designation, salary)
            admin.add_employee(mamar_restaurent, employee)
            
        elif choice == 3:
            admin.view_employee(mamar_restaurent)
        elif choice == 4:
            admin.view_menu(mamar_restaurent)
        elif choice == 5:
             item_name = input("Enter item name: ")
             admin.remove_item(mamar_restaurent, item)
        elif choice == 6:
            break
        else:
            print('Invalid Input!!')
            
            
while True:
    print('\t***Welcome***')
    print('1. Customer')
    print('2. Admin')
    print('3. Exit')
    choice = int (input('Enter your choice: '))
    if choice == 1:
        customer_menu()
    elif choice == 2:
        Admin_menu()
    elif choice == 3:
        break
    else:
        print('Invaid choice!!')
        
            
            
    
    
    
      
    
    
    