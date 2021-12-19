#include<iostream>
using namespace std;
struct petrolPump
{
    int petrol;
    int distance;
};
class Solution{
  public:
  
    
    int tour(petrolPump p[],int n)
    {
    
       int idx=0;
       int fuel=0;
       int req=0;
       for(int i=0;i<n;i++)
       {
           fuel+=p[i].petrol-p[i].distance;
           if(fuel<0)
           {
               req+=fuel;
               fuel=0;
               idx=i+1;
           }
       }
       if(req+fuel>=0)
       return idx;
       return -1;
    }
};