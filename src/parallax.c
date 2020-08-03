/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Parallax functions for my_runner
*/

#include "my_runner.h"

void get_obj_pos(game_structure *ab) {
    ab->parallax.log_1 = sfSprite_getPosition(ab->sprites.log_1);
    ab->parallax.log_2 = sfSprite_getPosition(ab->sprites.log_2);
    ab->parallax.rock_1 = sfSprite_getPosition(ab->sprites.rock_1);
    ab->parallax.rock_2 = sfSprite_getPosition(ab->sprites.rock_2);
    ab->parallax.cactus_1 = sfSprite_getPosition(ab->sprites.cactus_1);
    ab->parallax.cactus_2 = sfSprite_getPosition(ab->sprites.cactus_2);
    ab->parallax.victory = sfSprite_getPosition(ab->sprites.victory);
}

void move_parallax_sprites(game_structure *ab)
{
    sfSprite_move(ab->sprites.bg_sp1, ab->parallax.bg1);
    sfSprite_move(ab->sprites.bg_sp2, ab->parallax.bg2);
    sfSprite_move(ab->sprites.bg_sp3, ab->parallax.bg3);
    sfSprite_move(ab->sprites.bg_sp4, ab->parallax.bg4);
    sfSprite_move(ab->sprites.bg_sp5, ab->parallax.bg5);
    sfSprite_move(ab->sprites.bg_sp6, ab->parallax.bg6);
    sfSprite_move(ab->sprites.bg_sp1_2, ab->parallax.bg1);
    sfSprite_move(ab->sprites.bg_sp2_2, ab->parallax.bg2);
    sfSprite_move(ab->sprites.bg_sp3_2, ab->parallax.bg3);
    sfSprite_move(ab->sprites.bg_sp4_2, ab->parallax.bg4);
    sfSprite_move(ab->sprites.bg_sp5_2, ab->parallax.bg5);
    sfSprite_move(ab->sprites.bg_sp6_2, ab->parallax.bg6);
    sfSprite_move(ab->sprites.log_1, ab->parallax.bg6);
    sfSprite_move(ab->sprites.log_2, ab->parallax.bg6);
    sfSprite_move(ab->sprites.rock_1, ab->parallax.bg6);
    sfSprite_move(ab->sprites.rock_2, ab->parallax.bg6);
    sfSprite_move(ab->sprites.cactus_1, ab->parallax.bg6);
    sfSprite_move(ab->sprites.cactus_2, ab->parallax.bg6);
    sfSprite_move(ab->sprites.victory, ab->parallax.bg6);
}

void get_sprite_pos(game_structure *ab)
{
    ab->parallax.sp1 = sfSprite_getPosition(ab->sprites.bg_sp1);
    ab->parallax.sp1_2 = sfSprite_getPosition(ab->sprites.bg_sp1_2);
    ab->parallax.sp2 = sfSprite_getPosition(ab->sprites.bg_sp2);
    ab->parallax.sp2_2 = sfSprite_getPosition(ab->sprites.bg_sp2_2);
    ab->parallax.sp3 = sfSprite_getPosition(ab->sprites.bg_sp3);
    ab->parallax.sp3_2 = sfSprite_getPosition(ab->sprites.bg_sp3_2);
    ab->parallax.sp4 = sfSprite_getPosition(ab->sprites.bg_sp4);
    ab->parallax.sp4_2 = sfSprite_getPosition(ab->sprites.bg_sp4_2);
    ab->parallax.sp5 = sfSprite_getPosition(ab->sprites.bg_sp5);
    ab->parallax.sp5_2 = sfSprite_getPosition(ab->sprites.bg_sp5_2);
    ab->parallax.sp6 = sfSprite_getPosition(ab->sprites.bg_sp6);
    ab->parallax.sp6_2 = sfSprite_getPosition(ab->sprites.bg_sp6_2);
    ab->jump.pl_pos = sfSprite_getPosition(ab->sprites.player_sp);
    get_obj_pos(ab);
}