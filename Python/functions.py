def sayhello():
    name = input("enter your name")
    print("hello "+ name)

sayhello()

def sayhi(name):
    print("hello "+name)

sayhi("rohan")

def cube():
    num = input("enter a number: ")
    result = float(num)*float(num)*float(num)
    print(result)
cube()

def cubei(num):
    return num*num*num
print(cubei(3))

def square(num):
    return num*num
result = square(4)
print(result)