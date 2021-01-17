import random
MyList2=[]
rand = [random.randint(1, 50) for x in range(1, 6)]
max=0
print(rand)
for i in rand:
    if i>max:
        max=i
seen = set()
seen_add = seen.add
seen_twice = set( x for x in rand
if x in seen or seen_add(x) )
print('max=',max,"the numbers that appear more than once",*seen_twice,sep=' ')
