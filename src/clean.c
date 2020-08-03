/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Destroy functions for my_runner
*/

#include "my_runner.h"

void destroy_soundbuffer(game_structure *ab)
{
    sfSoundBuffer_destroy(ab->buffer.music_bf);
    sfSoundBuffer_destroy(ab->buffer.jump_bf);
}

void destroy_sound(game_structure *ab)
{
    sfSound_destroy(ab->sound.music_sd);
    sfSound_destroy(ab->sound.jump_sd);
    sfMusic_destroy(ab->sound.music);
}

void destroy_sprite(game_structure *ab)
{
    sfSprite_destroy(ab->sprites.bg_sp0);
    sfSprite_destroy(ab->sprites.bg_sp1);
    sfSprite_destroy(ab->sprites.bg_sp1_2);
    sfSprite_destroy(ab->sprites.bg_sp2);
    sfSprite_destroy(ab->sprites.bg_sp2_2);
    sfSprite_destroy(ab->sprites.bg_sp3);
    sfSprite_destroy(ab->sprites.bg_sp3_2);
    sfSprite_destroy(ab->sprites.bg_sp4);
    sfSprite_destroy(ab->sprites.bg_sp4_2);
    sfSprite_destroy(ab->sprites.bg_sp5);
    sfSprite_destroy(ab->sprites.bg_sp5_2);
    sfSprite_destroy(ab->sprites.bg_sp6);
    sfSprite_destroy(ab->sprites.bg_sp6_2);
    sfSprite_destroy(ab->sprites.player_sp);
}

void destroy_texture(game_structure *ab)
{
    sfTexture_destroy(ab->textures.bg_0);
    sfTexture_destroy(ab->textures.bg_1);
    sfTexture_destroy(ab->textures.bg_2);
    sfTexture_destroy(ab->textures.bg_3);
    sfTexture_destroy(ab->textures.bg_4);
    sfTexture_destroy(ab->textures.bg_5);
    sfTexture_destroy(ab->textures.bg_6);
    sfTexture_destroy(ab->textures.player);
}

void clean(game_structure *ab)
{
    destroy_texture(ab);
    destroy_sprite(ab);
    destroy_soundbuffer(ab);
    destroy_sound(ab);
    sfClock_destroy(ab->animate.clock);
    sfRenderWindow_destroy(ab->window);
}