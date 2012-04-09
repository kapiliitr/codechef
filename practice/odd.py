def main():
        f=0
        a=[1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912]
        t=int(raw_input())
        while t!=0:
            n=int(raw_input())
            for i in range(len(a)):
                if a[i]>n:
                    f=1
                    print a[i-1]
                    break
                else:
                    continue
            if f==0:
                print 536870912                                                                                                                                    t=t-1

if __name__=='__main__':
    main()
