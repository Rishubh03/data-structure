/******************************************************************************

                Given a binary array, find the index of 0 to be replaced with 1 to get the maximum length sequence of continuous ones.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int num;
   cin>>num;
   
   int arr[num];
   for(int i =0;i<num;i++){
       cin>>arr[i];
   }
   
   int count=0,prev_index=-1,max_count=0,max_index=-1;
   
   for(int i=0;i<num;i++){
       if(arr[i]==1) count++;
       else{
           count = i- prev_index;
           prev_index = i;
       }
       
       if(count>max_count){
           max_count = count;
           max_index = prev_index;
       }
   }
   
   cout<<max_index;

    return 0;
}
