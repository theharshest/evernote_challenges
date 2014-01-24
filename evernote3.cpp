#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, tmp;
	long tot = 1;
	vector<int> inp;
	vector<int> ind;

	cin>>n;

	while(n--)
	{
		cin>>tmp;
		inp.push_back(tmp);
		if(tmp)
			tot *= tmp;
		else
			ind.push_back(inp.size()-1);
	}

	if(ind.size() > 1)
		for(int i=0; i<inp.size(); i++)
			cout<<0<<endl;
	else if(ind.size() == 1)
		for(int i=0; i<inp.size(); i++)
			if(ind[0] == i)
				cout<<tot<<endl;
			else
				cout<<0<<endl;
	else
		for(int i=0; i<inp.size(); i++)
			cout<<tot/inp[i]<<endl;
	
}