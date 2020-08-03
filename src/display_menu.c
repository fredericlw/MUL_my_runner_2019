/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** display_menu
*/

#include "my_runner.h"

void display_game(game_structure *ab)
{
    get_sprite_pos(ab);
    check_collisions(ab);
    analyse_events(ab);
    if (ab->jump.pl_pos.y < 559)
        sfSprite_move(ab->sprites.player_sp, ab->jump.down);
    score_display(ab);
    draw_sp(ab);
    animate_player(ab);
    check_pos(ab);
    move_parallax_sprites(ab);
    sfRenderWindow_display(ab->window);
}