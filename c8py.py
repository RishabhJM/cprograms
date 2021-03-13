line=str(input('enter the line : '))
x=len(line)
def rev(y):
    y-=1
    if y>=0:
        print(line[y], end='')
        rev(y)

rev(x)
#shubham aggarwal