#include "../../include/minirt.h"

void    minirt_minilibx(t_minirt *minirt)
{
    (void)minirt;
    minirt->mlx->mlx = mlx_init();
    minirt->mlx->win = mlx_new_window(minirt->mlx->mlx, HIGHT,WEDTH, "mohammed");
    // mlx_string_put(minirt->mlx->mlx, minirt->mlx->win, 20, 20, 0,"mohammed hello");
    for (int i = 0; i < 900; i++)
        for (int j = 0; j < 900; j++)
            mlx_pixel_put(minirt->mlx->mlx, minirt->mlx->win,i, j, 0x98);
    mlx_loop(minirt->mlx->mlx);
}