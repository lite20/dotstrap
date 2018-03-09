#pragma once
#include <string>

class Dotto
{
public:
	Dotto();
	~Dotto();

	static bool extract_dotto(const std::string& dotto);
};