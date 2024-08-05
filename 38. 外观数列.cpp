class Solution {
public:
    string countAndSay(int n) {
string s = "1";
	string s1="1";
	for (int i = 0; i < n-1; i++)
	{
		s1 = "";
		int len = s.length();
		int left = 0;
		int right = 0;
		while (right < len)
		{
			right++;
			if (s[left] != s[right])
			{
				s1.append(to_string(right - left));
				s1.push_back(s[left]);
				left = right;
			}	
		}
		s = s1;
	}
	return s1;
    }
};
