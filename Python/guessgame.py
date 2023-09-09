def game():
    secret = "kanakshree devvanshi"
    guess = ""
    guesscount = 0
    guesslimit = 3
    guessover = False
    while guess != secret and not(guessover):
        if guesslimit > guesscount:
            guess = input("name of best baby: ")
            guesscount += 1
        else:
            guessover = True
    if guess == secret:
        print("you win")
    else:
        print("you lose")
        
game()