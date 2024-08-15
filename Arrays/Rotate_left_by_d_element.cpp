class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        d=d%n;
        //storing the temp element 
        int temp[d];
        for(int i=0;i<d;i++){
            temp[i]=arr[i];
        }
    //shifting of temp element 
        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
        }
        //to fill the rotated array
        for(int i=n-d;i<n;i++){
            arr[i]=temp[i-(n-d)];
        }
    }
};
