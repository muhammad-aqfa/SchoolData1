import sys
with open('results.txt', "w") as out_file:
    with open('targilim.txt', "r") as in_file:
        for line in in_file:
            my_list = line.split()
            print(my_list)
            if len(my_list) == 3 and my_list[0].isdigit()and my_list[2].isdigit() and my_list[1] in "+-/*":
                if my_list[1] == "+":
                    answer = int(my_list[0]) + int(my_list[2])
                elif my_list[1] == "-":
                    answer = int(my_list[0]) - int(my_list[2])
                elif my_list[1] == "*":
                    answer = int(my_list[0]) * int(my_list[2])
                elif not int(my_list[2]) == 0:
                    answer = int(my_list[0]) / int(my_list[2])
                else:
                    answer = "error"
            else:
                answer = "error" 
            #print(line[:-1] + " = " + str(answer))        
            out_file.write(line[:-1] + " = " + str(answer) + "\n")
