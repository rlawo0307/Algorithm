#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> records)
{
	vector<string> answer;
	stack<string> st;
	string prev_id, cur_id;
	string prev_command, cur_command;
	string tmp;
	int prev_i, cur_i;
	int comma;

	for (int i = 0; i < records.size(); i++)
	{
		if (records[i] == "check notification")
		{
			tmp = st.top();
			answer.push_back(tmp);
			st.pop();
		}
		else
		{
			if (st.empty())
				st.push(records[i]);
			else
			{
				tmp = st.top();
				prev_i = tmp.find(' ');
				prev_id = tmp.substr(0, prev_i);
				prev_command = tmp.substr(prev_i+1, tmp.size()- prev_i);

				cur_i = records[i].find(' ');
				cur_id = records[i].substr(0, cur_i);
				cur_command = records[i].substr(cur_i+1, records[i].size()-cur_i);

				if (prev_command == cur_command)
				{
					st.pop();
					tmp = prev_id + "," + cur_id + " " + prev_command;
					st.push(tmp);
				}
				else
					st.push(records[i]);
			}
		}
	}

	for (int i = 0; i < answer.size(); i++)
	{
		comma = answer[i].find(',');
		cur_i = answer[i].find(' ');
		cur_id = answer[i].substr(0, cur_i);
		cur_command = answer[i].substr(cur_i + 1, answer[i].size() - cur_i);

		if (cur_command == "share")
		{
			answer[i] = cur_id + " shared yout post";
			/*
			if (comma == -1)
				answer[i] = cur_id + " shared yout post";
			else
			{
				cur_id.replace(comma, 1, " and ");
				comma = answer[i].find(',');
				if(comma == -1)
					answer[i] = cur_id + 
			}
			*/
		}
		else
		{
			answer[i] = cur_id + " commented on your post";
			/*
			if (comma == -1)
				answer[i] = cur_id + "commented on your post";
			else
				;
				*/
		}
	}
	return answer;
}

int main()
{
	vector<string> records = { "john share", "mary comment",
	"jay share", "check notification", "check notification",
	"sally comment", "james share", "check notification",
	"lee share", "laura share", "will share", "check notification",
	"alice comment", "check notification" };

	solution(records);
}

/*
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using  namespace std;

int solution(vector<string> color, vector<int> prices)
{
	string up = "";
	string down = "";
	int idx;
	int answer = 0;
	int same = 0;

	for (int i = 0; i < color.size(); i++)
	{
		up += color[i][0];

		idx = up.find(color[i][1]);
		if (idx == -1)
			down += color[i][1];
		else
		{
			same++;
			up = up.substr(0, idx) + up.substr(idx + 1, up.size());
		}
	}

	answer += same * prices[0] + min((up.size() + down.size()) * prices[0], up.size() * prices[1]);
	return answer;
}

int main()
{
	vector<string> color = { "RG", "WR", "BW", "GG" };
	vector<int> prices = { 5000, 6000 };

	cout << solution(color, prices);
}
*/