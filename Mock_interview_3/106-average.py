#!/usr/bin/python3

def average(my_list=[]):
    sum = 0
    moyen = 0
    l = len(my_list)
    
    for i in my_list:
        sum += i
    moyen = (sum / l)

    return moyen