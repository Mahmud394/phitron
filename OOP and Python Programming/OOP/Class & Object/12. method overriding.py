class Person:
    def __init__(self, name, age, height, weight):
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight
        
    def eat(self):
        print('val dal mangso')
    
class Cricketer(Person):
    def __init__(self, name, age, height, weight, team):
        self.team = team
        super().__init__(name, age, height, weight)
        
    # override
    def eat(self):
        print('vegetables')


mahmud = Cricketer('mahmud', 22, 65, 67,'BD')
mahmud.eat()