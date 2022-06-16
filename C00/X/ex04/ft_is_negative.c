#include <unistd.h>

void ft_is_negative(int n)
{
     if(n >= 0)
    {
        write(1, "P\n", 2);
    }

    else
    {
        write(1,"N\n", 2);
    }
}

int main()
{
    int r;
    r = 288;
    ft_is_negative(r);
    return(0);
}