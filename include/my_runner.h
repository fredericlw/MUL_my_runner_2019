/*
** EPITECH PROJECT, 2019
** my_runner.h
** File description:
** A header file that contains the prototypes of all the functions
*/

#ifndef MY_RUNNER
#define MY_RUNNER

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

#define player_size 128;
#define window_width 1920;
#define window_height 1080;

typedef struct game_structure
{
    struct textures
    {
        sfTexture *bg_0;
        sfTexture *bg_1;
        sfTexture *bg_2;
        sfTexture *bg_3;
        sfTexture *bg_4;
        sfTexture *bg_5;
        sfTexture *bg_6;
        sfTexture *player;
        sfTexture *rock;
        sfTexture *log;
        sfTexture *cactus;
        sfTexture *victory;
        sfTexture *win_tx;
        sfTexture *loose_tx;
    }textures;

    struct sprites
    {
        sfSprite *bg_sp0;
        sfSprite *bg_sp1;
        sfSprite *bg_sp1_2;
        sfSprite *bg_sp2;
        sfSprite *bg_sp2_2;
        sfSprite *bg_sp3;
        sfSprite *bg_sp3_2;
        sfSprite *bg_sp4;
        sfSprite *bg_sp4_2;
        sfSprite *bg_sp5;
        sfSprite *bg_sp5_2;
        sfSprite *bg_sp6;
        sfSprite *bg_sp6_2;
        sfSprite *player_sp;
        sfSprite *victory;
        sfSprite *log_1;
        sfSprite *log_2;
        sfSprite *rock_1;
        sfSprite *rock_2;
        sfSprite *cactus_1;
        sfSprite *cactus_2;
        sfSprite *win_sp;
        sfSprite *loose_sp;
    }sprites;

    struct buffer
    {
        sfSoundBuffer *music_bf;
        sfSoundBuffer *jump_bf;
    }buffer;

    struct sound
    {
        sfMusic *music;
        sfSound *music_sd;
        sfSound *jump_sd;
    }sound;

    struct parallax
    {
        sfVector2f bg1;
        sfVector2f bg2;
        sfVector2f bg3;
        sfVector2f bg4;
        sfVector2f bg5;
        sfVector2f bg6;
        sfVector2f bg1_2;
        sfVector2f bg2_2;
        sfVector2f bg3_2;
        sfVector2f bg4_2;
        sfVector2f bg5_2;
        sfVector2f bg6_2;

        sfVector2f sp;

        sfVector2f sp1;
        sfVector2f sp1_2;
        sfVector2f sp2;
        sfVector2f sp2_2;
        sfVector2f sp3;
        sfVector2f sp3_2;
        sfVector2f sp4;
        sfVector2f sp4_2;
        sfVector2f sp5;
        sfVector2f sp5_2;
        sfVector2f sp6;
        sfVector2f sp6_2;
        sfVector2f pl;
        sfVector2f log_1;
        sfVector2f log_2;
        sfVector2f rock_1;
        sfVector2f rock_2;
        sfVector2f cactus_1;
        sfVector2f cactus_2;
        sfVector2f victory;
    }parallax;

    struct animate
    {
        sfClock *clock;
        sfTime time;
        float seconds;
    }animate;

    struct game_values
    {
        sfVector2f pl;
        sfVector2f scale;
        int pos;
        int rock;
        int log;
        int cactus;
        int victory;
        int pause;
        int menu;
    }game_values;

    struct jump
    {
        sfVector2f up;
        sfVector2f down;
        sfVector2f pl_pos;
    }jump;

    struct score
    {
        int sc_value;
        sfText *text;
        sfFont *font;
        sfClock *sc_time;
        sfVector2f sc_pos;
        sfTime time;
        float seconds;
    }score;

    sfRenderWindow *window;
    sfVideoMode vm;
    sfEvent event;
    sfIntRect rect;
    sfVector2i mouse_pos;
    sfVector2f sp_pos;
}game_structure;

void animate_player(game_structure *ab);
void check_first_pos(game_structure *ab);
void check_second_pos(game_structure *ab);
void check_pos(game_structure *ab);
void destroy_soundbuffer(game_structure *ab);
void destroy_sound(game_structure *ab);
void destroy_sprite(game_structure *ab);
void destroy_texture(game_structure *ab);
void clean(game_structure *ab);
void draw_objects(game_structure *ab);
void draw_sp(game_structure *ab);
void display_in_window(game_structure *ab);
void set_obj_values(game_structure *ab);
void set_obj_init_pos(game_structure *ab);
void game_setup(game_structure *ab, char **av);
int main(int ac, char **av);
int check_file(char *filepath);
char *get_map(char **av);
void move_parallax_sprites(game_structure *ab);
void get_sprite_pos(game_structure *ab);
void set_log(game_structure *ab);
void set_rock(game_structure *ab);
void set_cactus(game_structure *ab);
void set_victory(game_structure *ab);
void set_obj(game_structure *ab, char *map);
void set_sprite(game_structure *ab);
void set_sizes(game_structure *ab);
void set_speed_values(game_structure *ab);
void set_parallax_values(game_structure *ab);
void set_second_sprite_pos(game_structure *ab);
void create_soundbuffer(game_structure *ab);
void create_sound(game_structure *ab);
void set_sound_to_soundbuffer(game_structure *ab);
void setup_sound(game_structure *ab);
void setup_score(game_structure *ab);
void score_display(game_structure *ab);
void create_sprite(game_structure *ab);
void create_texture(game_structure *ab);
void set_texture_to_sprite(game_structure *ab);
void setup_textures(game_structure *ab);
void analyse_events(game_structure *ab);
void display_help(void);
void check_collisions(game_structure *ab);
int check_map_content(char *map);
void display_game(game_structure *ab);
void display_loose(game_structure *ab);
void display_win(game_structure *ab);
void score_end(game_structure *ab);
void end_events(game_structure *ab);

#endif /* MY_RUNNER */