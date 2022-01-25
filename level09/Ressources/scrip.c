#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
    int i;
    FILE *fp;
    char *line = NULL;
    ssize_t read;
    size_t len = 0;

    i = 0;
    fp = fopen(av[1], "r");
    read = getline(&line, &len, fp);
    while (line[i])
    {
        printf("%c", line[i] - i);
        i++;
    }
    printf("\n");
}