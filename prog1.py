
givenstr=(input('enter'))
upcase=0
lwrcase=0
special=0
digits=0
for x in givenstr:
    if 'a' <= x and x <= 'z': 
        lwrcase+=1
    elif 'A' <= x and x<= 'Z':
        upcase+=1
    elif '0' <= x and x<='9':
        digits+=1
    else:
        special += 1
print ('lowercase =', lwrcase,'special characters =', special, 'digits =', digits, 'uppercase =', upcase)
#shubham aggarwal


