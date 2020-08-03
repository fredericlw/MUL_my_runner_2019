/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Sprite position checker functions
*/

#include "my_runner.h"

void check_first_pos(game_structure *ab)
{
    if (ab->parallax.sp1.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp1, ab->parallax.sp);
    if (ab->parallax.sp2.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp2, ab->parallax.sp);
    if (ab->parallax.sp3.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp3, ab->parallax.sp);
    if (ab->parallax.sp4.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp4, ab->parallax.sp);
    if (ab->parallax.sp5.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp5, ab->parallax.sp);
    if (ab->parallax.sp6.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp6, ab->parallax.sp);
}

void check_second_pos(game_structure *ab)
{
    if (ab->parallax.sp1_2.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp1_2, ab->parallax.sp);
    if (ab->parallax.sp2_2.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp2_2, ab->parallax.sp);
    if (ab->parallax.sp3_2.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp3_2, ab->parallax.sp);
    if (ab->parallax.sp4_2.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp4_2, ab->parallax.sp);
    if (ab->parallax.sp5_2.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp5_2, ab->parallax.sp);
    if (ab->parallax.sp6_2.x < -3840)
        sfSprite_setPosition(ab->sprites.bg_sp6_2, ab->parallax.sp);
}

void check_pos(game_structure *ab)
{
    check_first_pos(ab);
    check_second_pos(ab);
}