#include "kernel/types.h"
#include "user/user.h"
int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(2,"usage: sleep NUMBER\n");
        exit(1);
    }
    int ticks = atoi(argv[1]);
    printf("(nothing happens for a little while)\n");
    sleep(ticks);
    exit(0);
}