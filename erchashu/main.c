#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct BiTNode
{
    int data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;
Status CreateBiTree(BiTree &T)
{
    scanf(&ch);
    if (ch == ' ')
    T = Null;
    else
    {
        T->data = ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
}//����һ��������
Status PreOrderTraverse(BiTree T)
{
    if(T->data)
    {
        printf(T->data);
        if(PreOrderTraverse(T->lchild))
          if(PreOrderTraverse(T->rchild))
        return OK;
    }

    }
    else return OK;
}//���������������
Status InOrderTraverse(BiTree)
{
    InitStack(S);
    Push(S, T);
    while(!StackEmpty)
    {
        while(GetTop(S, p) && p)
        {
            Push(S, p->lchild);
            printf(p->data);
        }
        Pop(S, p);
        if(!p->data)
        return ERROR;
        Push(S, p->rchild);
        printf(p->data);
    }
    return OK;
}//���������������

    return 0;
}
