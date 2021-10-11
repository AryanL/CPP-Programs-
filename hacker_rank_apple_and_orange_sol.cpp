#include <iostream>

using namespace std;

int main(){
    int s , t , a , b , m , n , na = 0 , no = 0  ; 
    cin>>s>>t ; 
    
    cin>>a>>b ; 
    cin>>m>>n ; 
    int apples[m] ; 
    int oranges[n] ;
     
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin>>apples[i] ; 
        
    }
    
   
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>oranges[i] ; 
        
    }
    
     for (int i = 0; i < m; i++)
    {
         if (((a + apples[i])>=s) && ((a + apples[i])<=t))
         {
             /* code */
            na++ ; 
         }
        
         
    }
    for (int i = 0; i < n; i++)
    {
        if (((b+oranges[i])>=s) && ((b+ oranges[i])<=t))
         {
            
            no++ ; 
         }
        
        
    }
    cout<<na<<endl<<no ; 
}
