class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string s1;
        string s2;
        string s3;
        
        for(int i=0;i<n;i++){
            if(str[i]>='a' && str[i]<='z'){
                s1.push_back(str[i]);
            }
            else
            s2.push_back(str[i]);
        }
        
        int lower_index=0;   //s2 iterator
        int upper_index=0;   //s2 iterator
        
        //sorting s1 and s2
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        for(int i=0;i<n;i++){
            if(str[i]>='a' && str[i]<='z'){
                s3.push_back(s1[lower_index]);
                lower_index++;
            }
            else
            {
                s3.push_back(s2[upper_index]);
                upper_index++;
            }
        }
        return s3;
    }
};
