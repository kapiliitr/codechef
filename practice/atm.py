a=raw_input().split()
if int(a[0])%5!=0:
    print a[1]
elif (float(a[0])+0.5)>float(a[1]):
    print a[1]
else :
     a[1]=float(a[1])-float(a[0])-0.5
     print '%.2f' % a[1] 
