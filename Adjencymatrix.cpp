#include<bits\stdc++.h>
using namespace std;

const int N = 1e3+10;
int adj[N][N];

int main()
{

    int node,edge;
    printf("Enter the number of node: ");
    scanf("%d",&node);
    printf("Enter the number of Edge: ");
    scanf("%d",&edge);
    int node1,node2;
    for(int i=1; i<=edge; i++)
    {
        scanf("%d %d",&node1,&node2);
        adj[node1][node2]=1;
        adj[node2][node1]=1;

    }

    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            printf("%d\t",adj[i][j]);

        }
        printf("\n");
    }

     return 0;
}
