#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/user.h"

int main(int argc, char* argv[]){
    if(argc <= 1){
        fprint(2, "usage:sleep second\n");
        exit(1);
    }
    sleep(atoi(argv[1]));
    exit(0);
}