//
// Created by Andrzej Świętek on 3/22/21.
//
#include <studio.h>
#include <cstdlib>

#include <sys/types.h>
#include <sys/wait.h>
/**
 * Napisac program wypisuj , dacy identyfikatory UID, GID, PID, PPID i PGID dla danego procesu
 * @return
 */

int main(){
    switch (fork())
    {
        case -1:
            perror("fork error");
            exit(1);
        case 0:
            /* akcja dla procesu potomnego */
            getuid();
            getgid();
            getpid();
            getppid();
//            getpgid();

        default:
            /* akcja dla procesu macierzystego, np. wywolanie funkcji wait */
    };

    return 0;
}