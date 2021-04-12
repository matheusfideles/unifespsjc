i=0;
try:
    while True:
        ano=int(input())
        leapYear= ((ano%4==0) and not (ano%100==0)) or (ano%400==0)
        huluculu= ano%15==0
        bulukulu= ano%55==0 and leapYear
        ordinary= not leapYear and not huluculu and not bulukulu
        if i:
            print('')
        i=1
        if ordinary:
            print('This is an ordinary year.')
        else:
            if leapYear:
                print('This is leap year.')
            if huluculu:
                print('This is huluculu festival year.')
            if bulukulu:
                print('This is bulukulu festival year.')
except EOFError:
    pass
    
