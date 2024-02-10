// leetcode 54 - spiral print

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int startingRow = 0;
//         int endingRow = row - 1;

//         int startingCol = 0;
//         int endingCol = col - 1;

//         int count = 0;
//         int totalNum = row * col;
//         vector<int> ans;
//         while (count < totalNum) {

//             // Print First row
//             for (int index = startingCol;
//                  count < totalNum && index <= endingCol; index++) {
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;

//             // End col

//             for (int index = startingRow;
//                  count < totalNum && index <= endingRow; index++) {
//                 ans.push_back(matrix[index][endingCol]);
//                 count++;
//             }
//             endingCol--;

//             // End Row

//             for (int index = endingCol;
//                  count < totalNum && index >= startingCol; index--) {
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;

//             // first col

//             for (int index = endingRow;
//                  count < totalNum && index >= startingRow; index--) {
//                 ans.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;
//     }
// };