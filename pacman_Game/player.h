#ifndef PLAYER_H
#define PLAYER_H
struct player
{
    /* data */
    double score;
    char *name;
    
};
static int player_count;
void set_player_name(struct player* p);
void get_score(struct player* p,double *x);




#endif