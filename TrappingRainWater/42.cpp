class Solution {
public:
    int trap(vector<int>& height) {

        int maxIndex = 0;

        int units = 0, maxIndex = 0;
        for(int i = 1; i <height.size(); i++){
            if(height[maxIndex] < height[i])
                maxIndex = i;
        }

        for(int i = maxIndex - 1; i>=0; i--){
            if(height[i] > height[])
        }
    }
};