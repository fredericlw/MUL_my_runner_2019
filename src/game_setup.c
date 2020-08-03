/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Game setup functions
*/

#include "my_runner.h"

void set_obj_values(game_structure *ab)
{
    ab->game_values.log = 1;
    ab->game_values.rock = 1;
    ab->game_values.cactus = 1;
    ab->game_values.victory = 1;
    ab->game_values.menu = 1;
}

void set_obj_init_pos(game_structure *ab)
{
    ab->parallax.victory.y = 430;
    ab->parallax.cactus_1.y = 670;
    ab->parallax.cactus_2.y = 670;
    ab->parallax.log_1.y = 735;
    ab->parallax.log_2.y = 735;
    ab->parallax.rock_1.y = 716;
    ab->parallax.rock_2.y = 716;
}

void game_setup(game_structure *ab, char **av)
{
    char *map = get_map(av);

    if (check_map_content(map) != 84) {
        set_sizes(ab);
        set_sprite(ab);
        set_obj_values(ab);
        set_obj_init_pos(ab);
        set_obj(ab, map);
        setup_score(ab);
        display_in_window(ab);
        clean(ab);
    }
}