#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct point
    {
        int data;
        struct point *p;
    }AdjMatrix[10][10];
    typedef struct graph
    {
        int vex[10];
        AdjMatrix arcs;
        int vexnum, arcnum;
    }Graph;

    Status matrix(Graph &G)
    {
        int i, j, k;
        for(i = 0; i < G.vexnum; i++)
            scanf(&G.vex[i]);
        for(i = 0; i < G.vexnum; i++)
        {
            for(j = 0; j < G.vexnum; j++)
            G.arcs[i][j] = {∞, NULL};
        }
        for (k = 0; k < G.arcnum; k++)
        {
            scanf(&v1, &v2, &w);
            i = LocateVex(G, v1);
            j = LocateVex(G, v2);
            G.ars[i][j].adj = w;
            if(IncInfo)
            Input(*G.arcs[i][j].p);
            G.arcs[j][i] = G.arcs[i][j];
        }
    }//邻接矩阵表示无向图
    typedef struct arcbox
    {
        int tailvex, headvex;
        struct arcbox *hlink, *tlink;
        InfoType *info;
    }arcbox;
    typedef struct Node
    {
        int data;
        arcbox *fistin, *firstout;
    }Node;
    typedef struct
    {
        Node list[20];
        int vexnum, arcnum;
    }Graph;
    Status list(Graph &G)
    {
        int i, j, k;
        for(i = 0; i < G.vexnum; i++)
        {
            scanf(&G.list[i].data);
            &G.list[i].firstin = NULL;
            G.list[i].firstout = NULL;
        }
        for(k = 0; k < G.arcnum; ++k)
        {
            scanf(&v1, &v2);
            i = LocateVex(G, v1);
            j = LocateVex(G, v2);
            p = (arcbox *)malloc(sizeof(arcbox));
            *p = {i, j, G.list[j].firstin, G.list[i].firstout, NULL};
            G.list[j].firstin = G.list[i].firstout = p;
        }
    }//十字链表表示图
    return 0;
}
