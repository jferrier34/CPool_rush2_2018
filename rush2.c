/*
** EPITECH PROJECT, 2018
** test.c
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

float percent(int nb_letter, int nb_char)
{
    float result;

    result = nb_letter * 100.00 / nb_char;
    return (result);
}

int my_put_nbr(int nb)
{
    int modulo;
    if (nb < 0) {
	my_putchar('-');
	nb = nb * (-1);
    }
    if (nb >= 10) {
	modulo = (nb % 10);
	nb = (nb - modulo) / 10;
	my_put_nbr(nb);
	my_putchar(48 + modulo);
    }
    else {
	my_putchar(48 + nb % 10);
    }
}

void rush2(int argc, char **argv)
{
    int i = 0;
    int nb_letter_search = 2;
    int nb_letter;
    int nb_char;

    while (nb_letter_search < argc) {
        nb_letter = 0;
	nb_char = 0;
        for (i = 0; argv[1][i] != '\0'; i = i + 1) {
            if (argv[1][i] == argv[nb_letter_search][0]
            || argv[1][i] == argv[nb_letter_search][0] + 32
            || argv[1][i] == argv[nb_letter_search][0] - 32) {
                nb_letter = nb_letter + 1;
            }
	    if (argv[1][i] > 64 && argv [1][i] < 91
             || argv[1][i] > 96 && argv[1][i] < 123) {
                nb_char = nb_char + 1;
	    }
        }
    my_putchar(argv[nb_letter_search][0]);
    my_putchar(':');
    my_put_nbr(nb_letter);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr(percent(nb_letter, nb_char));
    my_putchar('%');
    my_putchar(')');
    my_putchar('$');
    my_putchar('\n');
    nb_letter_search = nb_letter_search + 1;
    }
}

void main(int argc, char *argv[])
{
    rush2(argc, argv);
}

