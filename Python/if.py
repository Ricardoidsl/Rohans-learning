is_male = True
is_tall = True
if is_male or is_tall:
    print("you are a male or tall or both")
else:
    print("you are not a male")

def calc():
    num1 = float(input("enter first number: "))
    op = input("enter operator: ")
    num2 = float(input("enter second number: "))

    if op == "+":
        print(num1+num2)
    elif op == "-":
        print(num1 - num2)
    elif op == "*":
        print(num1 * num2)
    elif op == "/":
        print(num1 / num2)
    else:
        print("error")

calc()
