#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    sum_tal = 0
    for i in range(x):
        try:
            print(f"{my_list[i]}", end="")
            sum_tal += 1
        except IndexError:
            break
    print()
    return(sum_tal)
