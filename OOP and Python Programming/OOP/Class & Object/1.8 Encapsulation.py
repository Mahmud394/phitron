# Access Modifiers (Public, Private, Protected)
# Encapsulation -> hide details
class Bank:
    def __init__(self, holder_name, initial_deposit):
        self.holder_name = holder_name # public
        self._branch = 'banani 11' # protected
        self.__balance = initial_deposit # private
    
    def deposit(self,amount):
        self.__balance += amount
        
    def get_balance(self):
        return self.__balance
    
    def withdraw (self, amount):
        if amount < self.__balance:
            self.__balance = self.__balance - amount
            return amount
        else :
            return f'forkia taka nai'
    
mahmud = Bank('mahmud', 10000)
mahmud.deposit(200)
print(mahmud.get_balance)
print(mahmud.withdraw(500))

print(mahmud._Bank__balance)  #access private 


        