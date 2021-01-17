import random
import time
import sys
def beginning():
  print("wellcome to my game")
  time.sleep(1)
  print("you have to guess the correct numbers ")
  time.sleep(1)
  print("the numbers between 1-100")
  time.sleep(1)
  print("The Rules is ");
  time.sleep(1)
  print("you must to choose only postive numbers")
  print("if you choose negative number will lose one try")
  time.sleep(1)
  print("you have 20 tries")
def RandomNumbers():
 myList = [random.randint(1, 100) for i in range(0, 4)]
 randomNumbers = []
 for number in myList:
    if number in randomNumbers:
       continue;
    else:
        randomNumbers.append(number)
 Array=[]
 for i in range (0,len(randomNumbers)):
   Array.append('*')
 print(Array)
 #print(randomNumbers)
 trys=20;
 i=0;
 while trys>=1:
    checkthenumbers(randomNumbers[i])
    NumberGuess=input("please enter your number:")
    if NumberGuess.isdigit():
       if int(NumberGuess)==randomNumbers[i]:
           Array[i]=NumberGuess
           print(Array)
           i=i+1
           trys=trys-1;
           if(i==len(randomNumbers)):
            print("you Win The Game ^_^")
            print("do you wanna play Again ?:y/n")
            with open ("data.txt","w") as dataFile :
              dataFile.write(str(randomNumbers))
              dataFile.close()
            answer=str(input())
            if answer=='y' or answer=='yes':
               beginning()
               RandomNumbers()
            if answer=='n' or answer=='no':
               print("Thank you")
               return False;
                
       else:
            trys=trys-1;
            print("Wrong")
    else:
          print("you should try only numbers !  ")
          trys=trys-1;
 print("you Lost Try Again")
 print(randomNumbers)
def checkthenumbers(randomNumbers):
     if randomNumbers>=1 and randomNumbers<=10:
        print("the number between 1  and  10 ")
     if randomNumbers>=11 and randomNumbers<=20:
        print("the number between 11 and 20 ")  
     if randomNumbers>=21 and randomNumbers<=30:
        print("the number between 21 and 30 ")
     if randomNumbers>=31 and randomNumbers<=40:
        print("the number between 31 and 40 ")
     if randomNumbers>=41 and randomNumbers<=50:
        print("the number between 41 and 50 ")
     if randomNumbers>=51 and randomNumbers<=60:
        print("the number between 51 and 60 ")
     if randomNumbers>=61 and randomNumbers<=70:
        print("the number between 61 and 70 ")
     if randomNumbers>=71 and randomNumbers<=80:
        print("the number between 71 and 80 ")
     if randomNumbers>=81 and randomNumbers<=90:
        print("the number between 81 and 90 ")
     if randomNumbers>=91 and randomNumbers<=100:
        print("the number between 91 and 100 ")
     return True;

beginning()
RandomNumbers()


