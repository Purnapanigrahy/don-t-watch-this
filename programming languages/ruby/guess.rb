# guess game
# enter a guess name in guess_word first
guess_word="ppp"
user_guess_word=""
max_guess=3
total_guess=0
max=false
while user_guess_word != guess_word and !max
    puts("enter your guess word:")
    user_guess_word = gets.chomp()
    total_guess+=1
    if user_guess_word == guess_word
        puts("your guess is right.")
        puts"you win"
    else
        puts"your guess is wrong."
    end
    if total_guess== max_guess
        puts("your guess is reached to max.")
        puts "you lost"
        max=true
    end
end