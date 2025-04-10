class Book:
    def __init__(self, name):
        self.name = name

    def read(self):
        pass

    def sleep(self):
        raise NotImplementedError


class Physics(Book):
    def __init__(self, name, lab): 
        self.lab = lab
        super().__init__(name)

    def sleep(self):
        print('topon sleeping')


topon = Physics('topon', True)

print(issubclass(Physics, Book))    # True
print(isinstance(topon, Physics))   # True
print(isinstance(topon, Book))      # True

topon.read()     # Does nothing
topon.sleep()    # Prints: topon sleeping
