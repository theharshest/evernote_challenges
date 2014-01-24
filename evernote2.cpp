#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	map<string, int> ms;
	multimap<int, string> rev;
	string term;
	int n;
	cin>>n;
	cin.ignore();

	while(n--)
	{
		getline(cin, term);
		if(ms.find(term) != ms.end())
			ms[term]++;
		else
			ms[term] = 0;
	}

	cin>>n;

	map<string, int>::reverse_iterator it1;
	multimap<int, string>::reverse_iterator it2;

	for(it1 = ms.rbegin(); it1 != ms.rend(); it1++)
    {
		rev.insert(pair<int, string>(it1->second, it1->first));
    }

	it2 = rev.rbegin();

	while(n--)
	{
		cout<<(it2->second)<<endl;
		it2++;
		if(it2 == rev.rend())
			break;
	}

    return 0;
}
