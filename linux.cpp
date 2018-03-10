#include <fcntl.h>
#include <semaphore.h>
#include <cstdlib>
#include <cstdio>

int main(int, char**) 
{
    sem_t* aMutex = sem_open("dottolock.0", O_CREAT | O_EXCL, 0, 0);

    if(aMutex != SEM_FAILED) // No lock, so it was just created with the code above.
    {
        std::system("java -jar dotto.jar");
    } 
    else // Lock already exists, unzip map(?)
    {

        return 1;
    }

    sem_unlink("dottolock.0");

    return 0;
}
