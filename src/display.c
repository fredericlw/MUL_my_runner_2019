/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Display functions for my_runner
*/

#include "my_runner.h"

void draw_objects(game_structure *ab)
{
    sfRenderWindow_drawSprite(ab->window, ab->sprites.cactus_1, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.cactus_2, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.log_1, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.log_2, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.rock_1, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.rock_2, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.victory, NULL);
}

void draw_sp(game_structure *ab)
{
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp0, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp1, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp1_2, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp2, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp2_2, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp3, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp3_2, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp4, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp4_2, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp5, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp5_2, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp6, NULL);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.bg_sp6_2, NULL);
    draw_objects(ab);
    sfRenderWindow_drawSprite(ab->window, ab->sprites.player_sp, NULL);
    sfRenderWindow_drawText(ab->window, ab->score.text, NULL);
}

void display_in_window(game_structure *ab)
{
    ab->animate.clock = sfClock_create();
    ab->score.sc_time = sfClock_create();
    sfMusic_setLoop(ab->sound.music, sfTrue);
    sfMusic_play(ab->sound.music);
    while (sfRenderWindow_isOpen(ab->window)){
        if (ab->game_values.menu == 1) {
            analyse_events(ab);
            display_game(ab);
        }
        else if (ab->game_values.menu == 2) {
            end_events(ab);
            display_loose(ab);
        }
        else {
            end_events(ab);
            display_win(ab);
        }
    }
}