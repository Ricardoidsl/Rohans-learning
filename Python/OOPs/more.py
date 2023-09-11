import csv

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
        return f"item({self.name},{self.price},{self.quantity})"
    
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
        
item1 = item("phone", 100, 1)
item2 = item("laptop", 1000, 3)
item3 = item("cable", 10, 5)
item4 = item("mouse", 50, 5)
item5 = item("keyboard", 75, 5)

print(item.is_integer(7.0))
#item.inst()
#print(item.all)
#for i in item.all:
    #for j in i:
        #print(j)