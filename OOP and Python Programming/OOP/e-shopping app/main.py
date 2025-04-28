from shop import Shop

def main():
    shop = Shop()

    # Sellers
    seller1 = shop.register_seller("seller1@example.com", "pass123")
    seller1.add_product(shop, "Laptop", 1000, 5)
    seller1.add_product(shop, "Mouse", 20, 10)

    # Customers
    customer1 = shop.register_customer("customer1@example.com", "custpass")

    # Customer views products
    print("\nAvailable Products:")
    customer1.view_products(shop)

    # Customer places order
    customer1.place_order(shop, product_id=1, quantity=2)  # Laptop x2

    print("\nAvailable Products after order:")
    customer1.view_products(shop)

if __name__ == "__main__":
    main()
