class Solution
{
    public:
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {

            int left = 0;
            int right = 0;
            int count = 0;
            vector<int> v;

            int x = (nums1.size() + nums2.size()) / 2;

           
            
            while (left<nums1.size()&& right<nums2.size())
            {
                

                if (nums1[left] < nums2[right])
                {
                    v.push_back(nums1[left]);
                    left++;
                }
                else
                {
                    v.push_back(nums2[right]);
                    right++;
                }

                count++;
 
            }
            
            while(left<nums1.size())
            {
                v.push_back(nums1[left]);
                left++;
            }
            
              while(right<nums2.size())
            {
                v.push_back(nums2[right]);
                right++;
            }
            
            
            
   
            
for(auto a:v)
    cout<<a<<endl;
            
            cout<<x;
            
            
            // if(v.size()==1)
            //     return v[0];
            
           if(v.size()%2==0)
           {
               return (v[x-1]+v[x])/2.0;
           }

            return v[x];
        }
};