/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Animation functions for my_runner
*/

#include "my_runner.h"

void animate_player(game_structure *ab)
{
    ab->animate.time = sfClock_getElapsedTime(ab->animate.clock);
    ab->animate.seconds = ab->animate.time.microseconds / 1000000.0;
    if (ab->animate.seconds > 0.10){
        ab->rect.left += player_size;
        sfClock_restart(ab->animate.clock);
        if (ab->rect.left == 1024)
            (ab->rect.left = 0);
        sfSprite_setTextureRect(ab->sprites.player_sp, ab->rect);
    }
}