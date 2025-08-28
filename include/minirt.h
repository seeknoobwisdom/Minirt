#ifndef MINIRT_H
#define MINIRT_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "../minilibx-linux/mlx.h"

#define HIGHT   900
#define WEDTH   900

typedef struct s_mlx
{
    void    *mlx;
    void    *win;
}t_mlx;


typedef struct s_minirt
{
    t_mlx   *mlx;
    char    *filename;
}t_minirt;
// minirt core functions
void    minirt_minilibx(t_minirt *minirt);
void    minirt_init(t_minirt *minirt);
void    minirt_parcing(t_minirt *minirt);
// error handling
void    error(char *msg, t_minirt   *minirt, int    exit_code);
void    free_master(t_minirt   *minirt);

#endif