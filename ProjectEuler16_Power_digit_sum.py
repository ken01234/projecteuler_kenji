#I did it in python as I am not sure how to split strings in C++ and I knew how to do it in Python 
power = 2**1000
s1 =str(power) #the numbers into string
sum=0
numbers=[]
for i in range (len(s1)):
  numbers.append(s1[i]) #the numbers are added into a list and split into individual strings 
for n2 in numbers:
  n3 = int(n2) #the numbers are then returned back into integers and added into the sum 
  sum+=n3
print(sum)
