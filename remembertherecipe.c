#include<stdio.h>
#include<string.h>

typedef int LL;

#define si(t) scanf("%d",&t)
#define sc(t) scanf("%s",t)
#define loop(i,n) for(i=0;i<n;i++)
#define loopi(i,n) for(i=n-1;i>=0;i--)
#define p(s) printf("%s\n",s)

void quickSort(LL[], LL[], LL , LL );

int main()
{
    LL n,i,q,j;

    si(n);
    char s[1001][1001];
    char qs[1001][1001];
    LL temp[1000],v[1000];
    loop(i,n)
    {
        sc(s[i]);
        si(v[i]);
        temp[i]=i;
    }
    quickSort(v,temp,0,n-1);

    LL found;
    si(q);
    loop(i,q)
    {
        found=0;         
        sc(qs[i]);
        LL len = strlen(qs[i]);
        loopi(j,n)
        {
            if(strncmp(s[temp[j]],qs[i],len)==0)
            {
                p(s[temp[j]]);
                found=1;
                break;
            }
        }
        if(found==0)
            p("NO");
    }

    return 0;
}

void quickSort(LL a[], LL b[], LL lo, LL hi)
{
    LL i, j, pivot,temp,temp1;
    if(lo == hi) return; 
    i=lo; 
    j=hi;
    pivot= a[(lo+hi)/2]; 
    /* Split the array into two parts */
    do {    
        while (a[i] < pivot) i++; 
        while (a[j] > pivot) j--;
        if (i<=j) { //without the = in there, it's an endless loop
            temp= a[i];
            a[i]= a[j];
            a[j]=temp;
            temp1= b[i];
            b[i]= b[j];
            b[j]=temp1;    
            i++;
            j--;
        }
    }while (i<=j);

    if (lo < j) quickSort(a, b, lo, j);
    if (i < hi) quickSort(a, b, i, hi);
} 
