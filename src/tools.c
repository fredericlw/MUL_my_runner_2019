/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** All the useful function for my_runner
*/

#include "my_runner.h"

void analyse_events(game_structure *ab)
{
    int a = 450;

    while (sfRenderWindow_pollEvent(ab->window, &ab->event)){
        if (ab->event.type == sfEvtClosed) {
            sfRenderWindow_close(ab->window);
        }
        if (ab->event.type == sfEvtKeyPressed) {
            if (sfKeyboard_isKeyPressed(sfKeySpace) && ab->jump.pl_pos.y > a) {
                sfSprite_move(ab->sprites.player_sp, ab->jump.up);
                sfSound_play(ab->sound.jump_sd);
            }
            if (sfKeyboard_isKeyPressed(sfKeyEscape))
                sfRenderWindow_close(ab->window);
        }
    }
}

void display_help(void)
{
    my_putstr("USAGE:\n");
    my_putstr("    ./my_runner [map file]\n\n");
    my_putstr("DESCRIPTION:\n");
    my_putstr("    A runner game\n    To win you need to avoid all the ");
    my_putstr("obstacles\n\n");
    my_putstr("OPTIONS:\n");
    my_putstr("    -h: show the help\n");
    my_putstr("    map: a map file, formated according to the .legend file\n");
    my_putstr("\nCONTROLS:\n");
    my_putstr("    SPACE_KEY: jump\n");
    my_putstr("    ESCAPE KEY: quit the game\n");
}