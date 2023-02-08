class Solution{
  public:
  int row[100005];
    int col[100005];
    vector<long long int> countZero(int n, int k, vector<vector<int>> &arr)
    {
        // Code Here
        vector<long long int> ans;
        long long int t_ans = n * n;
        int t_row_block = 0;
        int t_col_block = 0;
        for (int i = 0; i < k; ++i)
        {
            int r = arr[i][0];
            int c = arr[i][1];
            // cout<<row[r]<<" "<<col[c]<<" ";
            if (row[r] == 0 && col[c] == 0)
            {
                // handle row
                t_ans = t_ans - n + t_col_block;
                ++t_row_block;
                // handle col
                t_ans = t_ans - n + t_row_block;
                ++t_col_block;
                // cout<<"both "<<t_ans<<" "<<t_row_block<<" "<<t_col_block<<endl;
                row[r] = 1;
                col[c] = 1;
            }
            else if (row[r] == 1 && col[c] == 1)
            {
            }
            else if (row[r] == 0)
            {
                // handle row
                t_ans = t_ans - n + t_col_block;
                ++t_row_block;
                // cout<<"row "<<t_ans<<" "<<t_row_block<<" "<<t_col_block<<endl;
                row[r] = 1;
            }
            else if (col[c] == 0)
            {
                // handle col
                t_ans = t_ans - n + t_row_block;
                ++t_col_block;
                // cout<<"col "<<t_ans<<" "<<t_row_block<<" "<<t_col_block<<endl;
                col[c] = 1;
            }
            ans.push_back(t_ans);
        }
        for (int i = 0; i < k; ++i)
        {
            int r = arr[i][0];
            int c = arr[i][1];
            row[r]=0;
            col[c]=0;
        }
        return ans;
    }
};
