string=" hello goodbye 1234 welcome 777 toys today"
numberOfletters=0
numberOfwords=0
mylist=[]
my_list2=string.split()
my_list3=[]
numberofnumbers=0
for i in range(0,len(string)):
    if string[i]>='a' and string[i]<='z' or  string[i]>='A' and string[i]<='Z' or string[i]>='0' and string[i]<='9' or string[i]==' ': 
        numberOfletters=numberOfletters+1
    if (string[i-1]==' '  and string[i]>='a' and string[i]<='z') or (string[i-1]==' '  and string[i]>='A' and string[i]<='Z') or  (string[i-1]==' '  and string[i]>='0' and string[i]<='9'):
        numberOfwords=numberOfwords+1
    elif string[0]!=" ":
         numberOfwords=numberOfwords+1
for s in string.split():
      if s.isdigit():
          numberofnumbers=numberofnumbers+1
          mylist.append(s)


for i in my_list2:
     if "w" in i or "d" in i:
         my_list3.append(i)     
print(numberOfletters,"letters\n",numberOfwords,"words\n",numberofnumbers,"words are all numbers\n","words with w OR d:\n",*my_list3,sep=' ')           



