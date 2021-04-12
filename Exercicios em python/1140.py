while True:
    t='Y'
    c=''
    lista=input().split(' ')
    if(lista[0]=='*'):
        break;
    c=lista[0][0].lower()
    for i in lista:
        if i[0].lower()!=c:
            t='N'
            break
    print(t)
