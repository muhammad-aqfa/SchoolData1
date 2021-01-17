import sys
wordlist=[]
my_list=[]
count=0
with open ("ballots.txt","r") as in_file:
    for line in in_file:
        word=line[:-1]
        wordlist.append(word)
print(wordlist)        
      
