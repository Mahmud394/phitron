class Shop:
    def __init__(self):
        self.customers = []
        self.sellers = []
        self.products = []

    def register_customer(self, email, password):
        from customer import Customer
        customer = Customer(email, password)
        self.customers.append(customer)
        print(f"Customer account created: {email}")
        return customer

    def register_seller(self, email, password):
        from seller import Seller
        seller = Seller(email, password)
        self.sellers.append(seller)
        print(f"Seller account created: {email}")
        return seller

    def add_product(self, product):
        self.products.append(product)

    def list_products(self):
        for product in self.products:
            if product.stock > 0:
                print(product)

    def get_product_by_id(self, product_id):
        for product in self.products:
            if product.id == product_id and product.stock > 0:
                return product
        return None
