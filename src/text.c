/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** Text functions for my_runner
*/

#include "my_runner.h"

void setup_score(game_structure *ab)
{
    ab->score.sc_value = 0;
    ab->score.sc_pos.x = 1800;
    ab->score.sc_pos.y = 0;
    ab->score.font = sfFont_createFromFile("textures/pixelated.ttf");
    ab->score.text = sfText_create();
    sfText_setFont(ab->score.text, ab->score.font);
    sfText_setCharacterSize(ab->score.text, 60);
    sfText_setColor(ab->score.text, sfBlack);
    sfText_setPosition(ab->score.text, ab->score.sc_pos);
}

void score_display(game_structure *ab)
{
    char *str = NULL;

    ab->score.time = sfClock_getElapsedTime(ab->score.sc_time);
    ab->score.seconds = ab->animate.time.microseconds / 1000000.0;
    if (ab->animate.seconds > 0.10){
        ab->score.sc_value += 1;
    }
    str = my_itoa(ab->score.sc_value);
    sfText_setString(ab->score.text, str);
}

void score_end(game_structure *ab)
{
    char *str = NULL;

    ab->score.sc_pos.x = 900;
    ab->score.sc_pos.y = 560;
    sfText_setPosition(ab->score.text, ab->score.sc_pos);
    str = my_itoa(ab->score.sc_value);
    sfText_setString(ab->score.text, str);
}