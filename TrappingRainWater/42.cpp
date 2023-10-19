class Solution {
public:
    int trap(vector<int>& height) {

        int sum = 0, left = 0, right = 0;
        vector <int> max_left(height.size(), 0), max_right(height.size(), 0);

        for(int i = 0; i <height.size(); i++){
            left = max(left, height[i]);
            max_left[i] = left;
        }

        for(int i = height.size() -1; i >= 0; i--){
            right = max(right, height[i]);
            max_right[i] = right;
        }


        for(int i = 0; i<height.size()-1; i++){
            sum += min(max_left[i], max_right[i]) - height[i];
        }

        return sum; 
    }
};