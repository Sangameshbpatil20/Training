
def prime(n):
    if(n==0 | n==1):
        return 0
    else:
        for i in range(2,n):
            if(n%i==0):
                flag=0
                break
            else:
                flag=1
        if flag==1:
            return 1
        else:
            return 0
        
a=int(input("Enter the Number"))
large=0
flag =0
for i in range(2,a+1):
    if(a%i==0):
        flag=prime(i)
        if flag==1:
            large=i
print("The largeest prime factor is :",large)






