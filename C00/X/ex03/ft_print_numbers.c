#include <unistd.h>

void ft_print_numbers(void)
{
    char inicio;
    inicio = '0';

    while(inicio<='9')
    {
        write(1, &inicio, 1);
        inicio++;
    }
}

int main()
{
    ft_print_numbers();
    return 0;
}