// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {

        int count=0;

        for(int i=31;i>=0;i--)

        {

            int k=1<<i;

            if(k&n)

            count++;

            else

            count=0;

            if(count==3)

            { n=n^k;

            count=0;

            }

        }

        return n;

    }
};
