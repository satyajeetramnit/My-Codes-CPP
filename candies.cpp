// Kids with the greatest number of candies

// Given the array candies and the integer extraCandies,
// where candies[i] represents the number of candies that the ith kid has.
// For each kid check if there is a way to distribute extraCandies among the kids 
// such that he or she can have the greatest number of candies among them. 
// Notice that multiple kids can have the greatest number of candies.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int intArr[5]={2,5,3,1,4};
    int extraCandies=3;
    bool boolArr[5];
    int maxN=INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        maxN=max(maxN,intArr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
            if (intArr[i]+extraCandies>maxN)
            {
                boolArr[i]=true;
            }
            else
            {
                boolArr[i]=false;
            }

    }
    // for(int i=0;i<5;i++)
    cout<<"["<<boolArr[0]<<","<<boolArr[1]<<","<<boolArr[2]<<","<<boolArr[3]<<","<<boolArr[4]<<"]";
    
    return 0;
}