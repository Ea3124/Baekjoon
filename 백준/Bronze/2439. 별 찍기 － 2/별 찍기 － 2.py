import sys

input = sys.stdin.readline

a= int(input())
list = []

for i in range(0,a):
    for j in range(0,a-i-1):
        list.append(" ")
    
    for k in range(a-i-1,a):
        list.append("*")
    
    print(*list, sep='')
    list = []