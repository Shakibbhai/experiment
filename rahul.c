
    #include<stdio.h>

    int a(int n)
    {if(n<=0)
    return 0;
    else
    return n-a(b(n-1));
    }

    int b(int n)
    {if(n<=0)
    return 0;
    else
    return n-b(a(n-1));
    }
    int main()
    {
    int n=4;
    printf("%d",a(n));
    return 0;
    }
