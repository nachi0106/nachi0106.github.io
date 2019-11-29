    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<map>
    #include<queue>
    using namespace std;
     
     
     typedef map<long long int, long long int> mid;
     mid m;
     
    int main()
    {
        long long int n,a,b,c;
        priority_queue<pair <long long,long long > > p;
        cin>>n>>b;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            if(m.count(a) == 0)
            {
                m.insert(mid::value_type(a,1));
            }
            else
            {
                m[a]++;
            }
            p.push(make_pair(m[a],a));
            cout<<p.top().second<<" "<<p.top().first<<endl;
            
        }
        
    }
