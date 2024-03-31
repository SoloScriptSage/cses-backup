class Solution {
public:
    string addBinary(string a, string b) {
        int as = a.size();
        int bs = b.size();
        int p = false;
        if(as==0 || as==1 && a[0]=='0') return b;
        if(bs==0 || bs==1 && b[0]=='0') return a;

        if(as<bs){
            a.swap(b); // swap string so a - max
            swap(as, bs); // swap as bs, so as - maxindex
        }

        //a>b
        for(int rb = bs-1; rb >= 0; rb--)
        {
            for(int ra = as-1; ra >= 0; ra--){
                if(p && a[ra] == '1'){
                    a[ra]='0';
                    continue;
                }
                if(p && a[ra] == '0'){
                  p = false;
                  a[ra]='1';
                  break;
                }
                if(b[rb] == '1' && a[ra]=='1' && !p) {
                    a[ra] = '0';
                    p = true;
                }else{
                    a[ra] = '1';
                    break;
                }
            }
            if(a[0]=='0') a.insert(a.begin(), '1');
            as--;
            p=false;
        }

        return a;
    }
};
