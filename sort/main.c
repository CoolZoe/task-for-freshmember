#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct
    {
        int r[10];
        int length;
    }List;
    void Insert(List &L)
    {
        for(i = 1; i < L.length; ++i)
        {
            int t;
            if(L.r[i] < L.r[i - 1])
            {
                t = L.r[i];
                L.r[i] = L.r[i - 1];
                for(j = i - 1; t < L.r[j]; --j)
                {
                    L.r[j+1] = L.r[j];
                }
                L.r[j+1] = t;
            }
        }
    }//≤Â»Î≈≈–Ú
    void Heap(List &H)
    {
        int i = H.length/2;
        int j = H.length;
        intt;
        while(i>0)
        {
            Adjust(H, i, H.length)
            i--;
        }
        while(j > 1)
        {
            t = H.r[1];
            H.r[1] = H.r[j];
            H.r[j] = t;
            Adjust(H, 1, i-1);
            j--;
        }
    }
    void Adjust(List &H, int s, int m)
    {
        int rc = H.r[s];
        int i;
        for(i = 2*s; i <= m; i *= 2)
        {
            if(i < m && H.r[i] < H.r[i+1])
            ++i;
            if(rc > H.r[i])
            break;
            H.r[s] = H.r[i];
            s = i;
        }
        H.r[s] = rc;
    }//∂—≈≈–Ú
    void Merge(int f[], int &a[], int i, int m, int n)
    {
        int j, k;
        for(j = m + 1, k = i; i <= m && j <= n; ++k)
        {
            if(f[i] <= f[j])
            a[k] = f[i++];
            else
            a[k] = f[j++];
        }
        if (i <= m)
        a[k..n] = f[i..m];
        if (j <= n)
        a[k..n] = f[j..n];
    }
    void Sort(int f[], int &a[], int s, int t)
    {
        int m = (s + t)/2;
        Sort(f, a, s, m);
        Sort(f, a, m+1, t);
    }
    Sort(L.r, L.r, i, L.length);
    //πÈ≤¢≈≈–Ú
    int quick(List &L, int low, int high)
    {
        int shaft;
        L.r[0] = L.r[low];
        shaft = L.r[low];
        while(low < high)
        {
            while(low < high && L.r[high] >= shaft) --high;
            L.r[low] = L.r[high];
            while(low < high && L.r[low] <= shaft) ++low;
            L.r[high] = L.r[low];
        }
        L.r[low] = L.r[0];
        return low;
    }//øÏÀŸ≈≈–Ú
}
