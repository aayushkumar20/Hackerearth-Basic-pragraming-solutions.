#include <iostream>
 
using std::cout;
 
using std::cin;
 
 
 
int main()
 
{
 
    int len, min = 5001, count = 0;
 
    cin >> len;
 
    int arr1[len], arr2[len];
 
    
 
    for (int i = 0; i < len; i++)
 
        cin >> arr1[i];
 
        
 
    for (int i = 0; i < len; i++)
 
        cin >> arr2[i];
 
    
 
    for(int i = 0; i < len; i++)
 
        if (arr1[i] < min)
 
            min = arr1[i];
 
    
 
    for(int i = 0; i < len; i++)
 
    {
 
        while(arr1[i] > min)
 
        {
 
            arr1[i] -= arr2[i];
 
            count++;
 
        }
 
        
 
        if(arr1[i] < min)
 
        {
 
             min=arr1[i];
 
              i=-1;
 
        }
 
 
 
 
        if(arr1[i] < 0) 
 
        {
 
            count = -1;
 
            break;
 
        }
 
    }
 
   
 
    cout << count;
 
    return 0;
 
}
