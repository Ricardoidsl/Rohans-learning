def exponent():
    base = float(input("input a number: "))
    power = int(input("input power: "))
    num = 1
    for index in range(power):
        num = num*base
    print(num)

exponent()
