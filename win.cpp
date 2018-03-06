#include <windows.h>
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[])
{
    // force only one instance of the program
    HANDLE hMutex = OpenMutex(MUTEX_ALL_ACCESS, 0, "dottolock.0");
    if (!hMutex) {
        hMutex = CreateMutex(0, 0, "dottolock.0");
        std::system("java -jar dotto.jar");
    }

    // wait before closing
    std::getchar();

    return 0;
}