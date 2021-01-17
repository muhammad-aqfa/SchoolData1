import sys

def main():
    infile, outfile = get_parms()
    try:
        do_calc(infile, outfile)
    except:
        print("error in do_calc")
    finally:
        print("goodbye")
        
def get_parms():
    try:
        targilim = sys.argv[1]
        results = sys.argv[2]
        return targilim, results
    except:
        print("parameter error")
        exit()
    finally:
        print("goodbye")
        
def do_calc(targilim, results):
    with open(results, "w") as out_file:
        with open(targilim, "r") as in_file:
            for line in in_file:
                my_list = line.split()
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

main()
