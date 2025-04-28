from user import User

class Customer(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        self.orders = []

    def view_products(self, shop):
        shop.list_products()

    def place_order(self, shop, product_id, quantity):
        product = shop.get_product_by_id(product_id)
        if product and product.stock >= quantity:
            product.stock -= quantity
            self.orders.append((product, quantity))
            print(f"Order placed: {product.name} x{quantity}")
        else:
            print("Sorry, product is out of stock or insufficient quantity.")
