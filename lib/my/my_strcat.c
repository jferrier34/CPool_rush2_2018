/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** Task02
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
	i++;
    }
    while (src[j] != '\0') {
	dest[i] = src[j];
	    i++;
	j++;
    }
    return (1);
}
