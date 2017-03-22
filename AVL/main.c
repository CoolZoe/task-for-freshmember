#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct Node
    {
        int data;
        int bf;
        struct Node *lchild, *rchild;
    }Node, *Tree;
    void Right(Tree &p)
    //*p为根节点
    {
        q = p->lchild;
        p->lchild = q->rchild;
        q->rchild = p;
        p = q;
    }//右旋
    void Left(Tree &p)
    {
        q = p->rchild;
        p->rchild = q->lchild;
        q->lchild = p;
        p = q;
    }//左旋
    Status Insert(Tree &T, int e, int flag)
    {
        if(!T)
        {
            T = (Tree)malloc(sizeof(Node));
            T->data = e;
            T->lchild = NULL;
            T->rchild = NULL;
            flag = 1;
        }
        else
        {
            if(e == T->data)
            {
                flag = 0;
                return 0;
            }
            else if(e < T->data)
            {
                if(!Insert(T-lchild, e, flag))
                return 0;
                else if(flag = 1;)
                {
                    switch(T->bf)
                    case 1
                      Left(T);
                      flag = 0;
                      break;
                    case 0
                      T->bf = 1;
                      flag = 1;
                      break;
                    case -1
                      T->bf = 0;
                      flag = 0;
                      break;
                }
            }
            else
            {
                if(!Insert(T->rchild, e, flag))
                return 0;
                if(flag)
                  switch(T->bf)
                    case 1
                      T->bf = 0;
                      flag = 0;
                      break;
                    case 0
                      T->bf = -1;
                      flag = 1;
                      break;
                    case -1
                      Right(T);
                      flag 0;
                      break;
            }
        }
    }

    return 0;
}
