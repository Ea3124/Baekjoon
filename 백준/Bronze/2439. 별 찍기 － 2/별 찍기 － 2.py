import sys

input = sys.stdin.readline

a=i= int(input())

while(i>0):
    i=i-1
    print(' '*i + '*'*(a-i))