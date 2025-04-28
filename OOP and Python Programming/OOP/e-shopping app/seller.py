from user import User
from product import Product

class Seller(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        self.products = []

    def add_product(self, shop, name, price, stock):
        product = Product(name, price, stock, self)
        self.products.append(product)
        shop.add_product(product)
        print(f"Product '{name}' added successfully.")
