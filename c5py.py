d=[[],[],[]]
sec1=int(input('enter no. of students of section 1: '))
sec2=int(input('enter no. of students of section 2: '))
sec3=int(input('enter no. of students of section 3: '))
for x in range (0,sec1):
    print ('enter the marks of student',(x+1),'of section 1: ')
    p=int(input())
    d[0].append(p)
for x in range (0,sec2):
    print ('enter the marks of student',(x+1),'of section 2: ')
    p=int(input())
    d[1].append(p)
for x in range (0,sec3):
    print ('enter the marks of student',(x+1),'of section 3: ')
    p=int(input())
    d[2].append(p)
for x in range (0,3):
    print ('Section',(x+1))
    for y in range (0,len(d[x])):
        print ('student',(y+1),':',d[x][y])
#shubham aggarwal

