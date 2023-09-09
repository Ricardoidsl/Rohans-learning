def factorial():
    num = int(input("enter a number:"))
    one = 1
    for index in range(num):
        one = num*one
        num -= 1
    print(one)

factorial()