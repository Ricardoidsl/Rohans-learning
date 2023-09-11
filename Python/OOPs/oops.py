class Item:
    discount = 0.8 #global attribute
    def __init__(self, name: str, price: int, quantity: int):
        #assertions are used put validations on received arguments from objects made
        assert price >= 0, quantity >= 0
        #assigning values to a self object
        self.name = name
        self.price = price
        self.quantity = quantity
        #print(name+" created")
        #method created to multiply price and quantity
    def ctp(self):
        return self.price * self.quantity
        #functions inside a class are called methods, always autoassign self class 
        # as python uses the object that calls itself first before calling method 
    def apply_discount(self):
        return self.price * self.quantity * self.discount
        #if you want to apply a discount to the entire class then use classname. otherwise use self. for each unique object made
    
item1 = Item("phone", 10000, 500)
item2 = Item("laptop", 23232, 233)
#print(item1.apply_discount())
item1.discount = 0.1
#print(item1.apply_discount())
#print(Item.__dict__) #shows all attributes on class level
#print(item1.__dict__) #shows all attributes on instanace level
