/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** display_end
*/

#include "my_runner.h"

void end_events(game_structure *ab)
{
    while (sfRenderWindow_pollEvent(ab->window, &ab->event)){
        if (ab->event.type == sfEvtClosed) {
            sfRenderWindow_close(ab->window);
        }
        if (ab->event.type == sfEvtKeyPressed) {
            if (sfKeyboard_isKeyPressed(sfKeyEscape))
                sfRenderWindow_close(ab->window);
        }
    }
}

void display_win(game_structure *ab)
{
    if (ab->game_values.menu == 3) {
        score_end(ab);
        sfRenderWindow_drawSprite(ab->window, ab->sprites.win_sp, NULL);
        sfRenderWindow_drawText(ab->window, ab->score.text, NULL);
        sfRenderWindow_display(ab->window);
    }
}

void display_loose(game_structure *ab)
{
    if (ab->game_values.menu == 2) {
        score_end(ab);
        sfRenderWindow_drawSprite(ab->window, ab->sprites.loose_sp, NULL);
        sfRenderWindow_drawText(ab->window, ab->score.text, NULL);
        sfRenderWindow_display(ab->window);
    }
}