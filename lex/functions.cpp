#include "functions.h"

using namespace std;

namespace Func
{

	ast Average::call(int bar, vector<ast_t> ps)
	{
		throw std::exception("The method or operation is not implemented.");
	}

	Average::Average() :StdFunction(VType::NUMERIC, vector<VType>())	{}

}