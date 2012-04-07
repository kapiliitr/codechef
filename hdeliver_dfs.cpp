#include<iostream>
#include<stdio.h>

using namespace std;

#define MAX 101
#define LMAX 100

int top = -1, stack[MAX], yes[MAX][MAX], a[MAX][MAX], vis[ MAX ];

void dfs( int s, int n );

void push( int item );

int pop();

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        top=-1;
        int n,m;
        scanf("%d",&n);
        scanf("%d",&m);

        for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){a[i][j]=0;yes[i][j]=0;}}
        for (int i = 1;i <= n;i++ ){    stack[i]=0;  vis[i]=0;   }

        for(int i=0;i<m;i++)
        {
            int p,q;
            scanf("%d",&p);
            scanf("%d",&q);             
            a[p+1][q+1]=1;
            a[q+1][p+1]=1;
        }   

        for(int i = 1;i <= n; i++)
        {
            for (int j = 1;j <= n;j++ ){        stack[ j ] = 0;  vis[j]=0;   }
            top=-1;
            dfs(i,n);
        }

        int c;
        scanf("%d",&c);
        for(int i=0;i<c;i++)
        {
            int p,q,found=0;
            scanf("%d",&p);
            scanf("%d",&q);             
            if(yes[p+1][q+1]==1){found=1;}
            if(found==0)
            {
                printf("NO\n");
            }
            else {printf("YO\n");}
        }
    }

    return 0;
}

void dfs( int s, int n )
{
    int i, k;
    push( s );
    vis[ s ] = 1;
    k = pop();

    if ( k != 0 ){
        yes[s][k]=1;
        yes[k][s]=1;
    }

    while ( k != 0 )
    {
        for ( i = 1;i <= n;i++ )
            if ( ( a[ k ][ i ] != 0 ) && ( vis[ i ] == 0 ) )
            {
                push( i );
                vis[ i ] = 1;
                yes[s][i]=1;
                yes[i][s]=1;
                yes[k][i]=1;
                yes[i][k]=1;
            }

        k = pop();

    }

    for ( i = 1;i <= n;i++ )
        if ( vis[ i ] == 0 )
            dfs( i, n );
}

void push( int item )
{
    if ( top == LMAX )
        printf( "Stack overflow " );
    else
        stack[ ++top ] = item;
}

int pop()
{
    int k;

    if ( top == -1 )
        return ( 0 );
    else
    {
        k = stack[ top-- ];
        return ( k );
    }
}
