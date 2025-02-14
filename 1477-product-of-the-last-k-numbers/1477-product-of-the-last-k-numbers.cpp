class ProductOfNumbers {
public:

  vector<int>v;
  int n;
    ProductOfNumbers() {
      v.clear();
      n=0;
    }
    
    void add(int num) {
        v.push_back(num);
    }
    
    int getProduct(int k) {
        int prod=1;
        int n=v.size();
        for(int i=n-k;i<n;i++){
            prod*=v[i];
        }
        return prod;
    }
};

