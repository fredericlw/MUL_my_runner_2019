/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Main function for my_runner
*/

#include "my_runner.h"

int main(int ac, char **av)
{
    game_structure ab;

    if (ac < 2 || ac > 2)
        return (84);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
            display_help();
            return (0);
    }
    if (ac == 2 && av[1][0] != '-') {
        if (check_file(av[1]) == 84)
            return (84);
        game_setup(&ab, av);
        return (0);
    }
    return (84);
}