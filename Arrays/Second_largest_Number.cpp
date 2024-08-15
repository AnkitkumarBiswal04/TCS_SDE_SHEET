class Solution {
  public:
    // Function returns the second
    // largest elemen
    int print2largest(vector<int> &arr) {
        // Code Here
        int largest=arr[0];
        int secondlargest=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                secondlargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>secondlargest){
                secondlargest=arr[i];
            }
        }
        return secondlargest;
    }
};
