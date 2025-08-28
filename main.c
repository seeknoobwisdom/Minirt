#include "include/minirt.h"

/*
Main rule:

Simple nothing more than needed
handule basic call core functions
*/

int main(int argn, char **argv)
{
    t_minirt    minirt;
    if (argn == 2)
    {
        minirt.filename = argv[0];
        minirt_parcing(&minirt);
        minirt_minilibx(&minirt);
        minirt_init(&minirt);
    }
    else
        error("Invalid number of arguments", &minirt, 127);
    return (0);
}