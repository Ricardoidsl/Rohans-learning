import csv

class item:
    discount = 0.8
    all = []
    def __init__(self, name: str, quantity: int, price: int):
        assert price and quantity >= 0
        self.__name = name
        self.__quantity = quantity
        self.__price = price
        item.all.append(self)
    
    @property
    def price(self):
        return self.__price
    @property
    def name(self):
        return self.__name
    @property
    def quantity(self):
        return self.__quantity
    
    @name.setter
    def name(self, a):
        self.__name = a

    @quantity.setter
    def quantity(self, b):
        self.__quantity = b
        
    @price.setter
    def price(self, c):
        self.__price = c
    
    def ctp(self):
        return self.price * self.quantity
    
    def apply_discount(self):
        return self.price*self.quantity*self.discount
    
    def __repr__(self):
        return {self.__class__.__name__}({self.name},{self.price},{self.quantity})
    
    @classmethod
    def inst(cls):
        f = open("item.csv","r")
        reader = csv.DictReader(f)
        items = list(reader)
        for i in items:
            print(i)
        for i in items:
            item(name = i.get('name'),
                 price = int(i.get('price')),
                 quantity = int(i.get('quantity')),
                )
    
    @staticmethod
    def is_integer(num):
        if isinstance(num, float):
            return num.is_integer()
        elif isinstance(num, int):
            return True
        else:
            return False

