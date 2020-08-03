/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Map functions for my_runner
*/

#include "my_runner.h"

int check_file(char *filepath)
{
    int fd;

    fd = open(filepath, O_RDONLY);
    close(fd);
    if (fd == -1)
        return (84);
}

char *get_map(char **av)
{
    int buff_size = get_buff_size(av[1]);
    int fd;
    char *buffer;

    buffer = malloc(sizeof(char) * buff_size);
    fd = open(av[1], O_RDONLY);
    read(fd, buffer, buff_size);
    close(fd);
    return (buffer);
}

int check_map_objects(char *map)
{
    int L = 0;
    int R = 0;
    int C = 0;
    int V = 0;
    int i = 0;

    for (i = 0; map[i] != '\0'; i++) {
        if (map[i] == 'L')
            L++;
        if (map[i] == 'R')
            R++;
        if (map[i] == 'C')
            C++;
        if (map[i] == 'V')
            V++;
    }
    if (L == 0 || R == 0 || C == 0 || V == 0)
        return (84);
    return (0);
}

int check_map_content(char *map)
{
    int i = 0;

    for (i = 0; map[i] != '\0'; i++) {
        if (map[i] != 'L' && map[i] != 'R' && map[i] != 'C' && map[i] != 'V'
        && map[i] != ' ' && map[i] != '\0')
            return (84);
    }
    return (check_map_objects(map));
}