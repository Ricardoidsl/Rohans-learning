from ques import questions

question_prompts = [
    "who is the best singer?\n(a) Taylor Swift\n(b) Dua Lipa\n(c) Lana Del rey\n\n",
    "who is the best f1 driver?\n(a) max verstappen\n(b) carlos sain\n(c) Lewis Hamilton\n\n",
    "Alex, ?\n(a) Sunshine \n(b) waterfall\n(c) rainbow\n\n"
]

question = [questions(question_prompts[0],"a"), questions(question_prompts[1],"b"), questions(question_prompts[2],"a")]

def test(question):
    score = 0
    for i in question:
        answer = input(i)
        if answer == i.answer:
            score += 1
    print("you got " + str(score) + "/" + str(len(question)) + "correct")

test(question)        