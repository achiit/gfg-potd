class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	
	void convert(int arr[], int n) {
	    // code here
	    int arr1[n];
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        arr1[i]=arr[i];
	    }
	    //sort the new array
	    sort(arr1,arr1+n);
	    
	    for(int i=0;i<n;i++){
	        mp[arr1[i]]=i;
	    }
	    
	    for(int i=0;i<n;i++){
	        arr[i]=mp[arr[i]];
	    }
	}
};
