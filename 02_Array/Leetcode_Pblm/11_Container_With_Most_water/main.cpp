#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int> height){
    // BrutForce Approach

    // int maxWater =0,width=0,area=0,Height=0,ans=0;
    // for(int i=0;i<height.size();i++){
    //     for(int j=i+1;j<height.size();j++){
    //         width = j-i;
    //         Height = min(height[i],height[j]);
    //         area = width * Height;
    //         maxWater = max(maxWater,area);
    //     }
    // }
    // return maxWater;

    
    
    // Optimal Approach
    int n = height.size();
    int lp=0, rp=n-1,maxWater=0;
    while(lp<rp){
        int w = rp-lp;
        int Height = min(height[lp],height[rp]);
        int area = w*Height;
        maxWater = max(maxWater,area);
        height[lp]<height[rp]?lp++:rp--;
    }
    return maxWater;
}
int main(){
    vector <int>arr={1,8,6,2,5,4,8,3,7};
    cout<<maxArea(arr);
    return 0;
}