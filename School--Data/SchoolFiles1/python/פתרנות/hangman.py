import random
import sys
wordList=[]
with open ("hangman.txt","r") as bank_word :
    for line in bank_word:
        word=line[:-1]
        wordList.append(word)
    print(wordList)


guess_word = []
secretWord = random.choice(wordList)
length_word = len(secretWord)
alphabet = "abcdefghijklmnopqrstuvwxyz"
letter_storage = []



def beginning():
    print("Hello , play Hangman!\n")

    while True:
        name = input("Please enter Your name : \n").strip()

        if name == '':
            print("You can't do that! No blank lines")
        else:
            break

beginning()



def change():

    for character in secretWord:
        guess_word.append("*")

    print("You need to guess has", length_word, "characters")

    print("only 1 letter from a-z\n\n")

    print(guess_word)

def guessing():
    guess_taken = 10

    while guess_taken>0:


        guess = input("enter your letter\n").lower()

        if not guess in alphabet:
            print("Enter a letter from a-z\n")
        elif guess in letter_storage: 
            print("You have already guessed that letter!\n")
        else: 

            letter_storage.append(guess)
            if guess in secretWord:
                print("You guessed correctly!\n")
                for x in range(0, length_word): 
                    if secretWord[x] == guess:
                        guess_word[x] = guess
                print(guess_word)

                if not '*' in guess_word:
                    print("You won!\n")
                    break
            else:
                print("The letter is not in the word. Try Again!\n")
                guess_taken -= 1
                print(guess_taken)
                if guess_taken == 0:
                    print("Sorry, You lost....\nThe secret word was\n",secretWord)


change()
guessing()

print("End Game !")


          
