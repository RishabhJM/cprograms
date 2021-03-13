l1=list(input('enter list 1: '))
l2=list(input('enter list 2: '))
import itertools
dic={}
i=0
j=0
for x in range (len(l1)):
    dic[l1[i]]=l2[j]
    i+=1
    j+=1
print (dic)
#shubham aggarwal