def text(string):
 list1=[]
 list1=string.split()
 my_dic={}
 count=0
 for i in range(0,len(list1)):        
     my_dic[list1[i]]=list1.count(list1[i])
 return my_dic
string="how much wood would the wood chuck chuck if the wood chuck would chuck wood"
x=text(string)
print(x)







