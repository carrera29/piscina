#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char inicio;
    inicio = 'z';

    while (inicio>='a')
   {
        write(1, &inicio, 1);
        inicio--;
    }
}
int main()
{
    ft_print_reverse_alphabet();
    return 0;
}