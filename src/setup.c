/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Setup functions for my_runner
*/

#include "my_runner.h"

void set_sprite(game_structure *ab)
{
    setup_textures(ab);
    setup_sound(ab);
}

void set_sizes(game_structure *ab)
{
    ab->game_values.pause = 0;
    ab->game_values.pos = 1500;
    ab->game_values.pl.x = 100;
    ab->game_values.pl.y = 560;
    ab->game_values.scale.x = 2;
    ab->game_values.scale.y = 2;
    ab->score.sc_value = 0;
    ab->vm.width = window_width;
    ab->vm.height = window_height;
    ab->vm.bitsPerPixel = 32;
    ab->rect.top = 0;
    ab->rect.left = 0;
    ab->rect.width = player_size;
    ab->rect.height = player_size;
    ab->window = sfRenderWindow_create(ab->vm, "runner", sfFullscreen, NULL);
    sfRenderWindow_setVerticalSyncEnabled(ab->window, sfTrue);
    sfRenderWindow_setFramerateLimit(ab->window, 60);
    set_speed_values(ab);
    set_parallax_values(ab);
}

void set_speed_values(game_structure *ab)
{
    ab->parallax.bg1.x = -1;
    ab->parallax.bg2.x = -2;
    ab->parallax.bg3.x = -3;
    ab->parallax.bg4.x = -4;
    ab->parallax.bg5.x = -5;
    ab->parallax.bg6.x = -6;
    ab->parallax.bg1.y = 0;
    ab->parallax.bg2.y = 0;
    ab->parallax.bg3.y = 0;
    ab->parallax.bg4.y = 0;
    ab->parallax.bg5.y = 0;
    ab->parallax.bg6.y = 0;
    ab->jump.up.x = 0;
    ab->jump.up.y = -175;
    ab->jump.down.x = 0;
    ab->jump.down.y = 4;
}

void set_parallax_values(game_structure *ab)
{
    ab->parallax.sp.x = 3840;
    ab->parallax.sp.y = 0;
    ab->parallax.bg1_2.x = 3840;
    ab->parallax.bg2_2.x = 3840;
    ab->parallax.bg3_2.x = 3840;
    ab->parallax.bg4_2.x = 3840;
    ab->parallax.bg5_2.x = 3840;
    ab->parallax.bg6_2.x = 3840;
    ab->parallax.bg1_2.y = 0;
    ab->parallax.bg2_2.y = 0;
    ab->parallax.bg3_2.y = 0;
    ab->parallax.bg4_2.y = 0;
    ab->parallax.bg5_2.y = 0;
    ab->parallax.bg6_2.y = 0;
}

void set_second_sprite_pos(game_structure *ab)
{
    sfSprite_setPosition(ab->sprites.bg_sp1_2, ab->parallax.bg1_2);
    sfSprite_setPosition(ab->sprites.bg_sp2_2, ab->parallax.bg2_2);
    sfSprite_setPosition(ab->sprites.bg_sp3_2, ab->parallax.bg3_2);
    sfSprite_setPosition(ab->sprites.bg_sp4_2, ab->parallax.bg4_2);
    sfSprite_setPosition(ab->sprites.bg_sp5_2, ab->parallax.bg5_2);
    sfSprite_setPosition(ab->sprites.bg_sp6_2, ab->parallax.bg6_2);
    sfSprite_setPosition(ab->sprites.player_sp, ab->game_values.pl);
}