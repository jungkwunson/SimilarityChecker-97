#include <string>

using namespace std;

#define MAX_ARRAY_SIZE 26

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

	void makeStringArray(string str, int str_array[MAX_ARRAY_SIZE])
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] < 'A' || str[i] > 'Z')
				continue;
			str_array[str[i] - 'A'] += 1;
		}
	}

	void getCount(int& totalCnt, int& sameCnt, int in1_array[MAX_ARRAY_SIZE], int in2_array[MAX_ARRAY_SIZE])
	{
		for (int i = 0; i < MAX_ARRAY_SIZE; i++)
		{
			if (in1_array[i] > 0 && in2_array[i] > 0)
			{
				sameCnt++;
			}
			if (in1_array[i] > 0 || in2_array[i] > 0)
			{
				totalCnt++;
			}
		}
	}

	int sameCharacter(string in1, string in2)
	{

		int ret = 0;
		int totalCnt = 0;
		int sameCnt = 0;

		int in1_array[MAX_ARRAY_SIZE] = { 0, };
		int in2_array[MAX_ARRAY_SIZE] = { 0, };

		makeStringArray(in1, in1_array);
		makeStringArray(in2, in2_array);

		getCount(totalCnt, sameCnt, in1_array, in2_array);

		ret = sameCnt / totalCnt * 40;

		return ret;
	}
};