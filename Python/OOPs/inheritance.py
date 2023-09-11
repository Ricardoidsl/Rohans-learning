class item:
    discount = 0.8
    all = []
    def __init__(self, name: str, quantity: int, price: int):
        assert price and quantity >= 0
        self.name = name
        self.quantity = quantity
        self.price = price
        item.all.append(self)
    
    def ctp(self):
        return self.price * self.quantity
    
    def apply_discount(self):
        return self.price*self.quantity*self.discount
    
    def __repr__(self):
        return f"{self.__class__.__name__}({self.name},{self.price},{self.quantity})"
    
    @staticmethod
    def is_integer(num):
        if isinstance(num, float):
            return num.is_integer()
        elif isinstance(num, int):
            return True
        else:
            return False

class phone(item):
    def __init__(self, name: str, quantity: int, price: int, bp: int):
        super().__init__(
            name, price, quantity
        )
        self.bp = bp
        assert bp>=0

phone1 = phone("iphone", 1000, 5, 1)
phone2 = phone("iphone2", 1100, 4, 1)
phone1.bp = 1
phone2.bp = 1
print(phone1.ctp())
print(item.all)
print(phone.all)
