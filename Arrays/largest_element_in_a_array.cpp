class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largestnumber=arr[0];
        for(int i=0;i<n;i++){
            
            if(arr[i]>largestnumber){
                largestnumber=arr[i];
            }
        }
        return largestnumber;
    }
};
