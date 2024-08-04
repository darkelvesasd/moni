class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
	int sum = 0;
	if (timeSeries.size() == 0)
	{
		return 0;
	}
	for (int i=1;i<timeSeries.size();i++)
	{
		int t = timeSeries[i] - timeSeries[i - 1];
		if (t >= duration)
		{
			sum += duration;
		}
		else
		{
			sum += t;
		}
	}
	return sum += duration;
    }
};
