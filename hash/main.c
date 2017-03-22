#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hash[5]={1, 27, 32, 53, 64};
    typedef struct
    {
        int *address;
        int num;
        int size;
    }Hashtable;
    Status Search(Hashtable H, int K, int &p, int &c)
    //KÎª²éÕÒÔªËØ
    {
        p = Hash(K);
        if(K == H.address[p])
        return 1;
        else if(!H.address[p])
        return -1;
        else
        {
            collision(p, ++c);
            return -1;
        }

    }
    Status Insert(Hashtable &H, int e)
    {
        c = 0;
        if (Search(H, e, p, c))
        return -1;
        else
        {
            H.address[p] = e;
            ++H.num;
            return OK;
        }
    }

    return 0;
}
