#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
struct HeapSq
{
    ElemType* heap;
    int len;
    int MaxSize;
};

void InitHeap(struct HeapSq* HBT, int MS)
{
    if (MS <= 0)
    {
        printf("数组长度参数不合适，需重新给定！\n");
        exit(1);
    }
    HBT->heap = malloc(MS*sizeof(ElemType));
    if (!HBT->heap)
    {
        printf("用于动态分配的内存空间用完，退出运行！\n");
        exit(1);
    }
    HBT->MaxSize = MS;
    HBT->len = 0;
}


void ClearHeap(struct HeapSq* HBT)
{
    if (HBT->heap != NULL)
    {
        free(HBT->heap);
        HBT->len = 0;
        HBT->MaxSize = 0;
    }
}

void InsertHeap(struct HeapSq* HBT, ElemType x)
{
    int i;
    if (HBT->len == HBT->MaxSize)
    {
        ElemType *p;
        p = realloc(HBT->heap, 2*HBT->MaxSize*sizeof(ElemType));
        if (!p)
        {
            printf("存储空间用完！\n");
            exit(1);
        }
        printf("存储空间已扩展为原来的2倍！\n");
        HBT->heap = p;
        HBT->MaxSize = 2*HBT->MaxSize;
    }
    HBT->heap[HBT->len] = x;
    HBT->len++;
    i = HBT->len - 1;
    while (i != 0)
    {
        int j = (i - 1) / 2;
        if (x >= HBT->heap[j])
            break;
        HBT->heap[i] = HBT->heap[j];
        i = j;
    }
    HBT->heap[i] = x;
}
    return 0;
}
