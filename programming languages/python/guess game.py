# guass game
guess_word="purna"
user_guess_word=""
max_guess=3
total_guess=0
max=False
while user_guess_word != guess_word and max==False:
    print("enter your guess word:")
    user_guess_word =input()
    total_guess+=1
    if user_guess_word == guess_word:
        print("your guess is right.")
    else:
        print("your guess is wrong.")
    if total_guess == max_guess:
        print("your guess is reached to max.")
        max=True