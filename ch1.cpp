#include <iostream>


int main()
{
    int nums[3] = {3,2,4};
    int target=6;
    for(int i=0;i<3; i++)
    {
        for(int j=i+1; j<3;j++)
        {
            if(nums[i]+nums[j]==target)
            {std::cout<<"the value of i is : "<<i<<" the value of j is : "<<j;}
        }
    }
    return 0;
}