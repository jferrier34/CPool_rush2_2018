/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** 
*/

int my_put_nbr(int nb)
{
    long int chiffre;
    int check;

    chiffre = nb;
    check = negatif(chiffre);
    if(check == 1)
	chiffre = -chiffre;
    if(chiffre >= 10) {
        my_put_chiffre(chiffre/10);
    }
    chiffre = chiffre % 10 + 48;
    my_putchar(chiffre);
    return (0);
}
