#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool size_check(int _size)
{    
  if(_size ==5) { return true; }    
  else{ return false; }
}

int main()
{   
  vector<long int> keys;    
  vector<long int> values;    
  int _size = 5;
       
  do    
  {        
      int _temp = 0;        
      cin >> _temp;        
      keys.push_back(_temp);        
      _size--;    
  }while(_size > 0);       
  
  bool verify_input = size_check(keys.size());       
  if(verify_input)    
  {                       
    std::sort (keys.begin(),keys.end());        
    long int _val = 0;        
    for(int index = 0 ; index < (keys.size()-1);index++)        
    {            
      _val += keys.at(index);        
    }
        
    values.push_back(_val);                      
    _val = 0;                
    for(int index = 1 ; index < keys.size();index++)        
    {            _val += keys.at(index);        }                
    values.push_back(_val);       
    cout << values.at(0) << " " << values.at(1);
  }        return 0;}
