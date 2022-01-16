class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int index1=-1,index2;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                index1=i;
                break;
            }
        }
        if(index1==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>arr[index1]){
                index2=i;
                break;
            }
        }
        swap(arr[index1],arr[index2]);
        int i=index1+1,j=arr.size()-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;j--;
        }
        return;
    }
};