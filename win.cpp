#include "includes\dotto.h"
#include <direct.h>
#include <Windows.h>

int main(int argc, char* argv[])
{
	HANDLE hMutex = OpenMutex(MUTEX_ALL_ACCESS, 0, "dottolock.0");
	if (!hMutex)
	{
		hMutex = CreateMutex(0, 0, "dottolock.0");
		std::system("java -jar dotto.jar");
	}

	if (argv[1]) {
		if (!dotto::extract(argv[1], true))
		{
			printf("Failed");
		}
		else
		{
			printf("Success");
		}
	}

	return 0;
}