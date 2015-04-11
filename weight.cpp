#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
  int count;
  int weight=0;
  int i;
  
  ifstream infile("file.in",ios::in);
  if(!infile)
  {
    cerr<<"Failed"<<endl;
    exit(1);
  }

  infile>>count;
  
  vector<int> wei(count);
  
  for(i=0;i<count;i++)
    infile>>wei.at(i);
  
  sort(wei.begin(),wei.end());
 
  for(i=count-1;i>=(count-5);i--)
    weight=weight+wei.at(i);
  
  cout<<weight<<endl;

  return 0;
}
