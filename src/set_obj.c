/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Set obj pos functions
*/

#include "my_runner.h"

void set_log(game_structure *ab)
{
    int value = ab->game_values.log;

    if (value == 1) {
        ab->parallax.log_1.x = ab->game_values.pos;
        ab->game_values.pos = ab->game_values.pos + 272;
        sfSprite_setPosition(ab->sprites.log_1, ab->parallax.log_1);
        ab->game_values.log = ab->game_values.log + 1;
    }
    if (value == 2) {
        ab->parallax.log_2.x = ab->game_values.pos;
        ab->game_values.pos = ab->game_values.pos + 272;
        sfSprite_setPosition(ab->sprites.log_2, ab->parallax.log_2);
        ab->game_values.log = ab->game_values.log + 1;
    }
}

void set_rock(game_structure *ab)
{
    int value = ab->game_values.rock;

    if (value == 1) {
        ab->parallax.rock_1.x = ab->game_values.pos;
        ab->game_values.pos = ab->game_values.pos + 102;
        sfSprite_setPosition(ab->sprites.rock_1, ab->parallax.rock_1);
        ab->game_values.rock = ab->game_values.rock + 1;
    }
    if (value == 2) {
        ab->parallax.rock_2.x = ab->game_values.pos;
        ab->game_values.pos = ab->game_values.pos + 102;
        sfSprite_setPosition(ab->sprites.rock_2, ab->parallax.rock_2);
        ab->game_values.rock = ab->game_values.rock + 1;
    }
}

void set_cactus(game_structure *ab)
{
    int value = ab->game_values.cactus;

    if (value == 1) {
        ab->parallax.cactus_1.x = ab->game_values.pos;
        ab->game_values.pos = ab->game_values.pos + 74;
        sfSprite_setPosition(ab->sprites.cactus_1, ab->parallax.cactus_1);
        ab->game_values.cactus = ab->game_values.cactus + 1;
    }
    if (value == 2) {
        ab->parallax.cactus_2.x = ab->game_values.pos;
        ab->game_values.pos = ab->game_values.pos + 74;
        sfSprite_setPosition(ab->sprites.cactus_2, ab->parallax.cactus_2);
        ab->game_values.cactus = ab->game_values.cactus + 1;
    }
}

void set_victory(game_structure *ab)
{
    int value = ab->game_values.victory;

    if (value == 1) {
        ab->parallax.victory.x = ab->game_values.pos;
        ab->game_values.pos = ab->game_values.pos + 74;
        sfSprite_setPosition(ab->sprites.victory, ab->parallax.victory);
        ab->game_values.victory = ab->game_values.victory + 1;
    }
}

void set_obj(game_structure *ab, char *map)
{
    int i = 0;

    for (i; map[i] != '\0'; i++) {
        if (map[i] == 'L')
            set_log(ab);
        if (map[i] == 'R')
            set_rock(ab);
        if (map[i] == 'C')
            set_cactus(ab);
        if (map[i] == 'V')
            set_victory(ab);
        if (map[i] == ' ')
            ab->game_values.pos = ab->game_values.pos + 250;
    }
}