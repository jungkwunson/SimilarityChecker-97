#include <string>

using namespace std;

class Checker
{

public:
	void getMinMax(string in1, string in2, float& max, float& min)
	{
		if (in1.size() > in2.size())
		{
			max = (float)in1.size();
			min = (float)in2.size();
		}			
		else
		{
			max = (float)in2.size();
			min = (float)in1.size();
		}
	}

	bool check_size(string in1, string in2)
	{
		if (in1.size() >= (in2.size() * 2))
		{
			return true;
		}
		if (in2.size() >= (in1.size() * 2))
		{
			return true;
		}
		return false;
	}

	float lengthCharacter(string in1, string in2)
	{
		float max = 0;
		float min = 0;
		float ret = 0;
		float value;

		if (check_size(in1, in2)) return 0;

		getMinMax(in1, in2, max, min);

		ret = (60 - ((max - min) * 60 / min));

		return (int)ret;
	}
};