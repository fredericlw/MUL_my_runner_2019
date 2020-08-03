/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Display functions for my_runner
*/

#include "my_runner.h"

void create_sprite(game_structure *ab)
{
    ab->sprites.bg_sp0 = sfSprite_create();
    ab->sprites.bg_sp1 = sfSprite_create();
    ab->sprites.bg_sp1_2 = sfSprite_create();
    ab->sprites.bg_sp2 = sfSprite_create();
    ab->sprites.bg_sp2_2 = sfSprite_create();
    ab->sprites.bg_sp3 = sfSprite_create();
    ab->sprites.bg_sp3_2 = sfSprite_create();
    ab->sprites.bg_sp4 = sfSprite_create();
    ab->sprites.bg_sp4_2 = sfSprite_create();
    ab->sprites.bg_sp5 = sfSprite_create();
    ab->sprites.bg_sp5_2 = sfSprite_create();
    ab->sprites.bg_sp6 = sfSprite_create();
    ab->sprites.bg_sp6_2 = sfSprite_create();
    ab->sprites.player_sp = sfSprite_create();
    ab->sprites.victory = sfSprite_create();
    ab->sprites.log_1 = sfSprite_create();
    ab->sprites.log_2 = sfSprite_create();
    ab->sprites.rock_1 = sfSprite_create();
    ab->sprites.rock_2 = sfSprite_create();
    ab->sprites.cactus_1 = sfSprite_create();
}

void create_texture(game_structure *ab)
{
    ab->textures.bg_0 = sfTexture_createFromFile("textures/0.png", NULL);
    ab->textures.bg_1 = sfTexture_createFromFile("textures/1.png", NULL);
    ab->textures.bg_2 = sfTexture_createFromFile("textures/2.png", NULL);
    ab->textures.bg_3 = sfTexture_createFromFile("textures/3.png", NULL);
    ab->textures.bg_4 = sfTexture_createFromFile("textures/4.png", NULL);
    ab->textures.bg_5 = sfTexture_createFromFile("textures/5.png", NULL);
    ab->textures.bg_6 = sfTexture_createFromFile("textures/6.png", NULL);
    ab->textures.player = sfTexture_createFromFile("textures/run.png", NULL);
    ab->textures.cactus = sfTexture_createFromFile("textures/plant.png", NULL);
    ab->textures.log = sfTexture_createFromFile("textures/log.png", NULL);
    ab->textures.rock = sfTexture_createFromFile("textures/rock.png", NULL);
    ab->textures.victory = sfTexture_createFromFile("textures/lamp.png", NULL);
    sfSprite_setTextureRect(ab->sprites.player_sp, ab->rect);
}

void set_texture_to_sprite(game_structure *ab)
{
    sfSprite_setTexture(ab->sprites.bg_sp0, ab->textures.bg_0, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp1, ab->textures.bg_1, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp1_2, ab->textures.bg_1, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp2, ab->textures.bg_2, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp2_2, ab->textures.bg_2, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp3, ab->textures.bg_3, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp3_2, ab->textures.bg_3, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp4, ab->textures.bg_4, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp4_2, ab->textures.bg_4, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp5, ab->textures.bg_5, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp5_2, ab->textures.bg_5, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp6, ab->textures.bg_6, sfTrue);
    sfSprite_setTexture(ab->sprites.bg_sp6_2, ab->textures.bg_6, sfTrue);
    sfSprite_setTexture(ab->sprites.player_sp, ab->textures.player, sfTrue);
    sfSprite_setTexture(ab->sprites.victory, ab->textures.victory, sfTrue);
    sfSprite_setTexture(ab->sprites.log_1, ab->textures.log, sfTrue);
    sfSprite_setTexture(ab->sprites.log_2, ab->textures.log, sfTrue);
    sfSprite_setTexture(ab->sprites.rock_1, ab->textures.rock, sfTrue);
    sfSprite_setTexture(ab->sprites.rock_2, ab->textures.rock, sfTrue);
    sfSprite_setTexture(ab->sprites.cactus_1, ab->textures.cactus, sfTrue);
}

void setup_textures(game_structure *ab)
{
    create_sprite(ab);
    ab->sprites.cactus_2 = sfSprite_create();
    ab->sprites.win_sp = sfSprite_create();
    ab->sprites.loose_sp = sfSprite_create();
    ab->textures.win_tx = sfTexture_createFromFile("textures/7.png", NULL);
    ab->textures.loose_tx = sfTexture_createFromFile("textures/8.png", NULL);
    sfSprite_setTexture(ab->sprites.win_sp, ab->textures.win_tx, sfTrue);
    sfSprite_setTexture(ab->sprites.loose_sp, ab->textures.loose_tx, sfTrue);
    create_texture(ab);
    set_texture_to_sprite(ab);
    sfSprite_setTexture(ab->sprites.cactus_2, ab->textures.cactus, sfTrue);
    set_second_sprite_pos(ab);
    sfSprite_setScale(ab->sprites.player_sp, ab->game_values.scale);
}