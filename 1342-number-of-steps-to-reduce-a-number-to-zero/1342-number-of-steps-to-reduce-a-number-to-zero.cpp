class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        clock_t time;
        time = clock();
        cout<<time<<endl;
        while(num)
        {
            if(num%2==0)
            {
                num/=2;
            }
            else{
                num-=1;
            }
            count++;
        }
        time = clock()-time;
       
        return count;
    }
};