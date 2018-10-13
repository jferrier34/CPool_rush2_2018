/*
** EPITECH PROJECT, 2018
** my_put_chiffre.c
** File description:
** 
*/

int my_put_chiffre(long int chiffre)
{
    if(chiffre >= 10) {
        my_putchar(chiffre/10);
    }
    chiffre = chiffre % 10 + 48;
    my_putchar(chiffre);
    return (0);
}
