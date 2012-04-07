#include<iostream>
#include<stdio.h>

using namespace std;

#define MAX 101
#define LMAX 100

int q[ MAX ], front = -1, rear = -1, a[MAX][MAX], vis[ MAX ], yes[MAX][MAX];

int remove();

void add ( int item );

void bfs( int s, int n );

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        front=-1;
        rear=-1;
        int n,m;
        scanf("%d",&n);
        scanf("%d",&m);

        for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){a[i][j]=0;yes[i][j]=0;}}
        for (int i = 1;i <= n;i++ ){        vis[ i ] = 0;  q[i]=0;     }

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
            for (int j = 1;j <= n;j++ ){        vis[ j ] = 0;  q[j]=0;     }
            front=-1; rear=-1;
            bfs(i,n);
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

void bfs( int s, int n )
{
    int p, i;

    add
        ( s );

    vis[ s ] = 1;

    p = remove();

    if ( p != 0 ){
        yes[s][p]=1;
        yes[p][s]=1;
    }

    while ( p != 0 )
    {
        for ( i = 1;i <= n;i++ )
            if ( ( a[ p ][ i ] != 0 ) && ( vis[ i ] == 0 ) )
            {
                add
                    ( i );

                vis[ i ] = 1;
                yes[s][i]=1;
                yes[i][s]=1;
                yes[p][i]=1;
                yes[i][p]=1;
            }

        p = remove();

    }

    for ( i = 1;i <= n;i++ )
        if ( vis[ i ] == 0 )
            bfs( i, n );
}

void add( int item )
{
    if ( rear == LMAX )
        printf( "QUEUE FULL item=%d\n",item );
    else
    {
        if ( rear == -1 )
        {
            q[ ++rear ] = item;
            front++;
        }
        else
            q[ ++rear ] = item;
    }
}

int remove()
{
    int k;

    if ( ( front > rear ) || ( front == -1 ) )
        return ( 0 );
    else
    {
        k = q[ front++ ];
        return ( k );
    }
}
