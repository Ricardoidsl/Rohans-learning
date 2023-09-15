from item import item

class phone(item):
    def __init__(self, name: str, quantity: int, price: int, bp: int):
        super().__init__(
            name, price, quantity
        )
        self.bp = bp
        assert bp>=0