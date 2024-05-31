#!usr/bin/python3
def print_diagonal(n):
    for i in range(1, n):
        print("\\")
        for j in range(i):
            print(" ", end="")
    print()