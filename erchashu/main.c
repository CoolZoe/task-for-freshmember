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
}//建立一个二叉树
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
}//二叉树的先序遍历
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
}//二叉树的中序遍历

    return 0;
}
