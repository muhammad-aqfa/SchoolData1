"""
Encryptor program
   - let's look at how it works
"""
from random import randint

MY_SECRET = "This is my secret message. I hope you can you read it."

def encrypt(string):
    """ this is the encryption function """
    encrypted = ""
    for character in string:
        offset = randint(0,9)  # a random number to encrypt next character
        encrypted += str(offset)
        encrypted += chr(ord(character) + offset)

    #print(len(string),len(encrypted))
    return encrypted

#if __name__ == '__main__':
print(encrypt(MY_SECRET))
