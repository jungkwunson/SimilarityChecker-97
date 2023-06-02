#include <string>

using namespace std;

class Checker
{

public:
	unsigned long long getMin(string in1, string in2)
	{
		if (in1.size() > in2.size())
		{
			return in2.size();
		}			
		else
		{
			return in1.size();
		}
	}

	bool check_size(string in1, string in2)
	{
		if ((in1.size() >= (in2.size() * 2)) || (in2.size() >= (in1.size() * 2)))
		{
			return true;
		}
		return false;
	}

	unsigned long long lengthCharacter(string in1, string in2)
	{
		unsigned long long min = 0;
		unsigned long long ret = 0;
		unsigned long long gap = 0;


		if (check_size(in1, in2)) return 0;

		min = getMin(in1, in2);
		if (min == in1.size())
			gap = in2.size() - in1.size();
		else
			gap = in1.size() - in2.size();

		ret = (60 - (gap * 60 / min));

		return ret;
	}
};