//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private :
   void dfs(int i , int j , vector<vector<int>>& image , int newColor , int color , vector<vector<int>>&ans , int n , int m)
    {
        ans[i][j] = newColor;
        int r[]={-1, 0, 1, 0};
        int c[] = {0, 1, 0, -1}; 
        for(int x=0 ; x<4 ; x++)
        {
            int nr = i+r[x];
            int nc = j + c[x];
            if(nr>=0 and nr<n and nc>=0 and nc<m and image[nr][nc]==color and ans[nr][nc]!=newColor)
            {
                dfs(nr,nc,image,newColor,color ,ans,n,m);
            }
        }
           

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>>ans = image;
        dfs(sr,sc,image,newColor,color ,ans,n,m);
        return ans;
    }  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends
