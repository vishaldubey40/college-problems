num = int(input())
factorial = 1
if num < 0:
    print("Invalid number")
elif num == 0:
    print("fact is 1")
else:
    for i in range(1,num+1):
        factorial=factorial*i
    print("factorial of number is",factorial)    
   