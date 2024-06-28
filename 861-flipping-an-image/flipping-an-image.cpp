class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        if(image.empty())
        {
            return image;
        }
        for(auto& i:image)
        {
            reverse(begin(i),end(i));
            for_each(i.begin(),i.end(),[](int& item){
                item=1-item;
            });
        }
         return image;
    }
};