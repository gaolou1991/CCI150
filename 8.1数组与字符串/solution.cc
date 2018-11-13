class Different {
public:
    bool checkDifferent(string iniString) {
        // 特殊情况处理
        if( iniString.size() > 256) return false;
        
        // 采样HASH
        bool hash[256] = {false};
        for(int i=0; i<iniString.size(); i++){
            if(hash[iniString[i]]) return false;
            hash[iniString[i]] = true;
        }
        
        return true;
    }
};