class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> result;
        vector<vector<int>> directions = {
            {0 , 1}, //EAST
            {1 , 0}, //SOUTH
            {0, -1}, //WEST
            {-1, 0} //NORTH
        };
        
        int steps = 0; //how much steps to take
        int dir = 0; //in dir direction
        
        result.push_back({rStart, cStart});
        
        while(result.size() < rows*cols){
            if(dir == 0 || dir == 2) steps++; // 0 = east, 2 == west
            
            for(int i = 0; i < steps; i++){
                rStart += directions[dir][0];
                cStart += directions[dir][1];
                if(rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols){ //valid cols and rows
                    result.push_back({rStart, cStart});
                }
            }
            dir = (dir + 1) % 4; //change the direction
            
        }
        return result;
    }
};