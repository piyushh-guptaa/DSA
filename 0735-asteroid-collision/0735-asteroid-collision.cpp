class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> output;
        
        for(int i = 0; i < asteroids.size(); i++) {
            if(asteroids[i] > 0) {
                output.push_back(asteroids[i]);
            } else {
                while(!output.empty() && output.back() > 0 && output.back() < abs(asteroids[i])) {
                    output.pop_back();
                }
                
                if(!output.empty() && output.back() == abs(asteroids[i])) {
                    output.pop_back(); 
                } 
                else if(output.empty() || output.back() < 0) {
                    output.push_back(asteroids[i]); 
                }
            }
        }
        
        return output;
    }
};
