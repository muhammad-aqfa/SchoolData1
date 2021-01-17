s='www.something.com/shlomo/dir1/dir2/myfile.html'
my_list=[]
x=s.split("/")[1]
my_list.append(x)
print(x)
x=s.split("/")[2]
my_list.append(x)
print(x)
x=s.split("/")[3]
my_list.append(x)
print(x)
x=s.split("/")[4]
my_list.append(x)
print(x+'\n \n')

s='d:/shlomo/dir1/newdir2/newfile.html'
x=s.split('/')[1]
my_list.append(x)
x=s.split("/")[2]
my_list.append(x)
x=s.split("/")[3]
my_list.append(x)
x=s.split("/")[4]
my_list.append(x)
print(*my_list,sep=' ')
#print(str(my_list)[1:-1])  
