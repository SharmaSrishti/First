#include<iostream.h>
#include<map>
#include<iterator>

int main()
{
map<int,int> ggquiz;
ggquiz.insert(pair <int,int>(1,40));
ggquiz.insert(pair <int,int>(2,30));
ggquiz.insert(pair <int,int>(3,20));
map <int,int> :: iterator itr;
cout<<"The map ggquiz  is"<<"\n";
for(itr=ggquiz.begin();itr!=ggquiz.end();++itr)
{
cout<<itr->first<<itr->seecond<<"\n";
}
return 0;
}

  
