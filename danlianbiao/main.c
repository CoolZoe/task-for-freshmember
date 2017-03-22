#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;
void CreateList(LinkList &L, int n)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    for(i = n; i > 0; --i)
    {
        p = (LinkList)malloc(sizeof (LNode));
        scanf(&p->data);
        p->next = L->next;
        L->next = p;
    }
}//�½�һ������
Status LinkInsert(LinkList &L, int i; int e)
{
    p = L;
    j = 0;
    while (p && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i - 1)
    {
        s = (LinkList)malloc(sizeof(LNode));
    }
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}//�ڵ�i��Ԫ��λ�ò���e
Status GetElem(LinkList L, int i, int &e)
{
    p = L;
    j = 0;
    while (p && j < i - 1)
    {
        p = p->Next;
        j++;
    }
    if (!p || j > i - 1)
    return ERROR;
    e = p->data;
    return OK;
}//���Ҳ���i��Ԫ�ص�ֵ
Status ListDelete(LinkList &L, int i, int e)
{
    p = L;
    j = 0;
    while (p && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i - 1)
    return ERROR;
    q = p->next;
    p->next = q->next;
    e = q->data;
    free(q);
    return OK;
}

    return 0;
}
