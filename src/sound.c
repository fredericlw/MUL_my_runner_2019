/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Sound functions for my_runner
*/

#include "my_runner.h"

void create_soundbuffer(game_structure *ab)
{
    ab->buffer.music_bf = sfSoundBuffer_createFromFile("textures/music.wav");
    ab->sound.music = sfMusic_createFromFile("textures/music.wav");
    ab->buffer.jump_bf = sfSoundBuffer_createFromFile("textures/jump.wav");
}

void create_sound(game_structure *ab)
{
    ab->sound.music_sd = sfSound_create();
    ab->sound.jump_sd = sfSound_create();
}

void set_sound_to_soundbuffer(game_structure *ab)
{
    sfSound_setBuffer(ab->sound.music_sd, ab->buffer.music_bf);
    sfSound_setBuffer(ab->sound.jump_sd, ab->buffer.jump_bf);
}

void setup_sound(game_structure *ab)
{
    create_soundbuffer(ab);
    create_sound(ab);
    set_sound_to_soundbuffer(ab);
}