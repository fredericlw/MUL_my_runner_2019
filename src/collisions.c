/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** collisions
*/

#include "my_runner.h"

void check_log(game_structure *ab, sfVector2f player)
{
    if (player.y + 222 > ab->parallax.log_1.y &&
    player.x + 128 > ab->parallax.log_1.x) {
        if (player.x < (ab->parallax.log_1.x + 272)) {
            ab->game_values.menu = 2;
        }
    }
    if (player.y + 222 > ab->parallax.log_2.y &&
    player.x + 128 > ab->parallax.log_2.x) {
        if (player.x < (ab->parallax.log_2.x + 272)) {
            ab->game_values.menu = 2;
        }
    }
}

void check_rock(game_structure *ab, sfVector2f player)
{
    if (player.y + 230 > ab->parallax.rock_1.y &&
    player.x + 128 > ab->parallax.rock_1.x) {
        if (player.x < (ab->parallax.rock_1.x + 102)) {
            ab->game_values.menu = 2;
        }
    }
    if (player.y + 230 > ab->parallax.rock_2.y &&
    player.x + 128 > ab->parallax.rock_2.x) {
        if (player.x < (ab->parallax.rock_2.x + 102)) {
            ab->game_values.menu = 2;
        }
    }
}

void check_cactus(game_structure *ab, sfVector2f player)
{
    if (player.y + 220 > ab->parallax.cactus_1.y &&
    player.x + 128 > ab->parallax.cactus_1.x) {
        if (player.x < (ab->parallax.cactus_1.x + 60)) {
            ab->game_values.menu = 2;
        }
    }
    if (player.y + 220 > ab->parallax.cactus_2.y &&
    player.x + 128 > ab->parallax.cactus_2.x) {
        if (player.x < (ab->parallax.cactus_2.x + 60)) {
            ab->game_values.menu = 2;
        }
    }
}

void check_victory(game_structure *ab, sfVector2f player)
{
    if (player.x > ab->parallax.victory.x + 74) {
            ab->game_values.menu = 3;
    }
}

void check_collisions(game_structure *ab)
{
    sfVector2f player = sfSprite_getPosition(ab->sprites.player_sp);

    check_log(ab, player);
    check_rock(ab, player);
    check_cactus(ab, player);
    check_victory(ab, player);
}