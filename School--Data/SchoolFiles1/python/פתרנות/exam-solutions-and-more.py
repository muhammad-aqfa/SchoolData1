print("  ---- solution to November 2019 exam  ---")
print("      also sorting and using files\n")


print("---------question 1")
for x in range(1,6):
    print("*" * x)
for x in range(4,0,-1):
    print("*" * x)


print("---------question 2")

def my_lists(row, col):
    print(row, col)
    big_lst = []
    for x in range(row):
        lst = []
        big_lst.append(lst)
        for y in range(col):
            lst.append((x + 1) * (y + 1))
            
 
    return big_lst

xxx = my_lists(4, 5)
print(xxx)



print("---------question 3")

def find_shlomo(lst):
    foo = "" 
    if "Shlomo" in lst:
        foo = "I found a shlomo"
    print (foo)
find_shlomo(["David", "George", "Tom", "Avi", "Shlomo"])



print("---------question 4")

def my_white(my_str):
    i = 0
    j = len(my_str) - 1

    while my_str[i] in[" ", "\t", "\r", "\n"]:
        i += 1
    while my_str[j] in[" ", "\t", "\r", "\n"]:
        j -= 1
    return my_str[i:j+1]    


 
x = "           hello world   \n"

y = "aa" + x + "aa"
print(y)
x = my_white(x)
y = "aa" + x + "aa"
print(y)



print("---------question 5")

def counter(my_str, my_letter):
    count = 0
    for letter in my_str:
        if my_letter == letter:
            count += 1
    return count

print(counter("hello world www", "w"))



print("---------sorting examples")
###  sorting  examples
##lst = [4, 7, 2, 17, 9]
lst = ["jhjha", "adc", "bbb"]
print(lst)
#lst.sort()
#print(lst)
print("after")
xxx = sorted(lst)
print(lst)
print(xxx)

def second(my_str):
    return my_str[1]
def last(my_str):
    return my_str[-1]

print(">>>>>sorted by second letter")
www = sorted(lst, key = second)
print(www)

print(">>>>>sorted by last letter")
www = sorted(lst, key = last)
print(www)



### reading and writing files
"""
with open("outfile.txt", "w") as my_output:
    with open("my_txt.txt", "r") as my_file:
        for line in my_file:
            #print(line)
            my_output.write("the line was" + line)




with open("my_txt.txt", "r") as my_file:
    for line in my_file:
        print(line)


## three ways to remove \n
with open("my_txt.txt", "r") as my_file:
    for line in my_file:
        print(line.strip("\n"))

with open("my_txt.txt", "r") as my_file:
    for line in my_file:
        print(line[:-1])

with open("my_txt.txt", "r") as my_file:
    for line in my_file:
        line = line.replace("\n", "")
        print(line)        
    
"""





