class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
	string s = "croak";
	unordered_map<char, int> map;
	int sn = s.length();
	vector<int>hash(sn);
	int n = croakOfFrogs.length();
	for (int i = 0; i < sn; i++)
	{
		map[s[i]] = i;
	}
	for (auto ch : croakOfFrogs)
	{
		if (ch == 'c')
		{
			if (hash[sn - 1] == 0)
			{
				hash[0]++;
			}
			else
			{
				hash[sn - 1]--;
				hash[0]++;
			}
		}
		else
		{
			if (hash[map[ch] - 1] < 1)
			{
				return -1;
			}
			hash[map[ch] - 1]--;
			hash[map[ch]]++;
		}
	}
	for (int i=0;i<sn-1;i++)
	{
		if (hash[i])
			return -1;
	}
	return hash[sn-1];
    }
};
