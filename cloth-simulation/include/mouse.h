#ifndef MOUSE_H
#define MOUSE_H

#include "vect2.h"
#include <stdbool.h>
#include <stdlib.h>

struct Mouse {
    vect2 pos;
    vect2 prev_pos;
    bool left_button_down;
    bool right_button_down;
    float cursor_size;
    float max_cursor_size;
    float min_cursor_size;
};

typedef struct Mouse mouse;

mouse* mouse_create(float x,float y);

vect2 mouse_get_pos(mouse* m);

vect2 mouse_get_prevpos(mouse* m);

vect2 mouse_diff_pos(mouse* m);

void update_pos(mouse* m,int x,int y);

void increase_cursor_size(mouse* m,int increment);


#endif