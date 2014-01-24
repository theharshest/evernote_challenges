#include<iostream>
#include<sstream>
#include<list>

using namespace std;

int main()
{
    int c = 0;
    list<string> l;
    
    int sz;
    string s, dat;
    
    cin>>sz;
    
    cin.ignore();

    getline(cin, s);

    while(s[0] != 'Q')
    {
        int comm;
        stringstream ss;
        if(s[0] == 'A')
        {
            ss<<s;
            ss.ignore(1, ' ');
            ss>>comm;

            while(c!=sz && comm--)
            {
                getline(cin, dat);
                c++;
                l.push_back(dat);
            }
            while(comm>0)
            {
                getline(cin, dat);
                l.pop_front();
                l.push_back(dat);
                comm--;
            }
        }
        else if(s[0] == 'R')
        {
            ss<<s;
            ss.ignore(1, ' ');
            ss>>comm;

            while(comm--)
            {
                l.pop_front();
                c--;
            }
        }
        else if(s[0] == 'L')
        {
            list<string>::iterator it;
            for(it = l.begin(); it != l.end(); it++)
            {
                cout<<(*it)<<endl;    
            }
        }

        getline(cin, s);
    }
}
