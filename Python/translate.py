def translate():
    translation = ""
    phrase = input("enter words: ")
    for letter in phrase:
        if letter in "aeiouAEIOU":
            translation = translation + "g"
        else:
            translation = translation + letter
    print(translation)

translate()