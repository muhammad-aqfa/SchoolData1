"""
Decrypt program
"""

SECRET = "8\1i6o0s7'1j6y1!5r2{7'4w1f2e3u3h7{6&7t9n1t6y9j9p4i1/1!6O1!4l5t9y2g0 1z2q7|7'0c0a6t7'5~2q2w8(8z1f4e0d0 5n2v42"
print(SECRET)

def decrypt(encrypted):
    """ decrytion function """
    decrypted = ""
    for i in range(0, len(encrypted), 2):
        (offset, character) = encrypted[i:i+2] # take a pair of characters
        #print(offset,character,"i=",i)
        offset = int(offset) # decide what the offset was   
        decrypted += chr(ord(character) - offset)  # use offset to decrypt

    return decrypted

if __name__ == "__main__":
    print(decrypt(SECRET))
