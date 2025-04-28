from abc import ABC, abstractmethod
# abstract base class
class Animal(ABC):
    @abstractmethod  # enforce all derived class to have a cat method
    def eat(self):
        print('I need food')
        
    def move(self):
        pass
    
class Monkey(Animal):
    def __init__(self,name):
        self.category = 'Monkey'
        self.name = name
        
    def eat(self):
        print('Hey na nana, I am eating banana')

layka = Monkey('lucky')
layka.eat()
        