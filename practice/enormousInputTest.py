def main():
    a=raw_input().split()
    x=int(a[0])
    y=int(a[1])
    c=0
    while x!=0:
        z=int(raw_input())
        if z%y==0:
            c=c+1
        x=x-1
    print c

if __name__=='__main__':
    main()
