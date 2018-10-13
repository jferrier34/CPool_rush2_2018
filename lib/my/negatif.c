/*
** EPITECH PROJECT, 2018
** negatif.c
** File description:
** 
*/

int negatif(int chiffre)
{
    if(chiffre < 0) {
        my_putchar('-');
        return (1);
    }
    else
        return (0);
}
