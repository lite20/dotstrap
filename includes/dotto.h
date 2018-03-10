#ifndef _DOTTO_H
#define _DOTTO_H

#include <string>

class dotto
{
public:
	dotto();
	~dotto();

	static bool extract(const std::string& dotto, bool debug = false);
};

#endif // _DOTTO_H