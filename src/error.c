#include "../include/minirt.h"

/*
Exit Code	Meaning
0	Success
1	General error
2	Misuse of shell builtins
126	Command invoked cannot execute
127	Command not found
128	Invalid exit argument
130	Script terminated by Ctrl+C
255	Exit status out of range
*/
void    error(char *msg, t_minirt   *minirt, int    exit_code)
{
    printf("%s\n", msg);
    free_master(minirt);
    exit(exit_code);
}

void    free_master(t_minirt   *minirt)
{
    (void)minirt;
}
