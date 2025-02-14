class ProductOfNumbers {
public:

  vector<int>v;// cummulative product store karenge
  int n;
    ProductOfNumbers() {
      v.clear();
      n=0;
    }
    
    void add(int num) {
        if(num==0){
            v={};
            n=0;
        }
        else{
            if(v.empty()){v.push_back(num);}
            else { v.push_back(num*v[n-1]);}
            n++;
        }
    }
    
    int getProduct(int k) {
       if(k==n)return v[n-1];
       else if(k>n)return 0;
       
      return v[n-1]/v[n-k-1];
    }
};

