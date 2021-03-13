para=[0]*100
print ('enter the para:')
for x in range (0,100):
    para[x]=str(input())
    if para[x]== ((len(para[x]))*' '):
        break
for y in range (0,(x)):
    for z in para[y]:
        print(z,end='')   
    print ('\n')
#shubham aggarwal


        


