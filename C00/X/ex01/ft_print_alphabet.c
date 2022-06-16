#include <unistd.h>

void ft_print_alphabet(void)
{
    char inicio;
    inicio = 'a';
    
    while (inicio <= 122)
    {
        write(1, &inicio, 1);
        ++inicio;
    }
    
}

int main()
{
    ft_print_alphabet();
    return (0);
}