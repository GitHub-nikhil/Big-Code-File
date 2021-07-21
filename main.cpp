#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <iterator>
#include <unordered_map>
#include <set>
#include <string.h>
#include <map>
#include <list>
using namespace std;

//int main(){
//    int n,x;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//        }
//        for(int i=0;i<n;i++){
//            int x1=0;
//            for(int j=0;j<=i;j++){
//                x = x^arr[j];
//                }
//                for()
//            }
//    }

//Young Physicist
//int main(){
//    int n,sum=0;
//    cin>>n;
//    while(n--){
//        int x,y,z;
//        cin>>x>>y>>z;
//        sum+=(x+y+z);
//        }
//        if(sum == 0) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        
//        return 0;
//    }

//Bit++
//int main(){
//    int n,x=0;
//    cin>>n;
//    while(n--){
//    string s;
//    cin>>s;
//    for(int i=0;i<3;i++){
//        if(s[i] == '+'){
//            x++;
//            break;
//            }
//            else if(s[i] == '-'){
//                x--;
//                break;
//                }
//        }
//        }
//        cout<<x<<endl;
//        return 0;
//    }

//A-Sum of 2050
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n;
//        cin>>n;
//        long long int no = 2050,x = 0,count=0;
//        bool flag = true;
//        while(flag == true){
//            bool flag1 = true;
//        while(flag1 == true){
//            if(n%no == 0){
//                x = no;
//                no = no*10;
//                }
//                else{
//                    flag1 = false;
//                    }
//            }
//            if(x!=0){
//                count++;
//                n = n-x;
//                if(n == 0) break;
//                }
//                else{
//                    flag = false;
//                    count = 0;
//                    }
//                    flag1 = true;
//                    x=0;
//                    no=2050;
//            }
//            if(count>0) cout<<count<<endl;
//            else cout<<-1<<endl;
//        }
//        return 0;
//    }

//B-Morning Joggling
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        int i = 0,y=0;
//        vector<vector<int> > vec(n);
//        while(i<n){
//            vector<int> arr;
//            vec[i] = vector<int> (m);
//            for(int j=0;j<m;j++){
//                int ele;
//                cin>>ele;
//                arr.push_back(ele);
//                }
//                if(i%2 == 0){
//                    sort(arr.begin(),arr.end());
//                    }
//                    else{
//                        sort(arr.begin(),arr.end(),greater<int>());
//                        }
//                       for(int b=0;b<m;b++){
//                           vec[i][b] = arr[b];
//                           }
//                           i++;
//            }
//            while(y<n){
//                for(int z=0;z<m;z++){
//                    cout<<vec[y][z]<<" ";
//                    }
//                    cout<<endl;
//                    y++;
//                }
//        }
//        return 0;
//    }

//Effective Approach
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//        }
//        int q,ptr=0,v=0,p=0;
//        cin>>q;
//        int arr1[q];
//        for(int i=0;i<q;i++){
//            cin>>arr1[i];
//            }
//            while(ptr!=q){
//                int tf = arr1[ptr];
//                int find_v,find_p;
//                for(int i=0;i<n;i++){
//                    if(arr[i] == tf){
//                        v++;
//                        break;
//                        }
//                    else v++;
//                    }
//                    for(int i=n-1;i>=0;i--){
//                        if(arr[i] == tf){
//                            p++;
//                            break;
//                            }
//                            else p++;
//                        }
//                        ptr++;
//                }
//                cout<<v<<" "<<p<<endl;
//                
//                return 0;
//    }


//Effective Approach
//int main(){
//    int n,m,v=0,p=0;
//    cin>>n;
//    int arr[n+1];
//    for(int i=1;i<=n;i++){
//        cin>>arr[i];
//        }
//        cin>>m;
//        int a[m+1];
//        for(int i=1;i<=m;i++){
//            cin>>a[i];
//            }
//            sort(a+1,a+(m+1));
//            for(int ptr = 1;ptr<=m;ptr++){
//                if(a[ptr] == a[ptr-1]){
//                    continue;
//                    }
//                    else{
//                        int tf = a[ptr];
//                        for(int i=1;i<=n;i++){
//                            if(arr[i] == tf){
//                                v+=i;
//                                p+=(n-i+1);
//                                break;
//                                }
//                            }
//                        }
//                }
//                cout<<v<<" "<<p;
//                return 0;
//    }

//Effective approach
//int main(){
//    int n,m,num,ele;
//    cin>>n;
//    int arr1[100005];
//    for(int i=1;i<=n;i++){
//        cin>>num;
//        arr1[num] = i;
//        }
//        cin>>m;
//        long long v=0,p=0;
//        while(m--){
//            cin>>ele;
//            v+=arr1[ele];
//            p+=(n-arr1[ele]+1);
//            }
//            cout<<v<<" "<<p;
//            return 0;
//    }

//Dima and friends
//int main(){
//    int n,sum=0,ele,fingers = 1,ways = 0;
//    cin>>n;
//    while(n--){
//        cin>>ele;
//        sum+=ele;
//        }
//        int indii = sum%(n+1);
//        while(fingers<=5){
//            int curr = indii+fingers;
//            if(curr>(n+1)) curr=curr%(n+1);
//            if(curr!=1) ways++;
//            fingers++;
//            }
//            cout<<ways<<endl;
//            
//            return 0;
//    }

//Dima and friends
//int main(){
//    int n,sum=0,fingers = 1,ways = 0,dupli,m=0;
//    int arr[n];
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//        sum+=arr[i];
//        }
//        while(sum>(n+1)) sum = (sum-(n+1));
//        while(fingers<=5){
//            dupli = sum;
//            int curr = fingers;
//            if((sum+fingers)>n+1){
//                while(curr--){
//                if(dupli == (n+1)){
//                    dupli = 1;
//                    continue;
//                    }
//                    else dupli++;
//                    }
//                }
//                else dupli = dupli+fingers;
//                fingers++;
//                if(dupli!=1) ways++;
//            }
//            cout<<ways<<endl;
//            
//            return 0;
//    }

//Jzzhu and Children
//int main(){
//    int n,m,ele,last_child;
//    cin>>n>>m;
//    vector<int> arr;
//    arr.push_back(0);
//    for(int i=1;i<=n;i++){
//        cin>>ele;
//        arr.push_back(ele);
//        }
//        bool f = true;
//        while(f!=false){
//            f=false;
//            for(int i=1;i<=n;i++){
//                if(arr[i]>0){
//                    last_child = i;
//                    f = true;
//                    if(m>=arr[i]) arr[i] = 0;
//                    else arr[i] = arr[i]-m;
//                    }
//                }
//            }
//            cout<<last_child<<endl;
//            
//            return 0;
//    }

//Supercentral Point
//int main(){
//    int n,x,y,times=0;
//    cin>>n;
//    int arr1[n];
//    int arr2[n];
//    for(int i=0;i<n;i++){
//        cin>>x>>y;
//        arr1[i] = x;
//        arr2[i] = y;
//        }
//        for(int i = 0;i<n;i++){
//            int x_ele = arr1[i];
//            int y_ele = arr2[i];
//            int l=0,r=0,u=0,d=0;
//            for(int j=0;j<n;j++){
//                if(arr1[j] == x_ele && arr2[j]>y_ele) u++;
//                else if(arr1[j] == x_ele && arr2[j]<y_ele) d++;
//                else if(arr2[j] == y_ele && arr1[j]>x_ele) r++;
//                else if(arr2[j] == y_ele && arr1[j]<x_ele) l++;
//                }
//                if(u>0 && d>0 && r>0 && l>0) times++;
//            }
//            cout<<times<<endl;
//            
//            return 0;
//    }

//A-K-string
//int main(){
//    int k;
//    cin>>k;
//    string s,ans;
//    cin>>s;
//    int arr[125] = {0};
//    for(int i=0;i<s.length();i++){
//        int indii = s[i];
//        arr[indii]++;
//        }
//        int a = 1001;
//        for(int i=97;i<=122;i++){
//            if(arr[i]!=0 && arr[i]<a){
//                a = arr[i];
//                }
//            }
//            bool flag = true;
//            if(a%k!=0) cout<<-1<<endl;
//            else{
//                for(int i=97;i<=122;i++){
//                    if(arr[i]>0 && arr[i]%a!=0){
//                        flag = false;
//                        break;
//                        }
//                        else if(arr[i]>0 && arr[i]%a == 0){
//                            int z = arr[i]/a;
//                            char ele = i;
//                            while(z--) ans = ans+ele;
//                            }
//                    }
//                    string news = ans;
//                    k--;
//                while(k--){
//                    ans = ans+news;
//                    }
//                if(flag == false) cout<<-1<<endl;
//                else cout<<ans<<endl;
//                }
//                
//                return 0;
//    }

//Airport
//int main(){
//    int n,m,a=0,mini=0,b=0,maxi=0;
//    cin>>n>>m;
//    int seats_mini=0,seats_maxi=0;
//    int arr[m];
//    int arr1[m];
//    for(int i=0;i<m;i++){
//        cin>>arr[i];
//        arr1[i] = arr[i];
//        }
//    sort(arr,arr+m);
//    while(a<m){
//        if(seats_mini == n) break;
//        if(arr[a]!=0){
//        mini+=arr[a];
//        arr[a]--;
//        seats_mini++;
//        }
//        else a++;
//        }
//        sort(arr1,arr1+m,greater<int>());
//        while(b<m){
//            if(seats_maxi == n) break;
//            if(arr1[b]!=0){
//                maxi+=arr1[b];
//                arr1[b]--;
//                seats_maxi++;
//                }
//                sort(arr1,arr1+m,greater<int>());
//            }
//        cout<<maxi<<" "<<mini<<endl;
//        
//        return 0;
//    }

//Adding Digits
//int main(){
//    int a,b,n;
//    cin>>a>>b>>n;
//    int i = 0;
//    while(n--){
//        a = a*10;
//        bool f = true;
//        for(int j=0;j<=9;j++){
//            int ele = a;
//            ele = ele+j;
//            if(ele%b == 0){
//                a = ele;
//                f=false;
//                break;
//                }
//            }
//            if(f == true){
//                a = -1;
//                break;
//                }
//        }
//        cout<<a<<endl;
//        
//        return 0;
//    }

//Polo the Penguin and Matrix
//int main(){
//    int n,m,d;
//    cin>>n>>m>>d;
//    int total = n*m+1;
//    int arr[total];
//    arr[0] = 0;
//    for(int i = 1;i<total;i++){
//        cin>>arr[i];
//        }
//        sort(arr+1,arr+total);
//        int ptr = (n*m)/2+1;
//        int ele = arr[ptr];
//        int steps = 0;
//        bool f = true;
//        for(int i=1;i<total;i++){
//            int diff = abs(ele-arr[i]);
//            if(diff%d == 0) steps+=(diff/d);
//            else{
//                f=false;
//                break;
//                }
//            }
//            if(f == false) cout<<-1;
//            else cout<<steps;
//            
//            return 0;
//    }

//Buiding Permutation
//int main(){
//    int n;
//    cin>>n;
//    int arr[n+1],arr1[n+1]={0};
//    for(int i=1;i<=n;i++){
//        cin>>arr[i];
//        if(arr[i]>=1 && arr[i]<=n) arr1[arr[i]]++;
//        }
//        sort(arr+1,arr+(n+1));
//        long long int a = 1,steps = 0;
//        for(int j=1;j<=n;j++){
//            if(a>n) break;
//            if(arr1[a]>0) a++;
//            if(arr[j]>=1 && arr[j]<=n) continue;
//            steps+=abs(a-arr[j]);
//            a++;
//            }
//            cout<<steps;
//            
//            return 0;
//    }

//Contest
//Red and Blue Jeans
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    int r,b,d;
//    cin>>r>>b>>d;
//    if(r>=1 && b>=1){
//        int diff = abs(r-d);
//        if(diff<=d) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        }
//        else cout<<"NO"<<endl;
//    }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int r,b,d;
//        cin>>r>>b>>d;
//        bool f = false;
//        bool flag = true;
//        while(f != true){
//            if(r>=1 && b>=1 && abs(r-b)<=d) f = true;
//            else{
//                if(r<=0 || b<=0){
//                    flag =  false;
//                    break;
//                    }
//                    else{
//                        
//                        }
//                }
//            }
//            if(flag == false) cout<<"NO"<<endl;
//        }
//    }

//The cake is a lie
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,k,right,down,result;
//        cin>>n>>m>>k;
//        if(n==1 && m==1) result = 0;
//        else{
//            if(n==1) result = m-1;
//            else if(m==1) result = n-1;
//            else{
//                right = m-1;
//                down = m*(n-1);
//                result = right+down;
//                }
//            }
//            if(result == k) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        
//        return 0;
//    }

//Building Permutations
//int main(){
//    int n,x,a=1,total=0;
//    cin>>n;
//    int arr[n+1]={0};
//    vector<int> vec;
//    for(int i=1;i<=n;i++){
//        cin>>x;
//        if(x>=1 && x<=n){
//            if(arr[x] == 0) arr[x] = 1;
//            else vec.push_back(x);
//            }
//            else vec.push_back(x);
//        }
//       sort(vec.begin(),vec.end());
//       for(int i=1;i<=n;i++){
//           if(arr[i] == 0){
//           total+=abs(i-vec[a]);
//           a++;
//           }
//           }
//           cout<<total<<endl;
//          return 0; 
//    }

//Berland Regional
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int univ[n];
//        int skills[n];
//        for(int i=0;i<n;i++) cin>>univ[i];
//        for(int i=0;i<n;i++) cin>>skills[i];
//        
//        }
//    }

//T-Primes
//int main(){
//    int n;
//    cin>>n;
//    long long int arr[n];
//    int arr1[n] = {0};
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//        if(arr[i]%2 == 0 && arr[i]>4){
//            cout<<"NO"<<endl;
//            continue;
//            }
//        int count = 0;
//        for(int j = 2;j<arr[i];j++){
//            if(arr[i]%j == 0) count++;
//            }
//       if(count == 1) cout<<"YES"<<endl;
//       else cout<<"NO"<<endl;  
//        }
//        
//        return 0;
//    }

//T-Primes
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i = 0;i<n;i++){
//        cin>>arr[i];
//        if(arr[i]%2==0 && arr[i]>4) arr[i]=0;
//        else if(arr[i] == 4) arr[i] = 1;
//        else if(arr[i]<=2) arr[i] = 0;
//        }
//        for(int i = 0;i<n;i++){
//            if(arr[i] == 0) cout<<"NO"<<endl;
//            else if(arr[i] == 1) cout<<"YES"<<endl;
//            else{
//                int count = 0;
//                for(int j=3;j*j<=arr[i];j=j+2){
//                    if(arr[i]%j == 0) count++;
//                    if(count>=2) break;
//                    }
//                    if(count == 1) cout<<"YES"<<endl;
//                    else cout<<"NO"<<endl;
//                }
//            }
//            
//            return 0;
//    }

//From T-Primes Question I learnt that only squares of prime numbers are T-Primes i.e only three divisors.
//int main(){
//    int arr[1000001]={0};
//for(int i = 1;i<=1000000;i++){
//if(i == 2) arr[i]=1;
//else if(i%2 == 0 && i>2) arr[i] = 0;
//else{
//int count = 0;
//for(int j=3;j*j<=i;j=j+2){
//if(i%j == 0) count++;
//}
//if(count == 0) arr[i] = 1;
//else arr[i] = 0;
//}
//}
//int n;
//cin>>n;
//int x;
//for(int i=0;i<n;i++){
//cin>>x;
//int root = pow(x,0.5);
//if(arr[root] == 1) cout<<"YES"<<endl;
//else cout<<"NO"<<endl;
//}
//return 0;
//}

//int main(){
//    int n=16;
//    int sq = sqrt(n);
//    cout<<sq<<endl;
//    
//    return 0;
//}

//Phoenix and Gold
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,x,sum = 0,last,all = 0;
//        cin>>n>>x;
//        int arr[n];
//    for(int i = 0;i<n;i++){
//        cin>>arr[i];
//        all+=arr[i];
//        }
//        if(all == x) cout<<"NO"<<endl;
//        else{
//            cout<<"YES"<<endl;
//        for(int i = 0;i<n;i++){
//            if((arr[i]+sum) == x){
//                int num = arr[n-1];
//                arr[n-1] = arr[i];
//                arr[i] = num;
//                sum+=arr[i];
//                cout<<arr[i]<<" ";
//                }
//                else{
//                    sum+=arr[i];
//                    cout<<arr[i]<<" ";
//                    }
//            }
//        }
//        cout<<endl;
//    }
//    return 0;  
//    }

//Phoenix and Puzzle
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long int n;
//        cin>>n;
//        long int i = 2;
//        long int j;
//    while(i<=n){
//        cout<<i<<" ";
//        i = i*2;
//        j = i/2;
//        }
//        if(j!=n) cout<<"NO"<<endl;
//        else cout<<"YES"<<endl;
//        }
//        return 0;
//    }

//Sieve of Erastothenis
//Given a number n , you need to find the all primes until that number
//int main(){
//    int n,count = 0;
//    cin>>n;
//    vector<int> vec(n+1,1);
//    vector<int> arr;
//    vec[0] = 0;
//    vec[1] = 0;
//    for(int i=2;i<=n;i++){
//        if(vec[i] == 1){
//            arr.push_back(i); 
//            for(int j=i*i;j<=n;j=j+i){
//                vec[j] = 0;
//                count++;
//                }
//        }
//        }
//        for(int i = 0;i<arr.size();i++){
//            cout<<arr[i]<<" ";
//            }
//            cout<<endl;
//            cout<<count;
//            return 0;
//    }

//Phoenix and Towers
//int main(){
//    int t;
//    cin>>t;
//while(t--){
//    int n,m,x;
//    cin>>n>>m>>x;
//    int heights[n];
//    int towers[m+1] = {0};
//    for(int i = 0;i<n;i++){
//        cin>>heights[i];
//        }
//        for(int i = 0;i<n;i++){
//    int mini = *min_element(towers+1,towers+(m+1));
//    for(int j = 1;j<=m;j++){
//        if(towers[j] == mini){
//            towers[j]+=heights[i];
//            heights[i] = j;
//            }
//            break;
//        }
//            }
//        sort(towers+1,towers+(m+1));
//        if((towers[m]-towers[1])>x) cout<<"NO"<<endl;
//        else{
//            cout<<"YES"<<endl;
//            for(int i = 0;i<n;i++) cout<<heights[i]<<" ";
//            }
//            cout<<endl;
//    }
//    return 0;
//    }

//Phoenix and towers
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,x;
//        cin>>n>>m>>x;
//        int heights[n];
//        int towers[m+1]={0};
//        for(int i = 0;i<n;i++){
//            cin>>heights[i];
//            }
//            for(int i = 0;i<n;i++){
//                int mini = *min_element(towers+1,towers+(m+1));
//                cout<<mini<<" ";
//                for(int j = 1;j<=m;j++){
//                    if(towers[j] == mini){
//                        towers[j]+=heights[i];
//                        heights[i] = j;
//                        }
//                        break;
//                    }
//                }
//                cout<<"YES"<<endl;
//                for(int i = 1;i<=m;i++) cout<<towers[i]<<" ";
//                cout<<endl;
//                for(int i = 0;i<n;i++) cout<<heights[i]<<" ";
//                cout<<endl;
//        }
//        return 0;
//    }

//Precomputation
//int main(){
//    int n,sum = 0,q;
//    cin>>n;
//    int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    for(int i = 0;i<n;i++){
//        sum+=arr[i];
//        arr[i] = sum;
//        }
//       cin>>q;
//       while(q--){
//           int l,r;
//           cin>>l>>r;
//           cout<<(arr[r]-arr[l-1])<<endl;
//           }
//
//return 0; 
//    }

//XSquare and Double Strings
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        int arr[123]={0};
//        for(int i = 0;i<s.length();i++){
//            int indii = s[i];
//            arr[indii]++;
//            }
//            bool flag = true;
//            int count = 0;
//            for(int i = 97;i<=122;i++){
//                if(arr[i] == 1){
//                    flag = false;
//                    }
//                    if(arr[i]>1) count++;
//                }
//                if(flag == false && count == 0) cout<<"No"<<endl;
//                else cout<<"Yes"<<endl;
//        }
//        return 0;
//    }

//GCD Queries
//int main(){
//int t;
//cin>>t;
//while(t--){
//int n,q;
//cin>>n>>q;
//int arr[n+1];
//int first[n+1];
//for(int i = 1;i<=n;i++){
//cin>>arr[i];
//if(i == 1){
//first[i] = __gcd(arr[i],arr[i]);
//}
//else{
//first[i] = __gcd(first[i-1],arr[i]);
//}
//}
//for(int i = n;i>=1;i--){
//if(i == n) continue;
//else{
//arr[i] = __gcd(arr[i],arr[i+1]);
//}
//}
//while(q--){
//int l,r;
//cin>>l>>r;
//int left = 0,right = 0;
//if(l>1) left = first[l-1];
//if(r<n) right = arr[r+1];
//int ans;
//if(l>1 && r<n) ans = __gcd(left,right);
//else ans = __gcd(left,right);
//cout<<ans<<endl;
//}
//}
//return 0;
//}

//Array Manipulation
//const int n = 10000010;
//long long int arr[n];
//int main(){
//    int n,m;
//    cin>>n>>m;
//    while(m--){
//        long int a , b , k;
//        cin>>a>>b>>k;
//        arr[a]+=k;
//        arr[b+1]-=k;
//        }
//    for(int i = 1;i<=n;i++){
//        arr[i]+=arr[i-1];
//        }
//        long long int maxi = *max_element(arr+1,arr+(n+1));
//        cout<<maxi<<endl;
//        
//        return 0;
//    }

//Pair Sums
//int main(){
//    int n,k,l,r;
//    cin>>n>>k;
//    int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    sort(arr,arr+n);
//    l=0;
//    r=n-1;
//    bool flag = false;
//    while(l<r){
//        if(arr[l]+arr[r]>k) r--;
//        else if(arr[l]+arr[r]<k) l++;
//        else{
//            flag = true;
//            break;
//            }
//        }
//        if(flag == true) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        
//        return 0;
//    }

//Pair Sums
//const int N = 1000010;
//int hashhi[N];
//int main(){
//int n , k ;
//cin>>n>>k;
//for( int i = 0 ; i < n ; i++ ){
//int x;
//cin>>x;
//hashhi[x]++;
//}
//bool flag = false;
//for( int i = 0 ; i <= N ; i++ ){
//int rem;
//if(hashhi[i]>0){
//int rem = k-i;
//if( hashhi[rem] > 0 ){
//flag = true;
//break;
//}
//}
//}
//if(flag == true) cout<<"YES"<<endl;
//else cout<<"NO"<<endl;
//
//return 0;
//}

//Pairs in STL
//int main(){
//    pair<int,int> p[3];
//    for(int i = 0;i<3;i++){
//        cin>>p[i].first;
//        cin>>p[i].second;
//        }
//        for(int i = 0;i<3;i++) cout<<p[i].first<<" "<<p[i].second<<endl;
//        
//        return 0;
//    }

//Pairs of Vectors
//int main(){
//    vector<pair<int,int> > p;
//    int n;
//    cin>>n;
//    int x,y;
//    for(int i = 0;i<n;i++){
//        cin>>x>>y;
//        p.push_back(make_pair(x,y));
//        }
//        cout<<p.size()<<endl;
//        for(int i = 0;i<n;i++){
//            cout<<p[i].first<<" "<<p[i].second<<endl;
//            }
//            return 0;
//    }

//Building Permutations
//int main(){
//    int n;
//    cin>>n;
//    int arr[n+1]={0};
//    vector<int> vec;
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        if(arr[i]>=1 && arr[i]<=n){
//            vec.push_back(arr[i]);
//            }
//        }
//        sort(arr+1,arr+(n+1));
//        sort(vec.begin(),vec.end());
//        for(int i = 0;i<vec.size();i++){
//            if(vec[i] = vec[i+1]) vec[i] = 0;
//            }
//            sort(vec.begin(),vec.end());
//            int a = 0;
//            while(vec[a] == 0) a++;
//        for(int i = 1;i<=n;i++){
//            if(vec[a] == i) continue;
//            
//            }
//    }

//Arrival of the General
//int main(){
//    int n,maxi = 0,mini = 200,max_indii,min_indii,total = 0;
//    cin>>n;
//    int arr[n+1];
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        if(arr[i]>maxi){
//            maxi = arr[i];
//            max_indii = i;
//            }
//            if(arr[i]<=mini){
//                mini = arr[i];
//                min_indii = i;
//                }
//        }
//        if(min_indii<max_indii) min_indii++;
//        //cout<<max_indii<<" "<<min_indii<<endl; 
//        total = (max_indii - 1)+(n-min_indii);
//        cout<<total<<endl;
//        
//        return 0;
//    }

//Beautiful Matrix
//int main(){
//    vector<int> arr[5];
//    int rw,cl,total = 0;
//    for(int i = 0;i<5;i++){
//        for(int j = 0;j<5;j++){
//            int x;
//            cin>>x;
//            arr[i].push_back(x);
//            if(x == 1){
//                rw = i;
//                cl = j;
//                }
//            }
//        }
//        total = abs(2-rw)+abs(2-cl);
//        cout<<total<<endl;
//        
//        return 0;
//    }

//Black Jack
//int main(){
//    int n,diff,ans = 0;
//    cin>>n;
//    diff = n-10;
//    if(diff == 0) ans = 0;
//    else if(diff == 10) ans = 15;
//    else if(diff == 1 || diff == 11) ans = 4;
//    else if(diff>=2 && diff<=9) ans = 4;
//    cout<<ans<<endl;
//    
//    return 0;
//    }

//Petya and strings
//int main(){
//    string s1,s2;
//    int ans = 0;
//    cin>>s1;
//    cin>>s2;
//    for(int i = 0;i<s1.length();i++){
//        int one = s1[i];
//        int two = s2[i];
//        if(one<97) one = one+32;
//        if(two<97) two = two+32;
//        if(one>two){
//            ans = 1;
//            break;
//            }
//        else if(two>one){
//            ans = -1;
//            break;
//            }
//        }
//        cout<<ans<<endl;
//        
//        return 0;
//    }

//Iterators on Vectors
//int main(){
//    vector<int> vec = {2,4,6,8,10};
//    vector<int> :: iterator it;
//    for(it=vec.begin();it!=vec.end();++it){
//        cout<<(*it)<<endl;
//        }
//        
//        return 0;
//    }

//Iterators on vector of pairs
//int main(){
//    int n;
//    cin>>n;
//    vector<pair<int,int> > vec(n);
//    vector<pair<int,int> > :: iterator it;
//    for(it = vec.begin();it!=vec.end();++it){
//        int firsti,secondi;
//        cin>>firsti>>secondi; 
//        it->first = firsti;
//        it->second = secondi;       
//        }
//        for(it = vec.begin();it!=vec.end();++it){
//        cout<<it->first<<" "<<it->second<<endl;   
//        }
//        
//        return 0;
//    }

//Sale
//int main(){
//    int n,m,i=0,sum = 0;
//    cin>>n>>m;
//    int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    sort(arr,arr+n);
//    while(arr[i]<=0 && i<m){
//        sum=sum+arr[i];
//        i++;
//        }
//        cout<<abs(sum)<<endl;
//        
//        return 0;
//    }

//Life Without Zeroes
//int main(){
//    int a,b,c,new_a,new_b,new_c;
//    vector<int> a1;
//    vector<int> a2;
//    vector<int> a3;
//    cin>>a>>b;
//    new_a = a;
//    new_b = b;
//    c = a+b;
//    new_c = c;
//    while(new_a!=0){
//        a1.push_back(new_a%10);
//        new_a = new_a/10;
//        }
//        while(new_b!=0){
//            a2.push_back(new_b%10);
//            new_b = new_b/10;
//            }
//                int len_a = a1.size();
//                int len_b = a2.size();
//                for(int y = a1.size()-1;y>=0;y--){
//                    
//                    }
//    }

//Life without zeroes
//int main(){
//    long int a,b,c,num_a = 0,num_b = 0,num_c = 0,i = 0;
//    cin>>a>>b;
//    c=a+b;
//    while(a!=0){
//        int ele = a%10;
//        if(ele!=0){
//            num_a = num_a+ele*pow(10,i);
//            i++;
//            }
//            a = a/10;
//        }
//        i = 0;
//        while(b!=0){
//            int ele = b%10;
//            if(ele!=0){
//                num_b = num_b+ele*pow(10,i);
//                i++;
//                }
//                b = b/10;
//            }
//            i = 0;
//            while(c!=0){
//                int ele = c%10;
//                if(ele!=0){
//                    num_c = num_c+ele*pow(10,i);
//                    i++;
//                    }
//                    c = c/10;
//                }
//            if(num_a+num_b == num_c) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//            
//            return 0;
//    }

//Xenia and Ringboard
//int main(){
//    long long int n,m,total = 0,indii = 1,work = 1;
//    cin>>n>>m;
//    int arr[m+1];
//    for(int i = 1;i<=m;i++) cin>>arr[i];
//    while(work<=m){
//        if(indii<=arr[work]){
//            int ele = arr[work]-indii;
//            total+=ele;
//            indii = arr[work];
//            }
//            else{
//                int ele = (n-indii)+arr[work];
//                total+=ele;
//                indii = arr[work];
//                }
//                work++;
//        }
//        cout<<total<<endl;
//return 0;    
//    }

//Contest
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        string s;
//        cin>>s;
//        vector<int> arr(100,-1);
//        bool flag = true;
//      for(int i = 0;i<s.length();i++){
//          int indii = s[i];
//          if(arr[indii]!=(i-1)){
//              flag = false;
//              break;
//              }
//              else if(arr[indii] == (i-1)) arr[indii] = i;
//          }
//           if(flag == true) cout<<"YES"<<endl;
//           else cout<<"NO"<<endl;
//        }
//        
//        return 0;
//    }

//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        string s;
//        cin>>s;
//        bool visit[26] = {false};
//        bool flag = true;
//        for(int i = 0;i<s.length();i++){
//            char ch = s[i];
//            if(visit[ch-'A']){
//                if(s[i-1]!=ch){
//                    flag = false;
//                    break;
//            } 
//            }
//                    else{
//                        visit[ch-'A'] = true;
//                        }
//            }
//            if(flag == true) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//    }

//Do not be Distracted
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        string s;
//        cin>>s;
//        int visited[100]={0};
//        bool flag = true;
//        for(int i = 0;i<s.length();i++){
//            int indii = s[i];
//            if(visited[indii] == 0) visited[indii] = 1;
//            else if(visited[indii] == 1 && s[i] == s[i-1]) continue;
//            else if(visited[indii] == 1 && s[i]!=s[i-1]){
//                flag = false;
//                break;
//                }
//            }
//            if(flag == true) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Not Adajent Matrix
//int main(){
//    int n,first,last;
//    cin>>n;
//    first = 1;
//    last = n;
//    vector<int> vec[n+1];
//    for(int i = 1;i<=n;i++){
//        for(int j = 1;j<=n;j++){
//            vec[i].push_back();
//            }
//        }
//        return 0;
//    }

//Puzzles
//int main(){
//    int n,m;
//    cin>>n>>m;
//    int pieces[m];
//    for(int i=0;i<m;i++) cin>>pieces[i];
//    sort(pieces,pieces+m);
//    int start = 0,end = n-1,mini = 1000;
//    vector<int> diff;
//    while(end!=m){
//        int ele = pieces[end]-pieces[start];
//        diff.push_back(ele);
//        start++;
//        end++;
//        }
//        for(int i = 0;i<diff.size();i++){
//            mini = min(mini,diff[i]);
//            }
//            cout<<mini<<endl;
//            
//            return 0;
//    }

//Next Test
//int main(){
//    int n,indii=0;
//    cin>>n;
//    int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    sort(arr,arr+n);
//    for(int i = 0;i<n;i++){
//        //cout<<indii<<" ";
//        if(arr[i]+1!=arr[i+1]){
//            indii = arr[i];
//            break;
//            }
//        }
//        cout<<(indii+1)<<endl;
//        
//        return 0;
//    }

//Kuriyama stones
//int main(){
//    long long int n,sum = 0,m,type,l,r,ans = 0;
//    cin>>n;
//    long long int arr[n+1]={0};
//    long int stn[n+1]={0};
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        sum+=arr[i];
//        stn[i] = sum;
//        }
//        sum = 0;
//        sort(arr,arr+(n+1));
//        for(int i = 1;i<=n;i++){
//            sum+=arr[i];
//            arr[i] = sum;
//            }
//            cin>>m;
//            while(m--){
//                cin>>type>>l>>r;
//                if(type == 1) ans = stn[r]-stn[l-1];
//                else if(type == 2) ans = arr[r]-arr[l-1];
//                cout<<ans<<endl;
//                }
//                
//                return 0;
//    }

//The Fibonacci Segment
//int main(){
//    int n;
//    cin>>n;
//    int arr[n+1]={0};
//    for(int i = 1;i<=n;i++) cin>>arr[i];
//    for(int i = 3;i<=n;i++){
//        if(arr[i] == arr[i-1]+arr[i-2]) arr[i]=1;
//        }
//        arr[1] = 1;
//        arr[2] = 1;
//        int maxi = -1,now=0;
//        for(int i = 1;i<=n;){
//            if(arr[i] == 1){
//                while(arr[i] == 1){
//                    now++;
//                    i++;
//                    }
//                    maxi = max(maxi,now);
//                }
//                else if(arr[i] == 0) i++;
//                now=0;
//            }
//            cout<<maxi<<endl;
//            
//            return 0;
//    }

//The Fibonacci segment
//int main(){
//    long int n,maxi = 2,final_maxi = -1;
//    cin>>n;
//    long long int arr[n+1]={0};
//    for(int i = 1;i<=n;i++) cin>>arr[i];
//    for(int i = 3;i<=n;i++){
//        if(arr[i] == arr[i-1]+arr[i-2]) maxi++;
//        else if(arr[i]!=arr[i-1]+arr[i-2]){
//            final_maxi = max(final_maxi,maxi);
//            if(i!=n) maxi = 2;
//            }
//        }
//        final_maxi = max(final_maxi,maxi);
//        cout<<final_maxi<<endl;
//        return 0;
//    }

//Xenia and divisors
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    sort(arr,arr+n);
//    bool flag = true;
//    for(int i = 0;i<n;i++){
//        if(arr[i] == 0) continue;
//        vector<int> vec;
//        vec.push_back(arr[i]);
//        arr[i] = 0;
//        for(int j=i;j<n;j++){
//            if(vec.size() == 3) break;
//            if(arr[j]%vec[vec.size()-1]){
//                vec.push_back(arr[j]);
//                arr[j] = 0;
//                }
//            }
//            if(vec.size() != 3){
//                flag = false;
//                break;
//                }
//for(int a = 0;a<vec.size();a++) cout<<vec[i]<<" ";
//cout<<endl; 
//        }
//        if(flag == false) cout<<-1<<endl;
//        
//        return 0;
//    }

//Nastia
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long int a,b;
//        cin>>a>>b;
//        long long int x=a,y,z=a;
//        while(z!=(a*b)){
//            z = z+a;
//            }
//            y = z-x;
//            if(y%a!=0) cout<<"NO"<<endl;
//            else{
//                cout<<"YES"<<endl;
//                cout<<x<<" "<<y<<" "<<z<<endl;
//                }
//        }
//        
//        return 0;
//    }

//vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
//vector<int> news;
//news = ranked;
//    int rank = 1,indii = ranked.size()-1;
//for(int i = 0;i<ranked.size()-1;i++){
//if(i==0) news[0] = 1;
//    else if(ranked[i]!=ranked[i-1]){
//        rank++;
//        ranked[i] = rank;
//    }
//    else if(ranked[i] == ranked[i+1]) ranked[i] = rank;
//}
//    for(int i = 0;i<player.size();i++){
//        if(player[i]<ranked[indii]) player[i] = news[indii]+1;
//        else if(player[i] == ranked[indii]) player[i] = news[indii];
//        else if(player[i]>ranked[indii]){
//            while(player[i]>=ranked[indii+1] && indii>=0) indii--;
//            player[i] = news[indii];
//        }
//    }
//    return player;
//}

//Sail
//int main(){
//    long int t,sx,sy,ex,ey,i=0;
//    cin>>t>>sx>>sy>>ex>>ey;
//    char x,y;
//    string direction;
//    cin>>direction;
//    if(ex>sx) x='E';
//    else if(sx>ex) x='W';
//    else x='Z';
//    if(ey>sy) y='N';
//    else if(sy>ey) y='S';
//    else y='Z';
//    bool skip = false;
//    bool flag = false;
//    for(;i<t;i++){
//        if(skip == true) skip = false;
//        else skip = true;
//        if(direction[i] == 'N'){
//            if(y=='N') sy++;
//            else{
//                if(skip == true) sy = sy;
//                else sy++;
//                }
//            }
//            else if(direction[i] == 'S'){
//                if(y=='S') sy--;
//            else{
//                if(skip == true) sy = sy;
//                else sy--; 
//                }
//                }
//                else if(direction[i] == 'E'){
//                if(x=='E') sx++;
//            else{
//                if(skip == true) sx = sx;
//                else sx++;
//                }
//                }
//                else if(direction[i] == 'W'){
//                if(x=='W') sx = sx;
//            else{
//                if(skip == true) continue;
//                else sx--;
//                }
//                }
//                
//                if(sx == ex && sy == ey){
//                    flag = true;
//                    break;
//                    }
//        }
//        if(flag == true) cout<<i+1<<endl;
//        else cout<<-1<<endl;
//        
//        return 0;
//    }

//Find Marble
//int main(){
//    int n,s,t,times = 0;
//    cin>>n>>s>>t;
//    int arr[n+1];
//    for(int i = 1;i<=n;i++) cin>>arr[i];
//    if(s == t) cout<<0<<endl;
//    else{
//    bool flag = false;
//    while(n--){
//        s = arr[s];
//        times++;
//        if(s == t){
//            flag = true;
//            break;
//            }
//        }
//        if(flag == true) cout<<times<<endl;
//        else cout<<-1<<endl;
//    }
//        return 0;
//    }

//Comapre Strings
//int check(string s1,string s2);
//int main(){
//    string s1,s2;
//    cin>>s1>>s2;
//   int ans = check(s1,s2);
//    if(ans == 1) cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;
//    
//    return 0;
//    }
//    
//    int check(string s1,string s2){
//        int len1 = s1.length();
//        int len2 = s2.length();
//        if(len1!=len2) return 0;
//        else{
//            int change = 0;
//            char first1,first2,second1,second2;
//            bool f = true,flag = true;
//            for(int i = 0;i<len1;i++){
//                if(s1[i]!=s2[i]){
//                    change++;
//                    if(f == true){
//                        first1 = s1[i];
//                        second1 = s2[i];
//                        f=false;
//                        }
//                        else{
//                            first2 = s1[i];
//                            second2 = s2[i];
//                            }
//                    }
//                    if(change == 3){
//                        flag = false;
//                        break;
//                        }
//                }
//                if(flag == false) return 0;
//                else{
//                    if(first1 == second2 && first2 == second1) return 1;
//                    else return 0;
//                    }
//            }
//        }

//Sereja and array
//int main(){
//    int n,m;
//    cin>>n>>m;
//    int arr[n+1];
//    for(int i = 1;i<=n;i++) cin>>arr[i];
//    int type,indii,value,all_value,sum = 0,print_indii;
//    while(m--){
//        cin>>type;
//        if(type == 1){
//            cin>>indii>>value;
//            arr[indii] = value;
//            }
//            else if(type == 2){
//                cin>>all_value;
//                sum+=all_value;
//                }
//                else{
//                    cin>>print_indii;
//                    int ans = arr[print_indii];
//                    cout<<(ans+sum)<<endl;
//                    }
//        }
//        return 0;
//    }

//Sereja and Suffixes-- Fail Appraoch
//int main(){
//    int n,m,uniquee=0,l;
//    cin>>n>>m;
//    int arr[n+1];
//    int arr1[n+1]={0};
//    int prefix_sum[100000] = {0};
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        if(prefix_sum[arr[i]] == 0){
//            prefix_sum[arr[i]]++;
//            uniquee++;
//            arr1[i] = uniquee;
//            }
//            else{
//                prefix_sum[arr[i]]++;
//                arr1[i] = uniquee;
//                }
//        }
//        while(m--){
//            cin>>l;
//            cout<<arr1[l]<<endl;
//            }
//            return 0;
//    }

//Sereja and suffixes
//int main(){
//    int n,m,counter = 0,l;
//    cin>>n>>m;
//    int arr[n+1];
//    int arr1[100001]={0};
//    for(int i = 1;i<=n;i++) cin>>arr[i];
//    for(int i = n;i>=1;i--){
//        //cout<<counter<<endl;
//        if(arr1[arr[i]] == 0){
//            arr1[arr[i]]++;
//            counter++;
//            }
//        arr[i] = counter;
//        }
//        while(m--){
//            cin>>l;
//            cout<<arr[l]<<endl;
//            }
//            return 0;
//    }

//Pashmak and Flowers
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    int arr1[100000]={0};
//    for(int i = 0;i<n;i++){
//        cin>>arr[i];
//        arr1[arr[i]]++;
//        }
//        sort(arr,arr+n);
//        int max_diff = arr[n-1]-arr[0],sum = 0;
//        for(int i = 0;i<n;i++){
//            int ele = arr[i];
//            int ele2 = ele+max_diff;
//            if(arr1[ele2]>0){
//                int ways = arr1[ele]*arr1[ele2];
//                sum+=ways;
//                arr1[ele] = 0;
//                arr1[ele2] = 0;
//                }
//            }
//            cout<<max_diff<<" "<<sum<<endl;
//            
//            return 0;
//    }

//Fixed Points
//int counts(int arr[ ],int n){
//    bool flag = false;
//    for(int i = 0;i<n;i++){
//        if(arr[i]!=i){
//            if(arr[arr[i]] == i){
//                flag = true;
//                break;
//                }
//            }
//        }
//        if(flag == false) return 1;
//        else return 2;
//    }
//int main(){
//    int n,count = 0;
//    cin>>n;
//    int arr[n];
//    for(int i = 0;i<n;i++){
//        cin>>arr[i];
//        if(arr[i] == i) count++;
//        }
//        if(count == n) cout<<count<<endl;
//        else{
//        int contri = counts(arr,n);
//        cout<<(count+contri)<<endl;
//        }
//        return 0;
//    }

//Hungry Sequence
//int main(){
//    int n,count = 1;
//    cin>>n;
//    if(n == 1) {
//        cout<<2<<endl;
//        return 0;
//    }
//    for(int i = 3;i<=10000000;i=i+2){
//        bool flag = false;
//        for(int j=2;j*j<=i;j++){
//            if(i%j == 0){
//                flag = true;
//                break;
//                }
//            }
//            if(flag == false) {
//                count++;
//                cout<<i<<" ";
//            }
//            if(count == n) break;
//        }
//        cout<<endl;
//        
//        return 0;
//    }

//Valhalla Siege
//int main(){
//    int n,q,sum = 0,rem = 0,indii = 0;
//    cin>>n>>q;
//    int arr[n];
//    int arrows[q];
//    for(int i = 0;i<n;i++){
//        cin>>arr[i];
//        sum+=arr[i];
//        }
//        for(int i = 0;i<q;){
//            cin>>arrows[i];
//            if(rem<arrows[i]) {
//                arrows[i] = arrows[i]-rem;
//                indii++;
//                }
//            else {
//                rem = rem-arrows[i];
//                i++;
//            }
//            if(arr[indii]<arrows[i]){
//                arrows[i] = arrows[i]-arr[indii];
//                indii++;
//                }
//                else if(arr[indii]>=arrows[i]) {
//                    rem = arr[indii]-arrows[i];
//                    i++;
//                }
//                if(indii == n) indii = 0;
//                if(arrows[i] == 0) i++;
//                cout<<(n-indii)<<endl;
//            }
//            return 0;
//    }

//Valhalla Siege
//int main(){
//    int n,q;
//    cin>>n>>q;
//    int a[n],k[q];
//    for(int i = 0;i<n;i++) cin>>a[i];
//    for(int i = 0;i<q;i++) cin>>k[i];
//    int rem = a[0],indii = 0;
//    for(int i = 0;i<q;){
//        if(rem<k[i]){
//            k[i] = k[i]-rem;
//            indii++;
//            if(indii == n){
//                indii = 0;
//                rem = a[indii];
//                }
//                else rem = a[indii];
//            }
//            else if(rem == k[i]){
//                k[i] = 0;
//                rem = 0;
//                indii++;
//                rem = a[indii];
//                }
//            else{
//                rem = rem-k[i];
//                k[i] = 0;
//                }
//                if(k[i] == 0){
//                    i++;
//                    cout<<(n-indii)<<endl;
//                    }
//                //cout<<(n-indii)<<endl;
//        }
//        return 0;
//    }

//Valhalla Siege
//int main(){
//    //int arr[6]={1,3,6,8,9,10};
//    int n,x;
//    cin>>n;
//    int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    cin>>x;
//    int ele = upper_bound(arr,arr+6,x)-arr;
//    cout<<ele<<endl;
//    }

//#include <multiset>
//int main(){
//    multiset<int> vec;
//    int n,x,ele;
//    cin>>n;
//for(int i = 0;i<n;i++){
//    cin>>x;
//    vec.insert(x);
//    }
//    //sort(vec.begin(),vec.end());
////    vector<int>::iterator lower,upper;
////    cin>>ele;
////    lower = upper_bound(vec.begin(),vec.end(),ele);
////    cout<<(*lower)<<endl;
//vec.erase(7);
//for(auto ans:vec) cout<<ans<<" ";
//cout<<endl;
//
//return 0;
//    }

//Painting eggs
//int main(){
//    int n;
//    cin>>n;
//    int A,G,A_sum = 0,G_sum = 0;
//    string S;
//    for(int i = 0;i<n;i++){
//        cin>>A>>G;
//        int first = (A_sum+A)-G_sum;
//        int second = (G_sum+G)-A_sum;
//        if(first<=second) {
//            A_sum+=A;
//            S = S+"A";
//        }
//        else{
//            G_sum+=G; 
//           S = S+"G";
//        }
//        }
//        int diff = abs(A_sum-G_sum);
//        if(diff>500) cout<<-1<<endl;
//        else cout<<S<<endl;
//        
//        return 0;
//    }

//Eshag love Big Arrays
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,sum = 0,ans = 0;
//        cin>>n;
//        vector<int> arr(n);
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//            }
//            //cout<<sum<<endl;
//            bool flag = true;
//            while(flag == true){
//                int count = 0;
//                int avg = sum/arr.size();
//                cout<<arr.size()<<endl;
//                //cout<<avg<<endl;
//                for(auto it = arr.begin();it!=arr.end();++it){
//                    if(*it>avg){
//                        sum-=*it;
//                        //cout<<sum<<endl;
//                        arr.erase(it);
//                        count++;
//                        }
//                    }
//                    if(count == 0) flag = false;
//                    else ans+=count;
//                }
//                cout<<ans<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,sum = 0,ans = 0;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//            }
//            int track = n;
//            bool flag = true;
//            while(flag == true){
//                int count = 0;
//                int avg = sum/track;
//                for(int i = 0;i<n;i++){
//                    if(arr[i]>avg){
//                        sum-=arr[i];
//                        track--;
//                        count++;
//                        arr[i] = 0;
//                        }
//                    }
//                    if(count == 0) flag = false;
//                    else ans+=count;
//                }
//                cout<<ans<<endl;
//        }
//        return 0;
//    }

//Sifid and strange subsequences
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        long int arr[n+1];
//        for(int i = 1;i<=n;i++) cin>>arr[i];
//        sort(arr+1,arr+(n+1));
//        int i = n-1,j = n,maxi = n;
//            for(;i>=1;){
//                long int diff = abs(arr[i]-arr[j]);
//                    if(diff<arr[maxi]) maxi--;
//                    i--;
//                    j--;
//                }
//                cout<<maxi-i<<endl;
//        }
//        return 0;
//    }

//XOR and OR
//int main(){
//string a = "0";
//string a1,b;
//cin>>a1>>b;
//int len_a = a1.length();
//int len_b = b.length();
//if(len_a!=len_b){
//cout<<"NO"<<endl;
//return 0;
//}
//else{
//a = a+a1;
//a = a+"0";
//b = "0"+b+"0";
////cout<<b<<endl;
//bool flag=true;
//for(int i=1;i<=len_a;i++){
//if(a[i]!=b[i]){
//if(a[i-1]=='1' || a[i+1]=='1'){
//    a[i] = b[i];
//    continue;
//}
//else{
//flag = false;
//break;
//}
//}
//}
//if(flag == false) cout<<"NO"<<endl;
//else cout<<"YES"<<endl;
//}
//return 0;
//}

//TetraHedron
//int main(){
//    int n;
//    cin>>n;
//    int sum = 1;
//    int i = 1;
//    int add = 1;
//    while(i!=n){
//        add = 2*add;
//        sum = sum+add;
//        i++;
//        }
//        cout<<sum<<endl;
//        
//        return 0;
//    }

//Little Girl and Maximum Sum
//int main(){
//    int n,q;
//    cin>>n>>q;
//    int arr[n+1];
//    int hash[n+2]={0};
//    for(int i = 1;i<=n;i++) cin>>arr[i];
//    while(q--){
//        int l,r;
//        cin>>l>>r;
//        hash[l]++;
//        hash[r+1]--;
//        }
//        for(int i = 1;i<=n;i++){
//            hash[i] = hash[i]+hash[i-1];
//            }
//            sort(arr+1,arr+(n+1));
//            sort(hash+1,hash+(n+1));
//            long long int sum = 0;
//            for(int i = 1;i<=n;i++){
//                sum = sum+hash[i]*arr[i];
//                }
//                cout<<sum<<endl;    
//                
//                return 0;
//    }

//Books
//int main(){
//    long long int n,t,sum = 0,count = 0;
//    cin>>n>>t;
//    int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    sort(arr,arr+n);
//    for(int i = 0;i<n;i++){
//        if(sum+arr[i]<=t) {
//            sum+=arr[i];
//            count++;
//        }
//        else break;
//        }
//        cout<<count<<endl;
//        
//        return 0;
//        
//    }

//Books
//int main(){
//    long long int n,t,j=0,sum=0,length=0,indii=0,maxi=-1;
//    cin>>n>>t;
//    int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    while(j!=n){
//        if(sum+arr[j]<=t){
//            sum+=arr[j];
//            j++;
//            length++;
//            }
//            else{
//                while(sum+arr[j]>t){
//                    sum = sum-arr[indii];
//                    indii++;
//                    length--;
//                    }
//                }
//                maxi = max(maxi,length);
//        }
//        cout<<maxi<<endl;
//        
//        return 0;
//    }

//Prime Matrix
//int main(){
//    vector<int> vec;
//    int sizes = 100010;
//    vec.push_back(0);
//    for(int i = 2;i<=sizes;i++){
//        bool flag = true;
//        for(int j = 2;j*j<=i;j++){
//            if(i%j == 0){
//                flag = false;
//                break;
//                }
//            }
//            if(flag == true) vec.push_back(i);
//        }
//    int n,m;
//    cin>>n>>m;
//    unordered_map<int ,long long int> row;
//    unordered_map<int,long long int> column;
//    for(int i = 1;i<=n;i++){
//        for(int j = 1;j<=m;j++){
//            int ele;
//            cin>>ele;
//            int primii = lower_bound(vec.begin(),vec.end(),ele)-vec.begin();
//            int now = vec[primii];
//            long long int diff = now-ele;
//            if(row.find(i)!=row.end()){
//                row[i] = row[i]+diff;
//                }
//                else{
//                    row[i] = diff;
//                    }
//                    if(column.find(j)!=column.end()){
//                        column[j] = column[j]+diff;
//                        }
//                        else{
//                            column[j] = diff;
//                            }
//            }
//        }
//        long long int high = 1000000;
//        for(auto it = row.begin();it!=row.end();++it){
//            high = min(high,it->second);
//            }
//        long long int high1 = 1000000;
//        for(auto it1 = column.begin();it1!=column.end();++it1){
//            high1 = min(high1,it1->second);
//            }
//            cout<<min(high,high1);
//            
//            return 0;
//    }

//Boredom
//int main(){
//    int n;
//    cin>>n;
//    int arr[n+1]={0};
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        }
//        sort(arr+1,arr+(n+1),greater<int>());
//        for(int i = 1;i<=n;i++){
//            
//            }
//    }

//Mean Inequality
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,index = 0;
//        cin>>n;
//        int sizes = 2*n;
//        long long int arr[sizes];
//        long long int ans[sizes];
//        for(int a = 0;a<sizes;a++) cin>>arr[a];
//        sort(arr,arr+sizes);
//        int i = 0,j = sizes-1;
//        while(i<=j){
//            if(i == j){
//                ans[index] = arr[i];
//                break;
//                }
//                else{
//                ans[index] = arr[i];
//                index++;
//                ans[index] = arr[j];
//                index++;
//                i++;
//                j--;
//              }
//            }
//            for(int b = 0;b<sizes;b++) cout<<ans[b]<<" "; 
//            cout<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int n;
//    cin>>n;
//    vector<int> vec(n);
//    for(int i = 0;i<n;i++) cin>>vec[i];
//    auto it = lower_bound(vec.begin(),vec.end(),5);
//    --it;
//    cout<<*it<<endl;
//    vec.erase(it);
//    for(auto it1 = vec.begin();it1!=vec.end();++it1) cout<<*it1<<" ";
//    return 0;
//    }

//Potions Hard Version
//int main(){
//    int n,health = 0,count = 0;
//    cin>>n;
//    int arr[n+1];
//    vector<int> vec(n+1);
//    vec[0] = 1000000001;
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        vec[i] = arr[i];
//        }
//        sort(vec.begin()+1,vec.end());
//        for(int i = 1;i<=n;i++){
//            if(arr[i]>=0){
//                health+=arr[i];
//                count++;
//                }
//                else{
//                    if(arr[i]+health<0) continue;
//                    else{
//                        auto it = lower_bound(vec.begin(),vec.end(),arr[i]);
//                        ++it;
//                        if(*it>arr[i] && *it<0) continue;
//                        else{
//                            health+=arr[i];
//                            count++;
//                            }
//                        }
//                    }
//            }
//            cout<<count<<endl;
//            
//            return 0;
//    }

//I Hate 111
//int main(){
//    int arr[8] = {11,111,1111,11111,111111,1111111,11111111,1000000001};
//    int t;
//    cin>>t;
//    while(t--){
//        int x;
//        cin>>x;
//        bool flag = false;
//        while(x>11){
//            for(int i = 0;i<7;i++){
//                //if(arr[i]>x) break;
//                if(x%arr[i] == 0){
//                    flag = true;
//                    break;
//                    }
//            }
//            if(flag == false){
//                        int a = 0;
//                        while(arr[a]<x) a++;
//                        a--;
//                        x = x-arr[a];
//                        }
//                        else break;
//                }
//            if(flag == true) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Game of Life
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        string s;
//        cin>>s;
//        for(int i = 1;i<=m;i++){
//            for(int j = 0;j<s.length();j++){
//                if(s[j] == '0'){
//                    int left = 0,right = 0;
//                    if(j>0){
//                        if(s[j-1] == '1') left = j-1;
//                        }
//                        if(i<s.length()-1){
//                            if(s[j+1] == '0') right = j+1;
//                            }
//            if((left!=0 && right!=0) || (left == 0 && right == 0)) continue;
//            else s[j]='1';
//                    }
//                }
//            }
//            cout<<s<<endl;
//        }
//        return 0;
//    }

//Game of Life
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        string s;
//        cin>>s;
//        int pre = 0,post=0;
//        while(m--){
//            for(int i = 0;i<s.length();i++){
//                if(s[i] == '0'){
//                    if((i+1)<s.length()-1){
//                        if(s[i+1] == '1') post = 1;
//                        else post = 0;
//                        }
//                        else post = 0;
//                        if((i-1)>0){
//                            if(s[i-1] == '1') pre = 1;
//                            else pre = 0;
//                            }
//                            else pre = 0;
//                }
//                    if(post == 0 && pre!=0) s[i]='1';
//                    else if(post!=0 && pre == 0) s[i]='1';
//                    pre = 0;
//                }
//            }
//            cout<<s<<endl;
//        }
//    }

//Game of Life
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        string s;
//        cin>>s;
//        set<int> st;
//        for(int i = 0;i<s.length();i++){
//            if(s[i] == '0') st.insert(i);
//            }
//            while(m--){
//                int pre,post;
//                for(auto it = st.begin();it!=st.end();++it){
//                    int indii = *it;
//                    if(indii-1>=0){
//                        if(s[indii-1] == '1') pre = 1;
//                        else pre = 0;
//                        }
//                        else pre = 0;
//                        if(indii+1<=s.length()-1){
//                            if(s[indii+1] == '1') post = 1;
//                            else post = 0;
//                            }
//                            else post = 0;
//                            if(post == 0 && pre!=0){
//                                s[indii] == '1';
//                                st.erase(indii);
//                                }
//                                else if(post!=0 && pre == 0){
//                                    s[indii] == '1';
//                                    st.erase(indii);
//                                    }
//                    }
//                }
//                cout<<s<<endl;
//        }
//        return 0;
//    }

//Games Of Life
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        if(m>n) m=n;
//        string s;
//        cin>>s;
//        set<int> st;
//        for(int i = 0;i<n;i++){
//            if(s[i] == '0') st.insert(i);
//            }
//            while(m--){
//                int count = 0;
//                vector<int> vec;
//                for(auto it = st.begin();it!=st.end();++it){
//                    int indii = *it;
//                    if(s[indii+1] == '1' && s[indii-1]!='1'){
//                        count++;
//                        vec.push_back(indii);
//                        st.erase(indii);
//                        }
//                        else if(s[indii+1] != '1' && s[indii-1]=='1'){
//                        count++;
//                        vec.push_back(indii);
//                        st.erase(indii);
//                        }
//                    }
//                    if(count == 0) break;
//                    else{
//                        for(int i = 0;i<count;i++){
//                            s[vec[i]] = '1';
//                            }
//                        }
//                }
//                cout<<s<<endl;
//        }
//        return 0;
//    }

//Game of life
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        if(m>n) m = n;
//        string s;
//        cin>>s;
//        s = s+'0';
//        s = '0'+s;
//        string b = s;
//        for(int i = 1;i<=m;i++){
//            for(int i = 1;i<=n;i++){
//                if(s[i-1]+s[i+1] == 97) b[i] = '1';
//                }
//                if(s == b) break;
//                else s = b;
//            }
//            for(int i = 1;i<=n;i++) cout<<s[i];
//            cout<<endl;
//        }
//        return 0;
//    }

//Boredom
//const int sizes = 100001;
//int arr[sizes];
//int main(){
//    int n;
//    cin>>n;
//    //int arr[n+1];
//    for(int i = 1;i<=n;i++){
//        int x;
//        cin>>x;
//        arr[x]+=x;
//        }
//    for(int i = 1;i<100001;i++){
//        arr[i] = max(arr[i-1],arr[i]+arr[i-2]);
//        }
//        cout<<arr[100000];
//    }

//Exams
//int main(){
//    int n;
//    cin>>n;
//    map<int,int> mp;
//    for(int i = 0;i<n;i++){
//        int a,b;
//        cin>>a>>b;
//        mp[a] = b;
//    }
//    int arr[n];
//    int a = 0;
//    for(auto it = mp.begin();it!=mp.end();++it){
//        int ele = mp[it];
//        arr[a] = mp[ele];
//        a++;
//        }
//        bool flag = true;
//        for(int i = 0;i<n-1;i++){
//            if(arr[i]>arr[i+1]){
//                flag = false;
//                break;
//                }
//            }
//            if(flag == false) cout<<mp[n-1].second;
//            else cout<<mp[n-1]<<endl;
//    }

//Exams
//int main(){
//    int n;
//    cin>>n;
//    map<long int,long int> mp;
//    while(n--){
//        int a,b;
//        cin>>a>>b;
//        mp[a] = b;
//        }
//        auto it = mp.begin();
//        int ele = it->second;
//        ++it;
//        bool flag = true;
//        for( ; it != mp.end() ; ++it ){
//            if(ele>it->second){
//                flag = false;
//                break;
//                }
//                else ele = it->second;
//            }
//            auto it1 = mp.end();
//            --it1;
//            if(flag == false) cout<<it1->first<<endl;
//            else cout<<it1->second<<endl;
//            
//            return 0;
//    }

//Exams
//int main(){
//    int n;
//    cin>>n;
//    vector<pair<int,int> > vec;
//    for(int i = 0;i<n;i++){
//        int a,b;
//        cin>>a>>b;
//        vec.push_back(make_pair(a,b));
//        }
//        sort(vec.begin(),vec.end());
//        int ans = vec[0].second;
//        for(int i = 0;i<n;i++){
//            if(ans<=vec[i].second) ans = vec[i].second;
//            else ans = vec[i].first;
//            }
//            cout<<ans<<endl;
//            
//            return 0;
//    }

//Fixing Typos
//Slow Algorithm
//int main(){
//    string s;
//    cin>>s;
//    int n = s.length();
//    vector<int> vec;
//    int left = 0,right = 2,indii=0;
//        while(right<n){
//        if(s[left] == s[left+1] && s[left+1] == s[right]) {
//            vec.push_back(left);
//            indii++;
//        }
//        left++;
//        right++;
//        }
//        //cout<<indii<<endl;
//        string news;
//        int ind = 0;
//        for(int i = 0;i<n;i++){
//            if(ind == indii){
//                char eles = s[i];
//                news = news+eles;
//                }
//            else if(i != vec[ind]) {
//                char ele = s[i];
//                news = news+ele;
//            }
//            else ind++;
//            }
//            vec.clear();
//            left = 0,right  = 2,indii = 0,ind = 0,n=news.length();
//            while(right<n){
//                if(news[left] == news[left+1] && news[right] == news[right+1]){
//                    vec.push_back(right+1);
//                    indii++;
//                    left = right+1;
//                    right = left+2;
//                    }
//                    else{
//                    left++;
//                    right++;
//                    }
//                }
//                string newest;
//            for(int i = 0;i<n;i++){
//            if(ind == indii){
//                char eles = news[i];
//                newest = newest+eles;
//                }
//            else if(i != vec[ind]) {
//                char ele = news[i];
//                newest = newest+ele;
//            }
//            else ind++;
//            }
//            cout<<newest<<endl;
//    }

//Fixing Typos
//int main(){
//    string s,news;
//    vector<int> vec;
//    cin>>s;
//    int n = s.length();
//    for(int i = 0;i<n;i++){
//        if(s[i] == s[i+1] && s[i+1] == s[i+2]) continue;
//        else{
//            char ele = s[i];
//            news = news+ele;
//            }
//        }
//        //cout<<news<<endl;
//        n = news.length();
//        string ans;
//        ans = ans+news[0];
//        for(int i = 1;i<n;i++){
//            if(news[i] == news[i-1]){
//                if(i<=n){
//                    if(news[i+1] == news[i+2]){
//                        ans = ans+news[i];
//                        ans = ans+news[i+1];
//                        //ans = ans+news[i+2];
//                        i+=2;
//                        }
//                        else ans = ans+news[i];
//                    }
//                    else ans = ans+news[i];
//                }
//                else ans = ans+news[i];
//            }
//        cout<<ans<<endl;
//        return 0;
//    }

//Maximum absurdity
//int main(){
//    int n,k,a=1,b,first_sum=-1,second_sum=-1,ind=1,pre=0;
//    cin>>n>>k;
//    int arr[n+1];
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        if(i<=k) pre+=arr[i];
//        }
//        first_sum = pre;
//        for(int j = k+1;j<=n;j++){
//            pre = pre-arr[ind];
//            ind++;
//            pre = pre+arr[j];
//            if(pre>first_sum){
//                first_sum = pre;
//                a = ind;
//                j++;
//                }
//                else if(pre>second_sum){
//                    second_sum = pre;
//                    b = ind;
//                    j++;
//                    }
//            }
//    cout<<a<<" "<<b;
//    }

//Maximum absurdity
//int main(){
//    long long int n,k,pre = 0,id = 1,first=-1,second=-1,a=1,b;
//    cin>>n>>k;
//    long long int arr[n+1];
//    long long int sum[n+1]={0};
//    int i = 1;
//    for(;i<=n;i++){
//        cin>>arr[i];
//        if(i<=k) pre+=arr[i];
//        }
//        sum[1] = pre;
//        first = pre;
//    for(int j = k+1;j<=n;j++){
//        pre = pre-arr[id++];
//        pre = pre+arr[j];
//        if(pre>first){
//            first = pre;
//            a = id;
//            }
//        sum[id] = pre;
//        }
//        sum[a] = 0;
//        for(int l = 1;l<=n;l++){
//            if(sum[l]>second && l!=a+1 && l!=a-1){
//                second = sum[l];
//                b = l;
//                }
//            }
//            cout<<a<<" "<<b;
//    }

//ciel and flowers
//int main(){
//    int r,g,b,total=0;
//    cin>>r>>g>>b;
//    total+=(r/3);
//    total+=(g/3);
//    total+=(b/3);
//    r=r%3;
//    g=g%3;
//    b=b%3;
//    int small = min(r,g);
//    small = min(small,b);
//    cout<<total+small<<endl;
//    
//    return 0;
//    }

//Ciel and flowers
//int main(){
//    int r,g,b,mini,total=0,maxi=-1;
//    cin>>r>>g>>b;
//    mini = min(r,g);
//    mini = min(mini,b);
//    for(int i = 1;i<=mini;i++){
//        total+=i;
//        total+=((r-i)/3);
//        total+=((g-i)/3);
//        total+=((b-i)/3);
//        maxi = max(maxi,total);
//        total=0;
//        }
//        cout<<maxi<<endl;
//    }

//Ultra Fast Mathematician
//int main(){
//    int first,second,f,s;
//    cin>>first;
//    cin>>second;
//    int maxi = max(first,second);
//    int indii = 0,ans=0,count1 = 0; 
//    while(maxi!=0){
////        if(first == 0) f=0;
////        if(second == 0) s=0;
//        maxi = maxi/10;
//        f = first%10;
//        s = second%10;
//        first = first/10;
//        second = second/10;
//        count1++;
//        int ele = f^s;
//        ans = ans+ele*pow(10,indii);
//        indii++;
//        }
//        int fake = ans,count2=0;
//        while(fake!=0){
//            count2++;
//            fake = fake/10;
//            }
//            int diff = count1-count2;
//            for(int i = 1;i<=diff+1;i++) cout<<0;
//            cout<<ans<<endl;
//    return 0;
//    }

//Fair Playoff
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    int a,b,c,d;
//    cin>>a>>b>>c>>d;
//    int maxi1,maxi2,mini1,mini2;
//    maxi1 = max(a,b);
//    maxi2 = max(c,d);
//    mini1 = min(a,b);
//    mini2 = min(c,d);
//    if(maxi1>mini2 && maxi2>mini1) cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;
//    }
//    return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,count = 0;
//        cin>>n;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            }
//            sort(arr+1,arr+(n+1),greater<int>());
//            for(int i = 1;i<n;i++){
//                for(int j = i+1;j<=n;j++){
//                    if(__gcd(arr[i],2*arr[j])>1) count++;
//                    }
//                }
//                cout<<count<<endl;
//        }
//        return 0;
//    }

//Array Reordering
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n];
//        vector<int> odds(n);
//        vector<int> evens(n); 
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            if(arr[i]%2 == 0) evens.push_back(arr[i]);
//            else odds.push_back(arr[i]);
//            }
//            int len1 = evens.size();
//            int len2 = odds.size();
//            sort(evens.begin(),evens.end(),greater<int>());
//            sort(odds.begin(),odds.end(),greater<int>());
//            vector<int> ans;
//            for(int i = 0;i<len1;i++){
//                ans.push_back(evens[i]);
//                }
//                for(int i = 0;i<len2;i++){
//                    ans.push_back(odds[i]);
//                    }
//                    int count = 0;
//                    for(int i = 0;i<ans.size()-1;i++){
//                        for(int j=i+1;j<ans.size();j++){
//                            if(__gcd(ans[i],2*ans[j])>1) count++;
//                            }
//                        }
//                        cout<<count<<endl;
//        }
//    }

//Array Reordering
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,count=0,ans = 0;
//        vector<int> odds;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            if(arr[i]%2 != 0){
//                int ele = arr[i];
//                odds.push_back(ele);
//                arr[i] = 0;
//                }
//                else count++;
//            }
//            sort(arr,arr+n,greater<int>());
//            sort(odds.begin(),odds.end(),greater<int>());
//            for(auto it: odds){
//                arr[count] = it;
//                count++;
//                }
//                //for(auto it1:arr) cout<<it1<<" ";
//                for(int i = 0;i<(n-1);i++){
//                    for(int j = i+1;j<n;j++){
//                        int first = arr[i];
//                        int second = 2*arr[j];
//                        if(__gcd(first,second)>1) ans++;
//                        //cout<<ans<<" ";
//                        }
//                    }
//                    cout<<ans<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i = 0;i<n;i++){
//        int x;
//        cin>>x;
//        arr[i] = x;
//        }
//        sort(arr,arr+n,greater<int>());
//        for(auto it: arr) cout<<it<<endl;
//    }

//Ultra Mathematician
//int main(){
//    int a,b,maxi,count1=0,count2=0;
//    cin>>a>>b;
//    vector<int> ans; 
//    while(a!=0 || b!=0){
//        int ele1=a%10;
//        int ele2=b%10;
//        int adde = ele1^ele2;
//        ans.push_back(adde);
//        a = a/10;
//        b = b/10;
//        }
//        for(int i = ans.size()-1;i>=0;i--){
//            cout<<ans[i];
//            }
//            cout<<endl;
//            
//            return 0;
//    }

//
//int main(){
//    int a,count=0,b=111;
//    cin>>a;
//    string a1 = to_string(a);
//    cout<<a1<<endl;
//    return 0;
//    }

//HQ9+
//int main(){
//    string str;
//    cin>>str;
//    int len = str.length();
//    bool flag = false;
//    for(int i = 0;i<len;i++){
//        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '+'){
//            flag = true;
//            break;
//            }
//        }
//        if(flag == true) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        
//        return 0;
//    }

//Dragons
//int main(){
//    long long int s,n;
//    cin>>s>>n;
//    multimap<int,int> mp;
//    for(int i=0;i<n;i++){
//        int x,y;
//        cin>>x>>y;
//        mp.insert(pair<int,int> (x,y));
//        }
//        bool flag = true;
//        for(auto it:mp){
//            if(s>it.first) s+=it.second;
//            else{
//                flag = false;
//                break;
//                }
//            }
//            if(flag == false) cout<<"NO"<<endl;
//            else cout<<"YES"<<endl;
//            
//            return 0;
//    }

//Translation
//int main(){
//    string s,t;
//    cin>>s;
//    cin>>t;
//    int len_s = s.length();
//    int len_t = t.length();
//    bool flag = true;
//    if(len_s!=len_t) cout<<"NO"<<endl;
//    else{
//        int ind = len_s-1;
//        for(int i = 0;i<len_t;i++){
//            if(t[i]!=s[ind]){
//                flag = false;
//                break;
//                }
//                else ind--;
//            }
//        if(flag == false) cout<<"NO"<<endl;
//        else cout<<"YES"<<endl;
//    }
//        return 0;
//    }

//Wizards and demonstration
//int main(){
//    float n,x,y;
//    cin>>n>>x>>y;
//    float req = n*(y/100);
//    if(req<=x) cout<<0<<endl;
//    else{
//        float more = req-x;
//        cout<<ceil(more)<<endl;
//        }
//        
//        return 0;
//    }

//Little Elephant and Rozdil
//int main(){
//    int n;
//    cin>>n;
//    long long int arr[n+1];
//    long long int arr1[n+1];
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        arr1[i] = arr[i];
//        }
//        int ind;
//        sort(arr+1,arr+(n+1));
//        int ele = arr[1];
//        if(ele == arr[2]) cout<<"Still Rozdil"<<endl;
//        else{
//        for(int i = 1;i<=n;i++){
//            if(arr1[i] == ele){
//                ind = i;
//                break;
//                }
//            }
//            cout<<ind<<endl;
//        }
//        return 0;
//    }

//Array
//int main(){
//    int n;
//    cin>>n;
//    vector<int> neg;
//    vector<int> pos;
//    vector<int> zero;
//    for(int i = 0;i<n;i++){
//        int x;
//        cin>>x;
//        if(x<0) neg.push_back(x);
//        else if(x>0) pos.push_back(x);
//        else zero.push_back(x);
//        }
//        int len_neg = neg.size();
//        if(len_neg%2 == 0){
//            auto g = neg.begin();
//            int ele = *g;
//            neg.erase(g);
//            zero.push_back(ele);
//            }
//            int len_pos = pos.size();
//            if(len_pos == 0){
//                auto it = neg.begin();
//                int ele1 = *it;
//                neg.erase(it);
//                auto it1 = neg.begin();
//                int ele2 = *it1;
//                neg.erase(it1);
//                pos.push_back(ele1);
//                pos.push_back(ele2);
//                }
//                cout<<neg.size()<<" ";
//                for(auto a : neg) cout<<a<<" ";
//                cout<<endl;
//                cout<<pos.size()<<" ";
//                for(auto b: pos) cout<<b<<" ";
//                cout<<endl;
//                cout<<zero.size()<<" ";
//                for(auto c: zero) cout<<c<<" ";
//                cout<<endl;
//                
//                return 0;
//    }

//Sum of Digits -- cant be run for original constraints
//int main(){
//    long long int n,count = 0;
//    cin>>n;
//    bool flag = true;
//    while(flag != false){
//        long long int sum = 0;
//        long long int clone = n;
//        while(n!=0){
//            int pre = n%10;
//            sum+=pre;
//            n = n/10;
//            }
//            if(sum == clone){
//                flag = false;
//                }
//                else{
//                    n = sum;
//                    count++;
//                    }
//        }
//    cout<<count<<endl;
//    
//    return 0;
//    }

//Sum of Digits
//int main(){
//    string s;
//    cin>>s;
//    int sum = 0,count=  0;
//    int len = s.length();
//    for(int i = 0;i<len;i++){
//        sum = sum+s[]
//        }
//    }

//Omkar  and Bad Story
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        set<int> st;
//        int arr[210]={0};
//        bool f = true;
//        for(int i = 0;i<n;i++){
//            int a;
//            cin>>a;
//            st.insert(a);
//            if(a>0) arr[100+a]+=1;
//            else if(a == 0) arr[a]+=1;
//            else{
//                int ele = abs(a);
//                arr[ele]+=1;
//                f = false;
//                }
//            }
//            if(f == false) cout<<"NO"<<endl;
//            else{
//           bool flag = true;
//           while(flag == true){
//               flag = false;
//               auto end1 = st.end();
//               end1--;
//               for(auto it1 = st.begin();it1!=end1;it1++){
//                   auto it2 = it1;
//                   it2++;
//                   for(;it2!=st.end();it2++){
//                       int ele1 = *it1;
//                       int ele2 = *it2;
//                       int ind = abs(ele2-ele1);
//                       if(arr[ind] == 0){
//                           st.insert(ind);
//                           arr[ind]+=1;
//                           flag = true;
//                           break;
//                           }
//                       }
//                       if(flag == true) break;
//                   }
//                   if(st.size()>300) break;
//               }
//               if(flag == false){
//                   cout<<"YES"<<endl;
//                   cout<<st.size()<<endl;
//                   for(auto f : st) cout<<f<<" ";
//                   cout<<endl;
//                   }
//                   else cout<<"NO"<<endl;
//        }
//    }
//        return 0;
//    }

//How to generate all the continuous substrings of a string
//void generate(string s,int n){
//    unordered_map<string,int> mp;
//    for(int i = 0;i<n;i++){
//        string ss;
//        for(int j = i;j<n;j++){
//            ss = ss+s[j];
//            mp[ss]++;
//            }
//        }
//        //For 1 character
//        string ss;
//        for(int i = 0;i<26;i++){
//            ss = 'a'+i;
//            auto ele = mp.find(ss);
//            if(ele == mp.end()){
//                cout<<ss<<endl;
//                return;
//                }
//            }
//            
//            //for 2 charcters
//            for(int i = 0;i<26;i++){
//                for(int j = 0;j<26;j++){
//                    ss = 'a'+i;
//                    ss+='a'+j;
//                    auto ele = mp.find(ss);
//                    if(ele == mp.end()){
//                        cout<<ss<<endl;
//                        return;
//                        }
//                    }
//                }
//            
//            //For 3 characters
//            for(int i = 0;i<26;i++){
//            for(int j = 0;j<26;j++){
//                for(int k = 0;k<26;k++){
//                    ss = 'a'+i;
//                    ss+='a'+j;
//                    ss+='a'+k;
//                    auto ele = mp.find(ss);
//                    if(ele == mp.end()){
//                        cout<<s<<endl;
//                        return;
//                        }
//                    }
//                }
//                }
//            return;
//    } 
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//    string s;
//    cin>>s;
//    //int n = s.length();
//    generate(s,n);
//    }
//}

//Sum of Digits
//int main(){
//    string n;
//    cin>>n;
//    long long int count = 0,sum = 0;
//    while(n.length()>1){
//        sum = 0;
//        for(long long int i = 0;i<n.length();i++){
//            sum+=n[i]-'0';
//            }
//            count++;
//            n = to_string(sum);
//        }
//        cout<<count<<endl;
//        
//        return 0;
//    }

//Football
//int main(){
//    int n,times=-1;
//    cin>>n;
//    unordered_map<string,int> mp;
//    while(n--){
//        string s;
//        cin>>s;
//        mp[s]++;
//        }
//        string team;
//        for(auto it : mp){
//            if(it.second>times){
//                times = it.second;
//                team = it.first;
//                }
//            }
//            cout<<team<<endl;
//            
//            return 0;
//    }

//Lucky Division
//int main(){
//    vector<int> vec;
//    for(int i = 4;i<=1000;i++){
//        int ele = i;
//        int ele1 = ele;
//        bool flag = true;
//        while(ele!=0){
//            int pre = ele%10;
//            if(pre!=4 && pre!=7){
//                flag = false;
//                break;
//                }
//            ele = ele/10;
//            }
//            if(flag == true){
//                vec.push_back(ele1);
//                }
//        }
//        int n;
//        cin>>n;
//        for(auto it : vec){
//            if(n%it == 0){
//                cout<<"YES"<<endl;
//                return 0;
//                }
//            }
//            cout<<"NO"<<endl;
//return 0; 
//    }

//Dubstep
//int main(){
//    string s;
//    cin>>s;
//    int n = s.length(),ind = 0,i=0;
//    string ans;
//    while(i!=n){
//        if(i>=n-3){
//            if(s[i]=='W' && s[i+1]=='U' && s[i+2] == 'B'){
//                break;
//                }
//                else{
//                    if(ind == 1) ans = ans+" ";
//                    else{
//                        for(;i!=n;i++) ans = ans+s[i];
//                        }
//                        break;
//                    }
//            }
//            if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
//                if(ans.length()>0) ind = 1;
//                i+=3;
//                }
//                else{
//                    if(ind == 1){
//                        ans = ans+" ";
//                        ind = 0;
//                        }
//                    ans = ans+s[i];
//                    i++;
//                    }
//        }
//        //cout<<ans.length()<<endl;
//        cout<<ans<<endl;
//        
//        return 0;
//    }

//AppleMan and Card Game
//int main(){
//    int n,k;
//    cin>>n>>k;
//    string s;
//    cin>>s;
//    map<string,int> mp;
//    for(int i = 0;i<n;i++){
//        mp[s[i]]++;
//        }
//        map<int,string> mapp;
//        for(auto it:mp){
//            mapp.insert(pair<int, string>(it.second, it.first));
//            }
//            for(auto it1:mapp) cout<<it1<<endl;
//            
//            return 0;
//    }

//AppleMan and Card Game
//int main(){
//    long long int n,k,sum = 0,ind = 0;
//    cin>>n>>k;
//    string s;
//    cin>>s;
//    int arr[100]={0};
//    for(int i = 0;i<n;i++){
//        int ele = s[i];
//        arr[ele]++;
//        }
//        sort(arr,arr+100,greater<int>());
//        while(k!=0){
//            if(k>=arr[ind]){
//                sum+=(arr[ind]*arr[ind]);
//                k-=arr[ind];
//                ind++;
//                }
//                else{
//                    sum+=(k*k);
//                    k=0;
//                    ind++;
//                    }
//                    //cout<<sum<<endl;
//            }
//            cout<<sum<<endl;
//            
//            return 0;
//    }

//Sort the array
//int main(){
//    int n,left=0,right = 0;
//    cin>>n;
//    int arr[n+2]={0};
//    arr[n+1]=1000000010;
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        }
//        bool flag = true;
//        int i = 0;
//        while(i<=n){
//            if(arr[i]>=arr[i-1]){
//                if(right == 0) left = i;
//                else{
//                    flag = false;
//                    break;
//                    }
//                    i++;
//                }
//                else{
//                    left = i;
//                    while(arr[i]<arr[i-1]) i++;
//                    right = i-1;
//                    }
//            }
//            if(flag == true){
//                cout<<"yes"<<endl;
//                cout<<left<<" "<<right<<endl;
//                }
//                else cout<<"no"<<endl;
//    }

//Sort the array
//int main(){
//    int n;
//    cin>>n;
//    int arr[n+1];
//    for(int i = 1;i<=n;i++) cin>>arr[i];
//    int i = 1,left = 0,right = 0,count=1,times=-1;
//    bool flag = true;
//    while(i<n){
//        if(arr[i]<=arr[i+1]){
//            i++;
//            count=0;
//            }
//            else{
//                times++;
//            if(left!=0 && count==0){
//            flag = false;
//            break;
//                }
//                else{
//                    if(times == 0){
//                        left = i;
//                        right = i+1;
//                        }
//                        else right++;
//                    }
//                    i++;
//                }
//        }
//        bool flag1 = true;
//        if(flag == true){
//            sort(arr+left,arr+right);
//            for(int i = 1;i<=n;i++){
//                if(arr[i]>arr[i+1]){
//                    flag1 = false;
//                    break;
//                    }
//                }
//                if(flag1 == true){
//                    cout<<"yes"<<endl;
//                    cout<<left<<" "<<right<<endl;
//                    }
//                    else cout<<"no"<<endl;
//            }
//            else cout<<"no"<<endl;
//            
//            return 0;
//    }

//Sort the array 
//int main(){
//    int n;
//    cin>>n;
//    int arr[n+1]={0};
//    for(int i = 1;i<=n;i++) cin>>arr[i];
//    int i = 1,count = 1,times = -1,left = 0,right = 0;
//    bool flag = true;
//    while(i<n){
//        if(i>1){
//                    //cout<<"mg"<<endl;
//                    if(arr[i]<arr[i-1] && arr[i]<arr[i+1] && arr[i-1]>arr[i+1]){
//                    flag = false;
//                    break;
//                        }
//                    if(arr[i]>arr[i-1] && arr[i]>arr[i+1] && arr[i-1]<arr[i+1]){
//                        flag = false;
//                        break;
//                        }
//                    }
//        if(arr[i]<=arr[i+1]){
//            count = 0;
//            }
//            else{
//                times++;
//                    if(left!=0 && count == 0){
//                        flag = false;
//                        break;
//                        }
//                        else{
//                            if(times == 0){
//                                left = i;
//                                right = i+1;
//                                }
//                                else right++;
//                            }
//                }
//                i++;
//                //cout<<i<<endl;
//        }
//        if(flag == true){
//            cout<<"yes"<<endl;
//            if(left == 0 && right == 0){
//                left = 1;
//                right = 1;
//                }
//            cout<<left<<" "<<right<<endl;
//            }
//            else cout<<"no"<<endl;
//            
//            return 0;
//    }

//Sort The array
//int main(){
//    int n;
//    cin>>n;
//    int arr[n+1];
//    set<int> st;
//    st.insert(0);
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        st.insert(arr[i]);
//        }
//        int left = 1,right = 1;
//        auto it = st.begin();
//        it++;
//        for(int i = 1;i<=n;i++){
//            if(arr[i]!=*it){
//                left = i;
//                while(arr[i]!=*it && i<=n){
//                    i++;
//                    it++;
//                    }
//                    right = i;
//                    break;
//                }
//                it++;
//            }
//            cout<<left<<" "<<right<<endl;
//            sort(arr+left,arr+right);
//            it = st.begin();
//            it++;
//            cout<<*it<<endl;
//            bool flag = true;
//            for(int i = 1;i<=n;i++){
//                if(arr[i]!=*it){
//                    flag = false;
//                    break;
//                    }
//                }
//                if(flag == false) cout<<"no"<<endl;
//                else{
//                    cout<<"yes"<<endl;
//                    cout<<left<<" "<<right<<endl;
//                    }
//    }

//Sereja and Bottles
//int main(){
//    int n,count = 0;
//    cin>>n;
//    int arr[1010] = {0};
//    set<int> st;
//    while(n--){
//        int a,b;
//        cin>>a>>b;
//        st.insert(a);
//    if(a!=b){
//        arr[b]++;
//        }
//        }
//        for(auto it:st){
//            int ele = it;
//            if(arr[ele]==0) count++;
//            }
//            cout<<count<<endl;
//            
//            return 0;
//    }

//Seraja and Bottles
//int main(){
//    int n,copy;
//    cin>>n;
//    set<int> ai;
//    set<int> bi;
//    copy = n;
//    while(n--){
//        int a,b;
//        cin>>a>>b;
//        if(a != b){
//        ai.insert(a);
//        bi.insert(b);
//        }
//        }
//        int count = 0;
//        for(auto it:ai){
//            int ele = it;
//            if(bi.find(ele)==bi.end()) count++;
//            }
//            cout<<copy-count<<endl;
//            
//            return 0;
//    }

//Sort the array
//int main(){
//    int n;
//    cin>>n;
//    int arr[n+1]={0};
//    int second[n+1]={0};
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        second[i] = arr[i];
//        }
//        sort(second+1,second+(n+1));
//        bool indicator = true,flag = true;
//        int count = 0,left = 1,right = 1;
//        for(int i = 1;i<n;i++){
//            if(arr[i]<=arr[i+1]) indicator = true;
//            else{
//                if(indicator == true){
//                    count++;
//                    indicator = false;
//                    left = i;
//                    right = i+1;
//                    }
//                    else right++;
//                }
//                if(count == 2){
//                    flag = false;
//                    break;
//                    }
//            }
//            bool ans = true;
//            if(flag == false){
//                cout<<"no"<<endl;
//                }
//                else{
//                    //cout<<"Yha tkk aya hu vro"<<" "<<left<<" "<<right<<endl;
//                    sort(arr+left,arr+(right+1));
//                    for(int i = 1;i<=n;i++){
//                        if(arr[i]!=second[i]){
//                            ans = false;
//                            break;
//                            }
//                        }
//                        if(ans == false) cout<<"no"<<endl;
//                        else{
//                            cout<<"yes"<<endl;
//                            cout<<left<<" "<<right<<endl;
//                            }
//                    }
//                    return 0;
//    }

//Flag day
//int main(){
//    int n,m;
//    cin>>n>>m;
//    int arr[n+1]={0};
//    while(m--){
//        int sum = 6,count = 1;
//        int x,y,z;
//        cin>>x>>y>>z;
//        if(arr[x] == 0){
//            arr[x] = count++;
//            sum = sum-count;
//            }
//            else sum = sum-arr[x];
//            if(arr[y] == 0){
//            arr[y] = count++;
//            sum = sum-count;
//            }
//            else sum = sum-count;
//            if(arr[z] == 0){
//            arr[z] = count++;
//            sum = sum-count;
//            }
//            else sum = sum-count;
//        }
//        for(int i = 1;i<=n;i++) cout<<arr[i]<<" ";
//        cout<<endl;
//        
//        return 0;
//    }

//Flag day
//int main(){
//    int n,m;
//    cin>>n>>m;
//    int arr[n+1]={0};
//    while(m--){
//        vector<int> vec;
//        vec.push_back(1);
//        vec.push_back(2);
//        vec.push_back(3);
//        int x,y,z;
//        cin>>x>>y>>z;
//        if(arr[x] == 0){
//            auto it = vec.begin();
//            int ele = *it;
//            arr[x] = ele;
//            vec.erase(it);
//            }
//            else{
//                auto ele = find(vec.begin(),vec.end(),arr[x]);
//                vec.erase(ele);
//                }
//                if(arr[y] == 0){
//            auto it = vec.begin();
//            int ele = *it;
//            arr[y] = ele;
//            vec.erase(it);
//            }
//            else{
//                auto ele = find(vec.begin(),vec.end(),arr[y]);
//                vec.erase(ele);
//                }
//                if(arr[y] == 0){
//            auto it = vec.begin();
//            int ele = *it;
//            arr[z] = ele;
//            vec.erase(it);
//            }
//            else{
//                auto ele = find(vec.begin(),vec.end(),arr[z]);
//                vec.erase(ele);
//                }
//        }
//        for(int i = 1;i<=n;i++) cout<<arr[i]<<" ";
//    }

//Stone Game
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,mini=110,mini_ind=-1,maxi=0,maxi_ind=-1;
//        cin>>n;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            if(arr[i]>maxi){
//                maxi = arr[i];
//                maxi_ind = i;
//                }
//                if(arr[i]<mini){
//                    mini = arr[i];
//                    mini_ind = i;
//                    }
//            }
//            int first,second,third,left,right;
//            first = max(maxi_ind,mini_ind);
//            second = max((n-maxi_ind+1),(n-mini_ind+1));
//            if(maxi_ind>mini_ind){
//                left = mini_ind;
//                right = maxi_ind;
//                }
//                else{
//                    left = maxi_ind;
//                    right = mini_ind;
//                    }
//                    third = left+(n-right+1);
//                    
//                    int ans = min(first,min(second,third));
//                    cout<<ans<<endl;
//        }
//        return 0;
//    }

//Friends and Candies
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i]
//            }
//            bool flag = false;
//            while(flag == false){
//                int maxi = *max_element(arr+1,arr+(n+1));
//                int mini = 
//                }
//        }
//    }

//Friends and candies
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n+1];
//        long long int sum = 0;
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//            }
//            long long int avg = sum/n;
//            long long int mul = avg*n;
//            long int count = 0;
//            if(mul != sum){
//                cout<<-1<<endl;
//                }
//                else{
//                    for(int i = 1;i<=n;i++){
//                        if(arr[i]>avg) count++;
//                        }
//                        cout<<count<<endl;
//                    }
//        }
//        return 0;
//    }

//Number of Pairs
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,l,r,count = 0;
//        cin>>n>>l>>r;
//        long long int arr[n+1];
//        for(int i = 1;i<=n;i++) cin>>arr[i];
//        sort(arr+1,arr+(n+1));
//        for(int i = 1;i<n;i++){
//            for(int j = n;j>=i+1;j--){
//                long long int sum = arr[i]+arr[j];
//                if(sum<l) break;
//                if(sum>=l && sum<=r) count++;
//                }
//            }
//            cout<<count<<endl;
//        }
//        return 0;
//    }

//Valera and Fruits 
//int main(){
//    int n,v;
//    cin>>n>>v;
//    multimap<int,int> mp;
//    while(n--){
//        int a,b;
//        cin>>a>>b;
//        mp.insert(pair <int, int> (a, b));
//        }
//        for(auto it : mp){
//            
//            }
//        
//    }

//Valera and Antique Items
//int main(){
//    int n,v,count = 0;
//    cin>>n>>v;
//    set<int> sellers;
//        for(int i = 1;i<=n;i++){
//        int x;
//        cin>>x;
//        while(x--){
//            int ele;
//            cin>>ele;
//            if(v>ele){
//                sellers.insert(i);
//                count++;
//                //v = v-ele;
//                }
//            }
//        }
//        cout<<count<<endl;
//        if(sellers.size()!=0){
//            for(auto it : sellers) cout<<it<<" ";
//            cout<<endl;
//            }
//            
//            return 0;
//    }

//Valera and Fruits
//int main(){
//    int n,v,maxi = -1,sum = 0,dupi;
//    cin>>n>>v;
//    int arr[3010]={0};
//    while(n--){
//        int a,b;
//        cin>>a>>b;
//        arr[a]+=b;
//        if(a>maxi) maxi = a;
//        }
//        dupi = v;
//    for(int i = 1;i<=maxi;i++){
//        dupi = v;
//        if(arr[i]<dupi){
//            sum+=arr[i];
//            dupi = dupi-arr[i];
//            if(dupi>=1){
//                int mini = min(arr[i+1],dupi);
//                arr[i+1] = arr[i+1]-mini;
//                sum+=mini;
//                }
//            }
//            else{
//                sum+=dupi;
//                arr[i] = arr[i] - dupi;
//                }
//        }
//        dupi = v;
//        int mini = min(arr[maxi],dupi);
//        sum+=mini;
//        cout<<sum<<endl;
//    return 0;
//    }

//Lower Bound and Upper Bound
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    int n,l,r,ans=0;
//    cin>>n>>l>>r;
//    vector<int> vec(n);
//    for(int i = 0;i<n;i++){
//        cin>>vec[i];
//        }
//        sort(vec.begin(),vec.end());
//        for(int i = 0;i<n;i++){
//        int low = lower_bound(vec.begin(),vec.end(),l-vec[i])-vec.begin();
//        int high = upper_bound(vec.begin(),vec.end(),r-vec[i])-vec.begin();
//        ans+=(high-low);
//        if(l<=2*vec[i] && 2*vec[i]<=r) ans--;
//        }
//        cout<<ans/2<<endl;
//    }
//    return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,count = 0;
//        cin>>n;
//        string s;
//        cin>>s;
//        for(int i = 0;i<n;i++){
//            if(s[i] == '0') count++;
//            }
//            if(count == 0) cout<<"DRAW"<<endl;
//            else if(count%2 == 1 && count!=1) cout<<"ALICE"<<endl;
//            else if(count%2 == 1 && count==1) cout<<"BOB"<<endl;
//            else{
//                cout<<"BOB"<<endl;
//                }
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++) cin>>arr[i];
//        cout<<3*n<<endl;
//        for(int i = 1;i<=n;i = i+2){
//            int a = 6,count = 0,val=2;
//            while(a--){
////                count++;
//                if(count == 2) val--;
//                if(count == 3){
//                    val = 2;
//                    count = 0;
//                    }
//                cout<<val<<" "<<i<<" "<<i+1<<endl;
//                count++;
//                }
//            }
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int a,b;
//        cin>>a>>b;
//        if(b == 1) cout<<"NO"<<endl;
//        else{
//        cout<<"YES"<<endl;
//        cout<<a<<" "<<(a*(b-1))<<" "<<(a*b)<<endl;
//        }
//    }
//        return 0;
//    }

//Same differneces
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,ans=0;
//        cin>>n;
//        long long int arr[n+1];
//        int hashi[100010]={0};
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            arr[i] = arr[i]-i;
//            hashi[arr[i]]++;
//            }
//            for(int i = 1;i<=n;i++){
//                int ele = hashi[arr[i]];
//                if(ele!=0) ans+=(ele-1);
//                hashi[arr[i]]--;
//                }
//                cout<<ans<<endl;
//        }
//        return 0;
//    }

//Not Adjacent Matrix
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,odd=1,even=2,sign;
//        cin>>n;
//        if(n%2 == 1){
//            sign = n*n;
//            }
//            else sign = n*n-1;
//        int arr[n+1][n+1]; 
//        if(n == 1) cout<<1<<endl;
//        else if(n == 2) cout<<-1<<endl;
//    else{
//        for(int i = 1;i<=n;i++){
//            for(int j = 1;j<=n;j++){
//                if(odd == sign){
//                    arr[i][j] = even;
//                    even = even+2;
//                    }
//                    else{
//                        arr[i][j] = odd;
//                        odd = odd+2;
//                        }
//                }
//            }
//            for(int i = 1;i<=n;i++){
//                for(int j = 1;j<=n;j++){
//                    cout<<arr[i][j]<<" ";
//                    }
//                    cout<<endl;
//                }
//        }
//    }
//    return 0;
//}

//Phoenix and Puzzle 
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int x = sqrt(n/2);
//        int y = sqrt(n/4);
//        if(n%2 == 0 && x*x == n/2) cout<<"YES"<<endl;
//        else if(n%4 == 0 && y*y == n/4) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        }
//        return 0;
//    }


//Corrupted Array
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,maxi = -1;
//        cin>>n;
//        long long int arr[n+2];
//        for(int i = 0;i<=n+1;i++){
//            cin>>arr[i];
//            if(arr[i]>maxi) maxi = arr[i];
//            }
//            long long int sum = 0;
//           for(int i = 0;i<=n+1;i++){
//               if(arr[i] != maxi) sum+=arr[i];
//               }
//               long long int x = sum-maxi;
//               bool flag = true;
//               for(int i = 0;i<=n+1;i++){
//                   if(arr[i] == x){
//                       arr[i] = 0;
//                       flag = false;
//                       break;
//                       }
//                   }
//                   if(flag == true){
//                       cout<<-1<<endl;
//                       continue;
//                       }
//                for(int i = 0;i<=n+1;i++){
//                    if(arr[i]!=0 && arr[i]!=maxi) cout<<arr[i]<<" ";
//                    }
//                 cout<<endl; 
//        }
//        return 0;
//    }


//
//int main(){
//    set<int> st;
//    for(int i = 0;i<5;i++){
//        int x;
//        cin>>x;
//        st.insert(x);
//        }
//        auto it = st.find(5);
//        st.erase(it);
//        for(auto i : st) cout<<i<<endl;
//        
//        return 0;
//    }

//Corrupted Array
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,sum = 0;
//        cin>>n;
//        long long int arr[n+2];
//        for(int i = 0;i<=n+1;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//            }
//            sort(arr,arr+(n+2));
//            long long int greatest = arr[n+1];
//            long long int second_greatest = arr[n];
//            if(greatest == (sum-greatest-second_greatest)){
//                arr[n+1] = 0;
//                arr[n] = 0;
//                }
//                else if(greatest!=(sum-greatest-second_greatest)){
//                    int diff=sum-2*greatest;
//                    int left = 0,right = n+1,mid;
//                     bool flag = false;
//                     if(diff>=1){
//                    while(left<=right){
//                        mid = left+(right-left)/2;
//                        if(arr[mid] == diff){
//                            flag = true;
//                            break;
//                            }
//                        if(diff>arr[mid]){
//                            left = mid+1;
//                            }
//                            else{
//                                right = mid;
//                                }
//                        }
//                }
//                        if(flag == true){
//                            arr[mid] = 0;
//                            arr[n+1] = 0;
//                            }
//                            else if(second_greatest == (sum-greatest-second_greatest)){
//                                arr[n+1] = 0;
//                                arr[n] = 0;
//                                }
//                                else{
//                                    cout<<-1<<endl;
//                                    continue;
//                                    }
//                    }
//                    for(int i = 0;i<=n+1;i++){
//                        if(arr[i]!=0) cout<<arr[i]<<" ";
//                        }
//                        cout<<endl;
//        }
//        return 0;
//    }

//Spy Detected
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,ele,ans;
//        cin>>n;
//        int arr[n+1];
//        int hashii[110]={0};
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            hashii[arr[i]]++;
//            }
//            for(int i = 0;i<=110;i++){
//                if(hashii[i] == 1){
//                    ele = i;
//                    }
//                }
//                for(int i = 1;i<=n;i++){
//                    if(arr[i] == ele){
//                        ans = i;
//                        break;
//                        }
//                    }
//                    cout<<ans<<endl;
//        }
//        return 0;
//    }

//Almost Rectangle
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,row1=-1,row2=-1,col1=-1,col2=-1;
//        cin>>n;
//        char arr[n][n];
//        for(int i = 0;i<n;i++){
//            for(int j = 0;j<n;j++){
//                cin>>arr[i][j];
//                if(arr[i][j] == '*'){
//                    if(row1 == -1){
//                        row1=i;
//                        col1=j;
//                        }
//                        else{
//                            row2=i;
//                            col2=j;
//                            }
//                    }
//                }
//            }
//           if(row1 == row2){
//                if(row1 == 0){
//                    arr[row1+1][col1] = '*';
//                    arr[row2+1][col2] = '*';
//                    }
//                    else{
//                        arr[row1-1][col1] = '*';
//                        arr[row2-1][col2] = '*';
//                        }
//                }
//               else if(col1 == col2){
//                if(col1 == 0){
//                    arr[row1][col1+1] = '*';
//                    arr[row2][col2+1] = '*';
//                    }
//                    else{
//                        arr[row1][col1-1] = '*';
//                        arr[row2][col2-1] = '*';
//                        }
//                }
//                else{
//                    arr[row1][col2]='*';
//                    arr[row2][col1]='*';
//                    }
//                    
//                for(int i = 0;i<n;i++){
//                    for(int j = 0;j<n;j++){
//                        cout<<arr[i][j];
//                        }
//                        cout<<endl;
//                    }
//        }
//        return 0;
//    }

//A-B Palindrome
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b;
//        cin>>a>>b;
//        string s;
//        cin>>s;
//        if((a+b)%2 == 1){
//            int i = 0,j = (a+b-1),fake_a=a,fake_b=b;
//            while(i!=j){
//                if(arr[i] == '?' && arr[j] == '?'){
//                    if(fake_a!=0){
//                        arr[i] = '0';
//                        arr[j] = '0';
//                        }
//                        else if(fake_b!=0){
//                            arr[i] = '1';
//                            arr[j] = '1';
//                            }
//                            else{
//                                flag = false;
//                                break;
//                                }
//                                fake_a  = fake_a-2;
//                                fake_b = fake_b-2;
//                    }
//                    else if(arr[i] == '?' && arr[j]!='?'){
//                        
//                        }
//                }
//            }
//        }
//    }

//A-B Palindrome
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,count_a = 0,count_b = 0,count_c = 0;
//        cin>>a>>b;
//        string s;
//        cin>>s;
//        for(int i = 0;i<=(a+b-1);i++){
//            if(s[i] == '0') count_a++;
//            else if(s[i] == '1') count_b++;
//            else count_c++;
//            }
//            if(count_a>a || count_b>b){
//                cout<<-1<<endl;
//                }
//                else{
//                    int i = 0,j = a+(b-1);
//                    while(i<j){
//                        if(arr[i] == '?' && arr[j]!='0'){
//                           if(count_a>=1){
//                               arr[i] = '0';
//                               count_c--;
//                               }
//                            else{
//                                flag = false'
//                                break;
//                                } 
//                            }
//                            else if(arr[i] == '?' && arr[j]!='1'){
//                           if(count_b>=1){
//                               arr[i] = '1';
//                               count_c--;
//                               }
//                            else{
//                                flag = false'
//                                break;
//                                } 
//                            }
//                            else if(arr[i] == '0' && arr[j]!='?'){
//                           if(count_a>=1){
//                               arr[j] = '0';
//                               count_c--;
//                               }
//                            else{
//                                flag = false'
//                                break;
//                                } 
//                            }
//                            else if(arr[i] == '1' && arr[j]!='?'){
//                           if(count_b>=1){
//                               arr[j] = '1';
//                               count_c--;
//                               }
//                            else{
//                                flag = false'
//                                break;
//                                } 
//                            }
//                        }
//                        if(flag == false){
//                            cout<<-1<<endl;
//                            }
//                            else{
//                                if(count_c>=0){
//                                    int i = 0,j=a+(b-1);
//                                    while(i<j){
//                                        if(arr[i] == '?' && arr[j] == '?')
//                                        }
//                                    }
//                                }
//                    }
//        }
//    }

//A-B Palindrome
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b;
//        cin>>a>>b;
//        string s;
//        cin>>s;
//        
//        }
//    }

//Colour the Flag
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,row=-1,col=-1;
//        cin>>n>>m;
//        char ele1 = 'R',ele2 = 'W',odd,even;
//        char arr[n+1][m+1];
//        for(int i = 1;i<=n;i++){
//            for(int j = 1;j<=m;j++){
//                cin>>arr[i][j];
//                if(arr[i][j] == ele1 || arr[i][j] == ele2){
//                    ele1 = 'H';
//                    ele2 = 'H';
//                    row = i;
//                    col = j;
//                    }
//                }
//            }
//            //cout<<row<<" "<<col<<endl;
//            int sum = row+col;
//            if(row!=-1){
//                if(arr[row][col] == 'W' && sum%2 == 0){
//                    even = 'W';
//                    odd = 'R';
//                }
//                else if(arr[row][col] == 'R' && sum%2 == 0) {
//                    even = 'R';
//                    odd = 'W';
//                    }
//                else if(arr[row][col] == 'W' && sum%2 == 1) {
//                    odd = 'W';
//                    even = 'R';
//                    }
//            else if(arr[row][col] == 'R' && sum%2 == 1) {
//                odd = 'R';
//                even = 'W';
//                }
//                }
//                else{
//                    even = 'R';
//                    odd = 'W';
//                    }
//                bool flag = true;
//                for(int i = 1;i<=n;i++){
//                    for(int j = 1;j<=m;j++){
//                        int s = i+j;
//                        if(s%2 == 0){
//                            if(arr[i][j] == odd){
//                                flag = false;
//                                break;
//                                }
//                                else arr[i][j] = even;
//                            }
//                            else{
//                                if(arr[i][j] == even){
//                                    flag = false;
//                                    break;
//                                    }
//                                    else{
//                                        arr[i][j] = odd;
//                                        }
//                                }
//                        }
//                        if(flag == false) break;
//                    }
//                    if(flag == false){
//                        cout<<"NO"<<endl;
//                        }
//                        else{
//                            cout<<"YES"<<endl;
//                            for(int i = 1;i<=n;i++){
//                                for(int j = 1;j<=m;j++){
//                                    cout<<arr[i][j]<<" ";
//                                    }
//                                    cout<<endl;
//                                }
//                            }
//        }
//        return 0;
//    }

//Histogram Ugliness
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,sum=0;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++) cin>>arr[i];
//        for(int i = 0;i<n;i++){
//            if(i == 0){
//                sum+=arr[i];
//                sum+=(abs(arr[i+1]-arr[i]));
//                }
//                else if(i == n-1){
//                    sum+=arr[n-1];
//                    //sum+=(abs(arr[i]-arr[i-1]));
//                    }
//                    else{
//                        //sum+=(abs(arr[i]-arr[i-1]));
//                        sum+=(abs(arr[i]-arr[i+1]));
//                        }
//            }
//          for(int i = 0;i<n;i++){
//              if(i == 1){
//                  if(arr[i]>arr[i+1]){
//                      sum = sum-2*abs(arr[i]-arr[i+1]);
//                      sum+=abs(arr[i]-arr[i+1]);
//                      }
//                  }
//                  else if(i == n-1){
//                      if(arr[i]>arr[i-1]){
//                          sum = sum-2*abs(arr[i]-arr[i-1]);
//                          sum+=abs(arr[i]-arr[i-1]);
//                          }
//                      }
//                      else{
//                          int mini1=0,mini2=0;
//                          if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//                              mini1 = abs(arr[i]-arr[i-1]);
//                              mini2 = abs(arr[i]-arr[i+1]);
//                              long long int val = min(mini1,mini2);
//                              sum = sum-2*val;
//                              sum = sum+val;
//                              }
//                          }
//              }
//              cout<<sum<<endl;            
//        }
//        return 0;
//    }

//Corrupted Array
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,sum = 0;
//        cin>>n;
//        long long int arr[n+3]={0};
//        for(int i = 1;i<=n+2;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//            }
//            sort(arr+1,arr+(n+3));
//            long long int g = arr[n+2];
//            long long int sg = arr[n+1];
//            arr[n+2] = 0;
//            bool flag = true;
//            if(g == (sum-g)-sg) arr[n+1] = 0;
//            else if(sg == (sum-sg)-g) arr[n+1] = 0;
//            else{
//                long long int diff = sum-(2*g);
//                int left = 1,right = n,mid=-1,real_mid=-1;
//                while(left<right){
//                    mid = left+(right-left)/2;
//                    if(arr[mid] == diff){
//                        real_mid = mid;
//                        break;
//                        }
//                    else if(diff>arr[mid]) left = mid+1;
//                    else right = mid;
//                    }
//                    if(real_mid!=-1) arr[real_mid] = 0;
//                    else{
//                        flag = false;
//                        cout<<-1<<endl;
//                        continue;
//                        }
//                }
//                if(flag == true){
//                    for(int i = 1;i<=n+2;i++){
//                        if(arr[i]!=0) cout<<arr[i]<<" ";
//                        }
//                        cout<<endl;
//                    }
//    }
//    return 0;
//    }

//Review Site 
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,server1 = 0,server2 = 0;
//        cin>>n;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            if(arr[i] == 1) server1++;
//            else if(arr[i] == 2) server2++;
//            else{
//                if(server2>server1) server2++;
//                else server1++;
//                }
//             }
//             cout<<server1<<endl;
//        }
//        return 0;
//    }

//Yet Another Card Deck
//int main(){
//    int n,q;
//    cin>>n>>q;
//    vector<int> vec(n+1);
//    for(int i =n;i>=1;i--){
//        cin>>vec[i];
//        }
//    
//    return 0;
//    }

//Kings Task
//int main(){
//    int n,count1 = 0,count2 = 0;
//    cin>>n;
//    int arr[2*n+1];
//    int arr2[2*n+1];
//    bool g = true;
//    for(int i = 1;i<=2*n;i++){
//        cin>>arr[i];
//        arr2[i] = arr[i];
//        if(arr[i]!=i) g = false;
//        }
//        if(g == true) cout<<0<<endl;
//        else{
//        bool flag1 = true,result=false,ans1=true;
//        while(result == false){
//            if(count1>n){
//                ans1 = false;
//                break;
//                }
//        if(flag1 == true){
//            flag1 = false;
//            for(int i = 1;i<=2*n;i=i+2){
//                swap(arr[i],arr[i+1]);
//                }
//                count1++;
//                result = true;
//                for(int i = 1;i<2*n;i++){
//                    if(arr[i]>arr[i+1]){
//                        result = false;
//                        break;
//                        }
//                    }
//            }
//            if(flag1 == false){
//                flag1 = true;
//                for(int i = 1;i<=n;i++){
//                    swap(arr[i],arr[n+i]);
//                    }
//                    count1++;
//                    result = true;
//                    for(int i = 1;i<2*n;i++){
//                        if(arr[i]>arr[i+1]){
//                            result = false;
//                            break;
//                            }
//                        }
//                }
//    }
//    bool flag2 = false,result2=false,ans2=true;
//        while(result2 == false){
//            if(count2>n){
//                ans2 = false;
//                break;
//                }
//        if(flag2 == true){
//            flag2= false;
//            for(int i = 1;i<=2*n;i=i+2){
//                swap(arr2[i],arr2[i+1]);
//                }
//                count2++;
//                result2 = true;
//                for(int i = 1;i<2*n;i++){
//                    if(arr2[i]>arr2[i+1]){
//                        result2 = false;
//                        break;
//                        }
//                    }
//            }
//            if(flag2 == false){
//                flag2 = true;
//                for(int i = 1;i<=n;i++){
//                    swap(arr2[i],arr2[n+i]);
//                    }
//                    count2++;
//                    result2 = true;
//                    for(int i = 1;i<2*n;i++){
//                        if(arr2[i]>arr2[i+1]){
//                            result2 = false;
//                            break;
//                            }
//                        }
//                }
//    }
//    if(ans1 == true) cout<<count1<<endl;
//    else if(ans2 == true) cout<<count2<<endl;
//    else cout<<-1<<endl;
//        } 
//    return 0;
//}

//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int ind = n;
//        int arr[n+1]={0};
//        int arr1[n+1]={0};
//        for(int i = 1;i<=n;i++) cin>>arr[i];
//        for(int i = 1;i<=n;i++){
//            if(arr[i]%2 == 0){
//                arr1[ind] = arr[i];
//                ind--;
//                }
//            }
//            ind++;
//            for(int i = 1;i<=n;i++){
//                if(arr[i]%2 == 1) cout<<arr[i]<<" ";
//                }
//                for(int i = ind;i<=n;i++) cout<<arr1[i]<<" ";
//                cout<<endl;
//        }
//        return 0;
//    }

//TMT Document
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        string s;
//        cin>>s;
//        bool flag = false;
//        for(int i = 0;i<=n-2;i++){
//            if(s[i] == 'T' && s[i+1] == 'M' && s[i+2] == 'T'){
//                flag = true;
//                break;
//                }
//            }
//            if(flag == true) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//TMT Document
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,count = 0,t=0,m=0;
//        cin>>n;
//        string s;
//        cin>>s;
//        if(s[0] == 'M' || s[n-1] == 'M') cout<<"NO"<<endl;
//        else{
//        bool flag = true;
//        for(int i = n-1;i>=0;i--){
//            if(s[i] == 'T'){
//                count++;
//                t++;
//                }
//            else if(s[i] == 'M'){
//                m++;
//                if(count>0) count--;
//                else{
//                    flag = false;
//                    break;
//                    }
//                    bool check = false;
//                for(int j = i-1;j>=0;j--){
//                    if(s[j] == 'T'){
//                        t++;
//                        check = true;
//                        s[j] = 'W';
//                        break;
//                        }
//                    }
//                    if(check == false){
//                        flag = false;
//                        break;
//                        }
//                }
//            }
//            int half = t/2;
//            if(half!=m) cout<<"NO"<<endl;
//            else if(flag == false) cout<<"NO"<<endl;
//            else cout<<"YES"<<endl;
//        }
//    }
//    return 0;
//    }

//TMT Document 
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,t=0,m=0;
//        cin>>n;
//        string s;
//        cin>>s;
//        bool flag = true;
//        for(int i = 0;i<n;i++){
//            if(s[i] == 'T') t++;
//            else m++;
//            }
//            if(m*2 != t) cout<<"NO"<<endl;
//            else{
//                int count = 0;
//                for(int i = 0;i<n;i++){
//                    if(s[i] == 'T') count++;
//                    else count--;
//                    if(count<0){
//                        flag = false;
//                        break;
//                        }
//                    }
//                    if(flag == false){
//                        cout<<"NO"<<endl;
//                        continue;
//                        }
//                        count  = 0;
//                    for(int i = n-1;i>=0;i--){
//                    if(s[i] == 'T') count++;
//                    else count--;
//                    if(count<0){
//                        flag = false;
//                        break;
//                        }
//                    }
//                    if(flag == false){
//                        cout<<"NO"<<endl;
//                        continue;
//                        }
//                        else cout<<"YES"<<endl;
//                }
//        }
//        return 0;
//    }

//A-B Palindrome 
//int main(){
//    in t;
//    cin>>t;
//    while(t--){
//        int a,b;
//        cin>>a>>b;
//        string s;
//        cin>>s;
//        int n = s.length();
//        s = a+s;
//        bool flag = true;
//        if(n%2 == 0){
//            if(a%2!=0 || b%2!=0) cout<<-1<<endl;
//            }
//            else if(n%2 == 1){
//                if(a%2!=1 && b%2!=1) cout<<-1<<endl;
//                if(a%2 == 0 && s[n/2+1] == '0') cout<<-1<<endl;
//                if(b%2 == 0 && s[n/2+1] == '1') cout<<-1<<endl;
//                }
//                else{
//                for(int i=1;i<=n;i++){
//                    int j = n-i+1;
//                    if(s[i]!='?' && s[j]!='?' && s[i]!=s[j]){
//                        flag = false;
//                        break;
//                        }
//                        else if(s[i] == '?' && s[j]!='?'){
//                            if(s[j] == '0'){
//                                if()
//                                }
//                            }
//                    }
//                    }
//        }
//    }

//A-B Palindrome
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,fake_a,fake_b;
//        cin>>a>>b;
//        fake_a = a;
//        fake_b = b;
//        string s;
//        cin>>s;
//        int n = a+b;
//        for(int i = 0;i<n;i++){
//            if(s[i] == '0') a--;
//            else if(s[i] == '1') b--;
//            }
//            if(n%2 == 1){
//                if(s[n/2+1] == '?'){
//                    if(fake_a%2 == 1) s[n/2+1] = '0';
//                    else if(fake_b%2 == 1) s[n/2+1] = '1';
//                    else flag = false;
//                    }
//                }
//        }
//    }

//Double Ended strings
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string a,b;
//        cin>>a>>b;
//        int len_a = a.length();
//        int len_b = b.length();
//        bool flag = true;
//        if(len_a>len_b){
//            int i = 0;
//            while(a[i]!=b[0]){
//                i++;
//                len_a--;
//                }
//            
//            }
//        }
//    }

//Partial Relacement
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k,first=-1,last=-1,count = 0;
//        cin>>n>>k;
//        vector<int> vec;
//        string s;
//        cin>>s;
//        bool flag = true;
//        for(int i = 0;i<n;i++){
//            if(s[i] == '*'){
//                count++;
//                if(flag == true){
//                    s[i] = 'x';
//                    first = i;
//                    flag = false;
//                    vec.push_back(i);
//                    }
//                    else {
//                        vec.push_back(i);
//                        last = i;
//                    }
//                }
//            }
//            //cout<<first<<" "<<last<<endl;
//            s[last] = 'x';
//            int len = vec.size(),i=0,j=1,curr=first;
//            if(first!=-1 && last!=-1){
//                if(last-first<=k) cout<<2<<endl;
//                else{
//                    while(j!=len){
//                        if(vec[j]-vec[i]>k){
//                            if(j-i == 1){
//                                s[j] = 'x';
//                                count++;
//                                i = j;
//                                }
//                                else{
//                                    int mid = (j+i)/2;
//                                    s[mid] = 'x';
//                                    count++;
//                                    i = mid;
//                                    }
//                            }
//                            j++;
//                        }
//                        cout<<count<<endl;
//                    }
//                }
//                else if(first!=-1 && last == -1) cout<<1<<endl;
//                else if(first == -1 && last!=-1) cout<<1<<endl;
//    }
//    return 0;
//}

//Partial Replacement
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k,first = -1,last = -1,count = 0;
//        cin>>n>>k;
//        string s;
//        cin>>s;
//        bool flag = true;
//        for(int i = 0;i<n;i++){
//            if(s[i] == '*'){
//                if(flag == true){
//                    first = i;
//                    s[i] = 'x';
//                    count++;
//                    flag = false;
//                    }
//                    else{
//                        last = i;
//                        }
//                }
//            }
//            if(last!=-1) {
//                s[last] = 'x';
//                count++;
//            }
//            int prev_x = first,empty=-1;
//            if(last!=-1){
//            for(int i = first+1;i<=last;i++){
//                        if(s[i] == '*'){
//                        if(i-prev_x>k){
//                            s[empty] = 'x';
//                            count++;
//                            prev_x = empty;
//                            empty = i;
//                            }
//                            else empty = i;
//                        }
//                }
//                if(last-prev_x>k) count++;
//                cout<<count<<endl;
//            }
//            else if(last == -1 && first!=-1) cout<<1<<endl;
//            else if(last == -1 && first == -1) cout<<0<<endl;
//        }
//        return 0;
//    }

//Flip the bits
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,count = 0;
//        cin>>n;
//        string a,b;
//        cin>>a;
//        cin>>b;
//        for(int i = n-1;i>=0;i--){
//            if(a[i]!=b[i]){
//                count++;
//                for(int j = i;j>=0;j--){
//                    if(a[i] == 0) a[i] = 1;
//                    else a[i] = 0;
//                    }
//                }
//            }
//            cout<<count<<endl;
//        }
//        return 0;
//    }

//Flip the Bits
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,one = 0,zero = 0;
//        cin>>n;
//        string a,b;
//        cin>>a>>b;
//        if(a == b) cout<<"YES"<<endl;
//        else{
//        bool flag = false,result = true;
//        for(int i = 0;i<n;i++){
//            if(a[i] == '0') zero++;
//            else one++;
//            }
//        for(int i = n-1;i>=0;i--){
//            if(a[i]!=b[i] && flag == true){
//                if(a[i] == '0') zero--;
//                else one--;
//                }
//                else if(a[i] == b[i] && flag == false){
//                 if(a[i] == '0') zero--;
//                 else one--;   
//                }
//                else if(a[i] == b[i] && flag == true){
//                    if(one!=zero){
//                        result = false;
//                        break;
//                        }
//                        else{
//                            if(a[i] == '1') zero--;
//                            else one--;
//                            }
//                        flag = false;
//                    }
//            else if(a[i]!=b[i] && flag == false){
//                if(one!=zero){
//                    result = false;
//                    break;
//                    }
//                    else{
//                        if(a[i] == '1') one--;
//                        else zero--;
//                        }
//                flag = true;
//                }
//            }
//            if(result == false) cout<<"NO"<<endl;
//            else cout<<"YES"<<endl;
//        }
//    }
//        return 0;
//    }

//Binary Removals
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        s = s+'a';
//        bool one = true,zero = true;
//        for(int i = 0;i<s.length()-1;i++){
//            if(s[i] == '0'){
//                if(s[i+1] == '0') zero=false;
//                }
//                else if(s[i] == '1'){
//                    if(s[i+1] == '1') one = false;
//                    }
//                    if(one == false && zero == false) break;
//            }
//            if(one == false && zero == false) cout<<"NO"<<endl;
//            else cout<<"YES"<<endl;
//        }
//        return 0;
//    }

//Binary Removals
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        s = s+'a';
//        bool two_ones = true,result = true;
//        for(int i = 0;i<s.length()-1;i++){
//            if(s[i] == '1'){
//                if(s[i+1] == '1') two_ones = false;
//                }
//                if(s[i] == '0'){
//                    if(s[i+1] == '0'){
//                    if(two_ones == false){
//                        result = false;
//                        break;
//                        }
//                         }
//                          }
//            }
//            if(result == false) cout<<"NO"<<endl;
//            else cout<<"YES"<<endl;
//        }
//        return 0;
//    }

//Meximization
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++) cin>>arr[i];
//        sort(arr,arr+n);
//        int small=-1,j=0,sum=0;
//        while(j!=n){
//            int i = 0,findd = 0;
//            for(;i<=j;i++){
//                if(findd == arr[i]) findd++;
//                else break;
//                }
//                sum+=findd;
//                j++;
//            }
//           for(auto it: arr) cout<<it<<" ";
//           cout<<endl; 
//        }
//        return 0;
//    }

//k-lcm(easy version)
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k,first,second,third;
//        cin>>n>>k;
//        if(n%2 == 0){
//            if(n%4 == 0){
//                first = n/2;
//                second = first/2;
//                third = second;
//                }
//                else{
//            first = n-(n-2);
//            second = (n-2)/2;
//            third = second;
//                }
//            }
//            else{
//                first = n-(n-1);
//                second = (n-1)/2;
//                third = second;
//                }
//                cout<<first<<" "<<second<<" "<<third<<endl;
//        }
//        return 0;
//    }

//M-arrays
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,count = 0;
//        cin>>n>>m;
//        map<int,int> mp;
//        for(int i = 0;i<n;i++){
//            int x;
//            cin>>x;
//            if(mp.find(x) == mp.end()) mp[x] = 1;
//            else mp[x]++;
//            }
//            for(auto it : mp){
//                int current  = it.first;
//                if((current+current)/m == 0){
//                    count++;
//                    }
//                    else{
//                        for(auto it1 : mp){
//                            if((current+it1->first)/m == 0){
//                                
//                                }
//                            }
//                        }
//                }
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,ans = 0;
//        cin>>n>>m;
//        map<int,int> mp;
//        for(int i = 0;i<n;i++){
//            int x;
//            cin>>x;
//            int rem = x%m;
//            if(mp.find(rem) == mp.end()) mp[rem] = 1;
//            else mp[rem]++;
//            }
//            if(mp[0]) ans++;
//            for(int i = 1;i<m;i++){
//                if(abs(mp[i]-mp[m-i])<=1) ans++;
//                else ans+=abs(mp[i]-mp[m-i]);
//                mp[m-i] = 0;
//                }
//                cout<<ans<<endl;
//        }
//        return 0;
//    }

//Split it
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k;
//        cin>>n>>k;
//        string s,fake;
//        cin>>s;
//        for(int i = n-1;i>=0;i--){
//            fake = fake+s[i];
//            }
//            if(k == 0) cout<<"YES"<<endl;
//            else if((2*k+1)>n) cout<<"NO"<<endl;
//            else if(fake == s) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Max and Mex
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,k,sizes = 100090,maxi=-1,mexi;
//        cin>>n>>k;
//        vector<bool> vec(sizes,1);
//        set<long long int> st;
//        while(n--){
//            long long int x;
//            cin>>x;
//            st.insert(x);
//            maxi = max(maxi,x);
//            vec[x] = 0;
//            }
//            for(int i = 0;i<sizes;i++){
//                if(vec[i] == 1){
//                    mexi = i;
//                    break;
//                    }
//                }
//                while(k--){
//                    if(vec[mexi]!=1){
//                     for(int j = mexi+1;j<sizes;j++){
//                         if(vec[j] == 1){
//                             mexi = j;
//                             break;
//                             }
//                         }   
//                    }
//                    long long int mid;
//                    if((mexi+maxi)%2 == 1){
//                        mid = (mexi+maxi)/2;
//                        mid++;
//                        }
//                    else mid = (mexi+maxi)/2;
//                    maxi = max(mid,maxi);
//                    vec[mid] = 0;
//                    st.insert(mid);
//                    }
//                    cout<<st.size()<<endl;
//        }
//        return 0;
//    }

//Max and Mex
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k,maxi = -1,smallest = 0,mexi=-1;
//        cin>>n>>k;
//        int arr[n];
//        set<int> st;
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            maxi = max(arr[i],maxi);
//            st.insert(arr[i]);
//            }
//            int sizes = st.size();
//            sort(arr,arr+n);
//        for(int i = 0;i<n;i++){
//            if(arr[i]!=smallest){
//                mexi = i;
//                }
//                else smallest++;
//            }
//            if(mexi == -1) mexi = maxi+1;
//            if(mexi>maxi) sizes = sizes+k;
//            else{
//                int ele = mexi+1;
//                if(st.find(ele)==st.end() && k!=0) sizes = sizes+1;
//                }
//                cout<<sizes<<endl;
//        }
//        return 0;
//    }

//Split it
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k;
//        cin>>n>>k;
//        string s;
//        cin>>s;
//        s = 'a'+s;
//        int k_1 = n-(2*k);
//        if(k == 0) cout<<"YES"<<endl;
//        else if(k_1 == 0) cout<<"NO"<<endl;
//        else{
//        //int limit = n/(2*k);
//        bool flag = true;
//        for(int i = 1;i<=k;i++){
//            if(s[i]!=s[n-i+1]){
//                flag = false;
//                break;
//                }
//            }
//            if(flag == true) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//    }
//        return 0;
//    }

//Diamond Miners
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        double sum = 0;
//        cin>>n;
//        int N = 2*n;
//        vector<int> xn;
//        vector<int> yn;
//        while(N--){
//            int x,y;
//            cin>>x>>y;
//            if(x == 0) yn.push_back(abs(y));
//            else xn.push_back(abs(x));
//            }
//            sort(yn.begin(),yn.end());
//            sort(xn.begin(),xn.end());
//            for(int i = 0;i<n;i++){
//                sum+=sqrt(pow(yn[i],2)+pow(xn[i],2));
//                }
//                cout<<setprecision(15)<<sum<<endl;
//        }
//        return 0;
//    }

//Arithmetic Array
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,sum = 0;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//            }
//            if(sum<=0) cout<<1<<endl;
//            else if(sum<n) cout<<1<<endl;
//            else if(sum == n) cout<<0<<endl;
//            else if(sum>0){
//                int diff = sum-n;
//                cout<<diff<<endl;
//                }
//        }
//        return 0;
//    }

//Bad Boy
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,i,j;
//        cin>>n>>m>>i>>j;
//        int first = (i-1)+(m-j)+(n-i)+(j-1);
//        int second = (n-i)+(m-j)+(i-1)+(j-1);
//        if(first>=second) cout<<1<<" "<<m<<" "<<n<<" "<<1<<endl;
//        else cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
//        }
//        return 0;
//    }

//Challenging Cliffs
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,diff = 1000000010,ind1,ind2;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            }
//        sort(arr,arr+n);
//        for(int i = 1;i<n;i++){
//            int curr_diff = arr[i]-arr[i-1];
//                if(curr_diff<=diff){
//                    diff = curr_diff;
//                    ind1 = i-1;
//                    ind2 = i;
//                    }
//            }
//            if(n == 2){
//                cout<<arr[0]<<" "<<arr[1]<<endl;
//                }
//                else{
//            //cout<<arr[ind1]<<" "<<arr[ind2]<<endl;
//            for(int i = ind2;i<n;i++) cout<<arr[i]<<" ";
//            for(int j = 0;j<=ind1;j++) cout<<arr[j]<<" ";
//            cout<<endl;
//        }
//    }
//        return 0;
//    }

//Three Swimmers
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int p,a,b,c,diff_a,diff_b,diff_c;
//        cin>>p>>a>>b>>c;
//        if(a>=p) diff_a = a-p;
//        else{
//            long long int divi = p/a;
//            if(p%a!=0) divi = divi+1;
//            long long int total = divi*a;
//            diff_a = total-p;
//            }
//            if(b>=p) diff_b = b-p;
//        else{
//            long long int divi = p/b;
//            if(p%b!=0) divi = divi+1;
//            long long int total = divi*b;
//            diff_b = total-p;
//            }
//            if(c>=p) diff_c = c-p;
//        else{
//            long long int divi = p/c;
//            if(p%c!=0) divi = divi+1;
//            long long int total = divi*c;
//            diff_c = total-p;
//            }
//            long long int ans = min(diff_a,min(diff_b,diff_c));
//            cout<<ans<<endl;
//        }
//        return 0;
//    }

//Card Deck
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        vector<int> vec(n+1);
//        int arr[n+1];
//        vector<int> result;
//        for(int i = 1;i<=n;i++){
//            cin>>vec[i];
//            int curr = vec[i];
//            arr[curr] = i;
//            }
//            int limit = n;
//            for(int i = n;i>=1;i--){
//                int ele = arr[i];
//                if(ele<=limit){
//                    for(int j = ele;j<=limit;j++){
//                        result.push_back(vec[j]);
//                        }
//                        limit = ele-1;
//                    }
//                }
//                for(auto it : result) cout<<it<<" ";
//                cout<<endl;
//        }
//        return 0;
//    }

//Love Song 
//int main(){
//        long long int n,q;
//        cin>>n>>q;
//        string s;
//        cin>>s;
//        s = 'a'+s;
//        long long int arr[n+1]={0};
//        for(int i = 1;i<=n;i++){
//            int ele = s[i]-'a'+1;
//            arr[i] = ele+arr[i-1];
//            }
//            while(q--){
//                int l,r;
//                cin>>l>>r;
//                cout<<arr[r]-arr[l-1]<<endl;
//                }
//        return 0;
//    }

//Stable Groups
//int main(){
//    long long int n,k,x;
//    cin>>n>>k>>x,count = 0,last_ele=-1;
//    long long int arr[n];
//    vector<long long int> vec;
//    for(int i = 0;i<n;i++){
//        cin>>arr[i];
//        }
//        sort(arr,arr+n);
//        for(int i = 1;i<n;i++){
//            if(arr[i]-arr[i-1]>x){
//                int ele,diff;
//                while(k>0 && diff>x){
//                    ele = (arr[i]+arr[i-1])/2;
//                    diff = ele-arr[i-1];
//                    k--;
//                    }
//                }
//            }
//    }

//Yet Another Strings
//int main(){
//    int n,q;
//    cin>>n>>q;
//    vector<int> vec(n);
//    vector<int> arr(n);
//    for(int i = 0;i<n;i++) cin>>vec[i];
//    bool flag = true;
//    while(q--){
//        int query;
//        cin>>query;
//        if(vec.size() == 0) flag = false;
//        else if(arr.size() == 0) flag = true;
//        if(flag == true){
//            
//            }
//        }
//    }

//Yet Another  Card Deck
//int main(){
//    int n,q;
//    cin>>n>>q;
//    map<int,int> mp;
//    for(int i = 1;i<=n;i++){
//        int x;
//        cin>>x;
//        if(mp.find(x)==mp.end()){
//            mp[x] = i;
//            }
//        }
//        while(q--){
//            int query;
//            cin>>query;
//            auto it = mp.find(query);
//            int curr = it->second;
//             //cout<<curr<<" ";
//            it->second = 1;
//            for(auto it1 = mp.begin();it1!=mp.end();it1++){
//                if(it1->second<curr && it1->first!=query){
//                    int ele = it1->second;
//                    ele++;
//                    it1->second = ele;
//                    }
//                }
//                cout<<curr<<" ";
//            }
//            //for(auto it : mp) cout<<it.first<<" "<<it.second<<endl;
//            cout<<endl;
//            return 0;
//    }

//GCD Length
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int a,b,c;
//        cin>>a>>b>>c;
//        long long int x = 5*pow(10,a-1);
//        long long int y = 5*pow(10,b-1);
//        long long int gcds = 5*pow(10,c-1);
//        if(a == b && b == c) cout<<x<<" "<<y<<endl;
//        else{
//        y+=gcds;
//        cout<<x<<" "<<y<<endl;
//        }
//    }
//        return 0;
//    }

//Contest Start
//int main(){
//    int k;
//    cin>>k;
//    while(k--){
//        int n,x,t;
//        cin>>n>>x>>t;
//        if(x>t) cout<<0<<endl;
//        else{
//            int z = (t-(x-1));
//            int ans = (z*n)-(z*(z+1))/2;
//            cout<<ans<<endl;
//            }
//        }
//        return 0;
//    }

//Stable Groups
//int main(){
//    long long int n,k,x,count = 1;
//    cin>>n>>k>>x;
//    long long int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    sort(arr,arr+n);
//    for(int i = 1;i<n;i++){
//        if(arr[i] - arr[i-1]>x){
//            if(k == 0) count++;
//            else{
//                long long int left = arr[i-1],right = arr[i];
//                while(k!=0 && right-left>x){
//                    left = left+x;
//                    k--;
//                    }
//                    if(right-left>x) count++;
//                }
//            }
//        }
//        cout<<count<<endl;
//        return 0;
//    }

//Kth Largest Value
//int main(){
//    int n,q,ones = 0;
//    cin>>n>>q;
//    int arr[n+1];
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        if(arr[i] == 1) ones++;
//        }
//        while(q--){
//            int t,second;
//            cin>>t>>second;
//            if(t == 1){
//                if(arr[second] == 1){
//                    arr[second] = 0;
//                    ones--;
//                    }
//                else{
//                    arr[second] = 1;
//                    ones++;
//                    }
//                } 
//                else{
//                    if(second<=ones) cout<<1<<endl;
//                    else cout<<0<<endl;
//                    }
//            }
//            return 0;
//    }

//Miminmal Cost
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,u,v,first=0,second=0;
//        cin>>n>>u>>v;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            }
//            int ele1 = arr[1];
//            if(arr[2] == ele1){
//                first = u+v;
//                }
//                else{
//                    first = u;
//                    }
//                    int ele2 = arr[n];
//                    if(arr[n-1] == ele2){
//                        second = u+v;
//                        }
//                        else{
//                            second = v;
//                            }
//                            int mini = min(first,second);
//                            cout<<mini<<endl;
//        }
//        return 0;
//    }

//Minimal Cost
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,u,v,diff = 0,ans = 0;
//        cin>>n>>u>>v;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++) cin>>arr[i];
//        for(int i = 2;i<=n;i++){
//            int ele = abs(arr[i] - arr[i-1]);
//            diff = max(diff,ele);
//            }
//            //cout<<diff<<endl;
//            if(diff == 0) ans = u+v;
//            else if(diff == 1){
//                int mini = min(u,v);
//                ans = mini;
//                }
//                else ans = 0;
//                cout<<ans<<endl;
//        }
//        return 0;
//    }

//Sum of Cubes
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int x;
//        cin>>x;
//        long long int limit = cbrt(x)+cbrt(x);
//        bool ans = false;
//        for(int i = 1;i<=limit;i++){
//            long long int need = x-pow(i,3);
//            long long int left = i,right = limit,mid;
//            bool flag = false;
//            while(right-left>0){
//                //count++;
//                mid = (right+left)/2;
//                long long int curr=pow(mid,3);
//                if(curr == need){
//                    flag = true;
//                    break;
//                    }
//                    else if(curr<need) left = mid+1;
//                    else right = mid;
//                }
//                if(flag == true){
//                    ans = true;
//                    break;
//                    }
//            }
//            //cout<<count<<endl;
//            if(ans == true) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int x;
//    cin>>x;
//    int ele = pow(x,1/2);
//    cout<<ele<<endl;
//    }

//Balanaced Remainders
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,c0 = 0,c1 = 0,c2 = 0,steps = 0;
//        cin>>n;
//        //int arr[n];
//        for(int i = 0;i<n;i++){
//            int x;
//            cin>>x;
//            if(x%3 == 0) c0++;
//            else if(x%3 == 1) c1++;
//            else c2++;
//            }
//            int ele = n/3;
//            if(c0>ele && c1<ele){
//                int extra=c0-ele;
//                int need = ele-c1;
//                int use = min(extra,need);
//                c0 = c0-use;
//                c1 = c1+use;
//                steps+=(use*1);
//                }
//                if(c1>ele && c2<ele){
//                int extra=c1-ele;
//                int need = ele-c2;
//                int use = min(extra,need);
//                c1 = c1-use;
//                c2 = c2+use;
//                steps+=(use*1);
//                }
//                if(c2>ele && c0<ele){
//                int extra=c2-ele;
//                int need = ele-c0;
//                int use = min(extra,need);
//                c2 = c2-use;
//                c0 = c0+use;
//                steps+=(use*1);
//                }
//                if(c0>ele && c2<ele){
//                int extra=c0-ele;
//                int need = ele-c2;
//                int use = min(extra,need);
//                c0 = c0-use;
//                c2 = c2+use;
//                steps+=(use*2);
//                }
//                if(c1>ele && c0<ele){
//                int extra=c1-ele;
//                int need = ele-c0;
//                int use = min(extra,need);
//                c1 = c1-use;
//                c0 = c0+use;
//                steps+=(use*2);
//                }
//                if(c2>ele && c1<ele){
//                int extra=c2-ele;
//                int need = ele-c1;
//                int use = min(extra,need);
//                c2 = c2-use;
//                c1 = c1+use;
//                steps+=(use*2);
//                }
//                cout<<steps<<endl;
//        }
//    }

//Cat Cycle
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,x,ans;
//        cin>>n>>x;
//        if(n%2 == 0) ans = n-(n-x);
//        else if(n%2 == 1 && x>n){
//            long int half = n/2;
//            long int up = x-1;
//            long int ele = up/half;
//            long int accurate = x%n;
//            ans = accurate+ele;
//            }
//        else{
//            long int ele = n/2+1;
//            if(n == x) ans = 2;
//            else if(x<ele) ans = (n-(n-x));
//            else ans = (n-(n-x)+1);
//            }
//            cout<<ans<<endl;
//        }
//        return 0;
//    }

//Cat Cycle
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,x,ans;
//        cin>>n>>x;
//        if(n%2 == 0){
//            if(x%n == 0) ans = n;
//            else ans = x%n;
//            }
//        else{
//            if(x<=n){
//                int ele = n/2+1;
//                if(x == n) ans = 2;
//                else if(x<ele) ans = x;
//                else if(x == ele) ans = x+1;
//                else ans = (n-(n-x)+1);
//                }
//            else{
//            long int half = n/2;
//            long int up = x-1;
//            long int ele = up/half;
//            long int accurate = x%n;
//            ans = (accurate+ele)%n;
//                    }
//            }
//            cout<<ans<<endl;
//    }
//    }

//Replace and Keep Sorted
//int main(){
//    int n,q,k;
//    cin>>n>>q>>k;
//    int arr[n+1]={0};
//    int b[n+1]={0};
//    for(int i = 1;i<=n;i++) cin>>arr[i];
//    for(int i = 2;i<n;i++){
//        arr[i]+=arr[i]-arr[i-1]-1;
//        arr[i]+=arr[i+1]-arr[i]-1;
//        }
//    }

//Add and Divide
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,count  = 0;
//        cin>>a>>b;
//        if(b>a) cout<<1<<endl;
//        else if(a%2 == 0){
//            if(b%2 == 0){
//                b++;
//                count++;
//                }
//            if(b%2 == 1 && a%b == 0){
//                b = b+2;
//                count = count+2;
//                }
//            }
//            else{
//                if(b%2 == 1){
//                    b++;
//                    count++;
//                    }
//                    if(b%2 == 0 && a%b == 0){
//                        b = b+2;
//                        count = count+2;
//                        }
//                        if(b == 2){
//                            b = b+2;
//                            count = count+2;
//                            }
//                }
//                while(a!=0){
//                    a = a/b;
//                    count++;
//                    }
//                    cout<<count<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,count = 0;
//        cin>>a>>b;
//        bool flag = true;
//        if(b>a) cout<<1<<endl;
//        else{
//            while(a!=0){
//                count++;
//                if(flag == true){
//                    b++;
//                    flag = false;
//                    }
//                else{
//                    a = a/b;
//                    flag = true;
//                    }
//                }
//            }
//            cout<<count<<endl;
//        }
//        return 0;
//    }

//Add and Divide
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int a,b,ans = 1000000000;
//        cin>>a>>b;
//        for(int i = 0;i*i<=a;i++){
//            long long int count = 0;
//            if(b == 1 && i == 0) continue;
//            count = i;
//            long long int c = a;
//            while(c!=0){
//                c = c/(b+i);
//                count++;
//                }
//                ans = min(ans,count);
//            }
//            cout<<ans<<endl;
//        }
//        return 0;
//    }

//Space Navigation
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x,y;
//        cin>>x>>y;
//        string s;
//        cin>>s;
//        char a,b;
//        if(x<0){
//            a = 'L';
//            }
//            else a = 'R';
//            if(y<0) b = 'D';
//            else b = 'U';
//            int req_x = abs(0-x);
//            int req_y = abs(0-y);
//            int curr_x = 0,curr_y = 0;
//            for(int i = 0;i<s.length();i++){
//                if(s[i] == a) curr_x++;
//                if(s[i] == b) curr_y++;
//                }
//                if(curr_x>=req_x && curr_y>=req_y) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Pretty Permutations
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n+1];
//        int even = 2,odd=1;
//        for(int i = 1;i<=n;i=i+2){
//            arr[i] = even;
//            even = even+2;
//            }
//            for(int i = 2;i<=n;i=i+2){
//                arr[i] = odd;
//                odd = odd+2;
//                }
//                if(n%2 == 1){
//                    int ele = arr[n-1];
//                    arr[n-1] = n;
//                    arr[n] = ele;
//                    }
//                    for(int i = 1;i<=n;i++) cout<<arr[i]<<" ";
//                    cout<<endl;
//        }
//        return 0;
//    }

//Pleasant Pairs
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long int n,count = 0;
//        cin>>n;
//        long int arr[n+1];
//        for(int i = 1;i<=n;i++) cin>>arr[i];
//        for(int i = 1;i<n;i++){
//            int start = 1,req;
//            long int pro = arr[i]*start;
//            long int ele = pro-i;
//            while(ele<=n){
//                if(ele>i){
//                    if((arr[ele]*arr[i]) == (i+ele)){
//                        count++;
//                        }
//                    }
//                    //cout<<count<<endl;
//                start++;
//                pro = (arr[i]*start);
//                ele = pro-i;
//                }
//            }
//            cout<<count<<endl;
//        }
//        return 0;
//    }

//New Colony
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k,ans = -1;
//        cin>>n>>k;
//        int height[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>height[i];
//            }
//           for(int i = 1;i<n;i++){
//               if(height[i]<height[i+1]){
//                   int diff = height[i+1]-height[i];
//                   if(k>diff){
//                       k = k-diff;
//                       height[i] = height[i+1];
//                       i = 1;
//                       }
//                       else{
//                           ans = i;
//                           break;
//                           }
//                   }
//               }
//               cout<<ans<<endl; 
//        }
//        return 0;
//    }

//K-Divisible Sum
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k;
//        cin>>n>>k;
//        int ele = n/k;
//        int rem = n%k;
//        cout<<(rem+ele)<<endl;
//        }
//        return 0;
//    }

//K-Divisible sum
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k,ans = 0;
//        cin>>n>>k;
//        if(n%k == 0) ans = 1;
//        else if(n%k!=0 && n>k) ans = 2;
//        else if(k%n == 0) ans = k/n;
//        else if(k>n) ans = (k/n)+1;
//        cout<<ans<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int b,indii = n-1,prev = -1;
//        cin>>b;
//        int arr1[n]={0};
//        int arr2[n]={0};
//        while(b!=0){
//            int ele = b%10;
//            arr1[indii] = ele;
//            indii--;
//            b = b/10;
//            }
//            //for(auto it : arr1) cout<<it<<" ";
//            for(int i = 0;i<n;i++){
//                if(arr1[i] == 0){
//                    if(prev == 1){
//                        arr2[i] = 0;
//                        prev = 0;
//                        }
//                        else{
//                            arr2[i] = 1;
//                            prev = 1;
//                            }
//                    }
//                    else if(arr1[i] == 1){
//                        if(prev == 2){
//                            arr2[i] = 0;
//                            prev = 1;
//                            }
//                         else{
//                             arr2[i] = 1;
//                             prev = 2;
//                             }
//                        }
//                }
//                for(int i = 0;i<n;i++) cout<<arr2[i];
//                cout<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,prev = -1;
//        cin>>n;
//        string s;
//        cin>>s;
//        string b;
//        for(int i = 0;i<s.length();i++){
//            if(s[i] == '1'){
//                if(prev == 2){
//                    b = b+'0';
//                    prev = 1;
//                    }
//                    else{
//                        b = b+'1';
//                        prev = 2;
//                        }
//                }
//                else if(s[i] == '0'){
//                    if(prev == 1){
//                        b = b+'0';
//                        prev = 0;
//                        }
//                        else{
//                            b = b+'1';
//                            prev = 1;
//                            }
//                    }
//            }
//            cout<<b<<endl;
//        }
//        return 0;
//    }

//Different Divisors
//const int sizes = 1000000;
//bool arr[sizes];
//memset(arr,true,sizeof(arr));
//vector<int> vec;
//int main(){
//    const int sizes = 1000000;
//bool arr[sizes];
//memset(arr,true,sizeof(arr));
//    for(int i = 2;i<=sizes;i++){
//    if(arr[i] == true){
//        vec.push_back(i);
//        for(int j = i*i;j<=sizes;j=j+i){
//            if(arr[j] == true) arr[j] = false;;
//            }
//        }
//    }
//    int t;
//    cin>>t;
//    while(t--){
//        int d;
//        cin>>d;
//        int ans = 1,j;
//        for(int i = 0;i<vec.size();i++){
//            if(vec[i]-1>=d){
//                ans = ans*vec[i];
//                j = vec[i];
//                break;
//                }
//            }
//            for(int i = 0;i<vec.size();i++){
//                if(vec[i]-j>=d){
//                    ans = ans*vec[i];
//                    break;
//                    }
//                }
//                cout<<ans<<endl;
//        }
//        return 0;
//    }

//
//bool check(vector<int> vec,int sum,int n){
//    bool dp[n+1][sum+1];
//    for(int i = 0;i<=n;i++){
//        dp[i][0] = true;
//        }
//        for(int i = 0;i<=sum;i++){
//            dp[0][i] = false;
//            }
//            for(int i = 1;i<=n;i++){
//                for(int j = 1;j<=sum;j++){
//                    if(vec[i-1]<=j){
//                        dp[i][j] = (dp[i-1][j] || dp[i][j-vec[i-1]]);
//                        }
//                        else dp[i][j] = dp[i-1][j];
//                    }
//                }
//                return dp[n][sum];
//    }
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int q,d;
//        cin>>q>>d;
//        while(q--){
//            int x;
//            cin>>x;
//            if(x>100) cout<<"YES"<<endl;
//            else{
//                int ele = (d*10+d);
//                if(x>=ele) cout<<"YES"<<endl;
//                else{
//                    vector<int> vec;
//                    int start = d;
//                    while(start<ele){
//                        vec.push_back(start);
//                        start = start+10;
//                        }
//                        for(int i = d*10;i<((d*10)+d);i++) vec.push_back(i);
//                        int n = vec.size();
//                        int ans = check(vec,x,n);
//                        if(ans == true) cout<<"YES"<<endl;
//                        else cout<<"NO"<<endl;
//                    }
//                }
//            }
//        }
//        return 0;
//    }

//Replacing elements
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,d;
//        cin>>n>>d;
//        int arr[n];
//        bool flag = true;
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            if(arr[i]>d) flag = false;
//            }
//            sort(arr,arr+n);
//            if(flag == false){
//                if(arr[0]+arr[1]<=d) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//                }
//                else cout<<"YES"<<endl;
//        }
//        return 0;
//    }

//String lcm
//int main(){
//    int q;
//    cin>>q;
//    while(q--){
//        string s,t;
//        cin>>s>>t;
//        int arr[2];
//        for(int i = 0;i<s.length();i++){
//            int ele=s[i]-'a';
//            arr[ele] = 1;
//            }
//        int len_s = s.length();
//        int len_t = t.length();
//        if(len_s == len_t){
//            if(s == t) ans = s;
//            else s='-1';
//            }
//            else{
//                if(arr[0]!=1 || arr[1]!=1){
//                    len_S-
//                    while(len_s--)
//                    }
//                }
//        }
//    }

//Even-odd Game
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,alice=0,bob=0;
//        cin>>n;
//        multiset<int> odd;
//        multiset<int> even;
//        while(n--){
//            int x;
//            cin>>x;
//            if(x%2 == 0) even.insert(x);
//            else odd.insert(x);
//            }
//            bool flag = true;
//            while(even.size()!=0 || odd.size()!=0){
//                if(flag == true){
//                    flag = false;
//                    if(even.size()!=0){
//                        auto it = even.end();
//                        it--;
//                        alice+=(*it);
//                        even.erase(it);
//                        }
//                        else{
//                            auto it = odd.end();
//                            it--;
//                            odd.erase(it);
//                            }
//                    }
//                    else{
//                        flag = true;
//                        if(odd.size()!=0){
//                            auto it = odd.end();
//                            it--;
//                            bob+=(*it);
//                            odd.erase(it);
//                            }
//                         else{
//                             auto it = even.end();
//                             it--;
//                             even.erase(it);
//                             }
//                        }
//                }
//                cout<<bob<<" "<<alice<<endl;
//                if(bob>alice) cout<<"Bob"<<endl;
//                else if(bob == alice) cout<<"Tie"<<endl;
//                else cout<<"Alice"<<endl;
//        }
//        return 0;
//    }

//Cards for friends
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int w,h,n,ans = 0;
//        cin>>w>>h>>n;
//        if(w%2 == 0) ans+=w;
//        if(h%2 == 0) ans+=h;
//        if(n == 1) cout<<"YES"<<endl;
//        else if(ans>=n) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Fair Division
//bool check(int arr[ ],int sum,int n){
//    bool dp[n+1][sum+1];
//    for(int i = 0;i<=n;i++) dp[0][i] = false;
//    for(int j = 0;j<=sum;j++) dp[j][0] = true;
//    for(int i = 1;i<=n;i++){
//        for(int j = 1;j<=sum;j++){
//            if(arr[i-1]<=j){
//                dp[i][j] = (dp[i-1][j] || dp[i][j-arr[i-1]]);
//                }
//                else dp[i][j] = dp[i-1][j];
//            }
//        }
//        return dp[n][sum];
//    }
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,sum = 0;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//            }
//            if(sum%2 == 1) cout<<"NO"<<endl;
//            else{
//                int ans = check(arr,sum/2,n);
//                if(ans == 1) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//            }
//        }
//        return 0;
//    }

//Long Jumps
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,maxi = -1;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            }
//            for(int i = 0;i<n;i++){
//                long long int ele = arr[i],sum = 0,j=i;
//                sum+=ele;
//                while(j<n){
//                    j = j+arr[j];
//                    if(j<n) sum+=arr[j];
//                    }
//                    maxi = max(maxi,sum);
//                }
//                cout<<maxi<<endl;
//        }
//        return 0;
//    }

//Even-Odd Game
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,alice = 0,bob = 0;
//        cin>>n;
//        multiset<int,greater<int> > odd;
//        multiset<int,greater<int> > even;
//        while(n--){
//            int x;
//            cin>>x;
//            if(x%2 == 0) even.insert(x);
//            else odd.insert(x);
//            }
//            bool flag = true;
//            while(odd.size()!=0 || even.size()!=0){
//                if(flag == true){
//                    flag = false;
//                    auto it1 = even.begin();
//                    auto it2 = odd.begin();
//                    int even_g = *it1;
//                    int odd_g = *it2;
//                    if(even_g>=odd_g){
//                        alice+=even_g;
//                        even.erase(it1);
//                        }
//                        else odd.erase(it2);
//                    }
//                    else{
//                        flag = true;
//                        auto it1 = odd.begin();
//                        auto it2 = even.begin();
//                        int odd_g = *it1;
//                        int even_g = *it2;
//                        if(odd_g>=even_g){
//                            bob+=odd_g;
//                            odd.erase(it1);
//                            }
//                            else even.erase(it2);
//                        }
//                }
//                if(bob == alice) cout<<"Tie"<<endl;
//                else if(bob>alice) cout<<"Bob"<<endl;
//                else cout<<"Alice"<<endl;
//        }
//        return 0;
//    }

//Cards For friends
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int w,h,n,pieces1 = 1,pieces2 = 1;
//        cin>>w>>h>>n;
//        while(w%2 == 0 && w!=1){
//            pieces1 = pieces1+pieces1;
//            w = w/2;
//            }
//            while(h%2 == 0 && h!=1){
//            pieces2 = pieces2+pieces2;
//            h = h/2;
//            }
//            int ans = (pieces1*pieces2);
//            if(ans>=n) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Long Jumps
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,maxi = -1;
//        cin>>n;
//        long long int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            }
//            for(int i = 0;i<n;i++){
//                if(arr[i] == -1) continue;
//                long long int j,sum = 0;
//                j = i;
//                //sum+=arr[i];
//                //arr[j] = -1;
//                //bool flag = true;
//                while(j<n){
//                     if(j<n){
//                    if(arr[j] == -1){
//                        //flag = false;
//                        break;
//                        } 
//                        sum+=arr[j];
//                        if(arr[j]>0){
//                            long long int ele = arr[j];
//                            j = j+arr[j];
//                            arr[j-ele] = -1;
//                            }
//                        }
//                    }
//                    maxi = max(sum,maxi);
//                }
//                cout<<maxi<<endl;
//        }
//        return 0;
//    }


//Strange partition
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,x,first = 0,second = 0,third = 0;
//        cin>>n>>x;
//        vector<int> vec1;
//        vector<int> vec2;
//        for(int i = 0;i<n;i++){
//            int ele;
//            cin>>ele;
//            if(ele%x!=0){
//                vec2.push_back(ele);
//                second+=ele;
//            }
//            else{
//                vec1.push_back(ele);
//                first+=(ele/x);
//            }
//            }
//            cout<<((second/x)+first)<<endl;
//        }
//        return 0;
//    }

//Strange List
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,x,first = -1,sum = 0;
//        cin>>n>>x;
//        long long int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//            if((arr[i]%x)!=0 && first == -1){
//                first = i;
//                }
//            }
//            if(first == -1) first = n;
//            for(int i = 0;i<first;i++){
//                int count = 1;
//                while((arr[i]%x) == 0){
//                    arr[i] = arr[i]/x;
//                    if(arr[i]%x!=0){
//                        
//                        }
//                    sum+=(count*x*arr[i]);
//                    count++;
//                    }
//                }
//                cout<<sum<<endl;
//        }
//        return 0;
//    }

//Strange List
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,x,sum = 0;
//        cin>>n>>x;
//        int dp[n+1][32]={0};
//        for(int i = 0;i<n;i++){
//            int ele;
//            cin>>ele;
//            sum = sum+ele;
//            int j = 0;
//            dp[i][j] = x;
//            j++;
//            while((ele%x)==0){
//                ele = ele/x;
//                dp[i][j] = ele;
//                j++;
//                }
//            }
//            bool flag = true;
//            for(int j = 1;j<31;j++){
//            for(int i = 0;i<n;i++){
//                if(dp[i][j] == 0){
//                    flag = false;
//                    break;
//                    }
//                    else sum+=(dp[i][0]);
//                }
//                if(flag == false) break;
//        }
//        cout<<sum<<endl;
//    }
//    return 0;
//}

//Red and Blue
//int main(){
//    int t;
//    cin>>t;
//        for(int i = 0;i<t;i++){
//        int n,maxi = -1,pos = 0,neg = 0,maxi1 = -1;
//        cin>>n;
//        for(int i = 0;i<n;i++){
//            int x;
//            cin>>x;
//            if(x>0) pos = pos+x;
//            else neg = neg+abs(x);
//            int diff = pos-neg;
//            maxi = max(maxi,diff);
////            mp1.insert(pair <int, int> (pos, neg));
//            }
//            int m;
//            cin>>m;
//            pos = 0,neg = 0;
//            for(int i = 0;i<m;i++){
//                int x;
//                cin>>x;
//                if(x>0) pos = pos+x;
//                else neg = neg+abs(x);
//                int diff = pos-neg;
//                maxi1 = max(maxi1,diff);
////                mp2.insert(pair <int, int> (pos, neg));
//                }
//                if(maxi == -1) maxi = 0;
//                if(maxi1 == -1) maxi1 = 0;
//                cout<<maxi+maxi1<<endl;
//        }
//        return 0;
//    }

//Regular Bracket Sequence
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        int len = s.length(),left = 0,right = 0,center = 0;
//        bool flag = true;
//        if(len%2 == 1) cout<<"NO"<<endl;
//       else{
//           for(int i = 0;i<len;i++){
//               if(s[i] == '(') left++;
//               else if(s[i] == '?') center++;
//               else{
//                   if(left>0) left--;
//                   else if(center>0) center--;
//                   else{
//                       flag = false;
//                       break;
//                       }
//                   }
//               }
//               //if(center<left) flag = false;
//               if(flag == false) cout<<"NO"<<endl;
//               else cout<<"YES"<<endl;
//           }
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        int len = s.length();
//        bool flag = true;
//        if(len%2 == 1) flag = false;
//        if(s[0] == ')') flag = false;
//        if(s[len-1] == '(') flag = false;
//        if(flag == true) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//dungeon
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,c;
//        cin>>a>>b>>c;
//        int need = (a-1)+(b-1)+(c-1);
//        need++;
//        if(need%7 == 0) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,c;
//        cin>>a>>b>>c;
//        int small = min(a,min(b,c));
//        int big = max(a,max(b,c));
//        small--;
//        big--;
//        int ele = small*(small*6);
//        if(ele<big) cout<<"NO"<<endl;
//        else{
//            int need = ((a-1)+(b-1)+(c-1));
//            if((need+1)%7 == 0) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//            }
//        }
//        return 0;
//    }

//Find the array
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++) cin>>arr[i];
//        int mini = *min_element(arr,arr+n);
//        for(int i = 0;i<n;i++) cout<<mini<<" ";
//        cout<<endl;
//        }
//        return 0;
//    }

//Find the array
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,odd = 0,even = 0;
//        cin>>n;
//        long long int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            if(i%2 == 0) even+=arr[i];
//            else odd+=arr[i];
//            }
//            int j;
//            if(odd<=even) j = 1;
//            else j = 2;
//            for(;j<=n;j = j+2) arr[j] = 1;
//            for(int i = 1;i<=n;i++) cout<<arr[i]<<" ";
//            cout<<endl;
//        }
//        return 0;
//    }

//Strange Functions
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        cout<<s.length()<<endl;
//        }
//        return 0;
//    }

//Ping Pong 
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x,y,left = 0,right = 0;
//        cin>>x>>y;
//        if(x == y){
//            left = x-1;
//            right = y;
//            }
//            if(x>y){
//                left = x-1;
//                right = y;
//                }
//              if(x<y){
//                  left = x-1;
//                  right = y;
//                  }
//                  cout<<left<<" "<<right<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x;
//        cin>>x;
//        int steps = 0,curr = 0,i = 1;
//        while(curr<x){
//            curr = curr+i;
//            i++;
//            steps++;
//            }
//            if(curr == x) cout<<steps<<endl;
//            else{
//                int diff = curr-x;
//                if(diff == 1) cout<<(steps+1)<<endl;
//                else cout<<steps<<endl;
//                }
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n+1];
//        int odd = 1,even = 2;
//        for(int i = 1;i<=n;i=i+2){
//            arr[i] = even;
//            even = even+2;
//            }
//            for(int i = 2;i<=n;i=i+2){
//                arr[i] = odd;
//                odd = odd+2;
//                }
//                if(n%2 == 1){
//                    int ele = arr[1];
//                    arr[1] = n;
//                    arr[n] = ele;
//                    }
//                for(int i = 1;i<=n;i++) cout<<arr[i]<<" ";
//                cout<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,ans = -1;
//        cin>>n;
//        map<int,int> mp;
//        for(int i = 1;i<=n;i++){
//            int x;
//            cin>>x;
//            if(mp.find(x)!=mp.end()){
//                mp[x] = -1;
//                }
//                else{
//                    mp[x] = i;
//                    }
//            }
//            if(mp.size()!=0){
//                for(auto it : mp){
//                    int curr = it.second;
//                    if(curr !=-1){
//                        ans = curr;
//                        break;
//                        }
//                    }
//                }
//                cout<<ans<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,prev_x = -1,mini = 100010,element,first = -1,second = -1;
//        cin>>n;
//        map<int,int> mp;
//        for(int i = 0;i<n;i++){
//            int x;
//            cin>>x;
//            if(first == -1){
//            first = x;
//            }
//            second = x;
//            if(x!=prev_x){
//                if(mp.find(x) == mp.end()) mp[x] = 1;
//                else mp[x]++;
//                prev_x = x;
//                }
//            }
//            for(auto it : mp){
//                int ele = it.second;
//                if(ele<mini){
//                    mini = ele;
//                    element = it.first;
//                    }
//                }
//                //cout<<mini<<endl;
//                int ans;
//                if(mp.size()==1) ans = 0;
//                else{
//                ans = mini+1;
//                if(mini!=1){
//                if(element == first) ans--;
//                if(second!=-1){
//                    if(element == second) ans--;
//                    }
//                }
//                }
//                //cout<<element<<endl;
//                    cout<<ans<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,mini = 100010;
//        cin>>n;
//        map<int,int> mp;
//        for(int i = 1;i<=n;i++){
//            int x;
//            cin>>x;
//            if(mp.find(x) == mp.end()){
//                if(i == 1) mp[x] = 1;
//                else if(i == n) mp[x] = 1;
//                else mp[x] = 2;
//                }
//                else{
//                    if(i == n) continue;
//                    else mp[x]++;
//                    }
//            }
//            if(mp.size() == 1) mini = 0;
//            else{
//                for(auto it : mp){
//                int ele = it.second;
//                if(ele<mini) mini = ele;
//                }
//            }
//                cout<<mini<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k;
//        cin>>n>>k;
//        int x[n];
//        int y[n];
//        for(int i = 0;i<n;i++){
//            cin>>x[i]>>y[i];
//            }
//            bool flag = false;
//            for(int i = 0;i<n;i++){
//                int first = x[i];
//                int second = y[i];
//                bool inner_flag = true;
//                for(int i = 0;i<n;i++){
//                    int diff = abs(first-x[i])+abs(second-y[i]);
//                    if(diff>k){
//                        inner_flag = false;
//                        break;
//                        }
//                    }
//                    if(inner_flag == true){
//                        flag = true;
//                        break;
//                        }
//                }
//                if(flag == true) cout<<1<<endl;
//                else cout<<-1<<endl;
//        }
//        return 0;
//    }

//Numbers Box
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,sum = 0;
//        cin>>n>>m;
//        int arr[n][m];
//        for(int i = 0;i<n;i++){
//            for(int j = 0;j<m;j++){
//                cin>>arr[i][j];
//                }
//            }
//            for(int i = 0;i<n;i++){
//                for(int j = 0;j<m;j++){
//                    int first=i,second=j,min = arr[i][j];
//                    if(arr[i][j]<0){
//                        if(i != 0 && j!=0 && i!=(n-1) && j!=(m-1)){
//                            int ele1= arr[i-1][j];
//                            if(ele1<min){
//                                min = arr[i-1][j];
//                                first = i-1;
//                                second = j;
//                                }
//                                int ele2 = arr[i][j-1];
//                                if(ele2<min){
//                                    min = arr[i][j-1];
//                                    first = i;
//                                    second = j-1;
//                                    }
//                                    int ele3 = arr[i+1][j];
//                                    if(ele3<min){
//                                        min = arr[i+1][j];
//                                        first = i+1;
//                                        second = j;
//                                        }
//                                        int ele = arr[i][j+1];
//                                        if(ele<min){
//                                            min = arr[i][j+1];
//                                            first = i;
//                                            second = j+1;
//                                            }
//                            }
//                                        if(first!=i && second!=j) {
//                                            arr[first][second] = -1*arr[first][second];
//                                            arr[i][j] = -1*arr[i][j];
//                                        }
//                        }
//                    }
//                }
//                for(int i = 0;i<n;i++){
//                    for(int j = 0;j<m;j++){
//                        sum+=arr[i][j];
//                        }
//                    }
//                    cout<<sum<<endl;
//        }
//        return 0;
//    }

//Numbers Box
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,mini = 110,mini_sec=110,negi = 0,sum = 0;
//        cin>>n>>m;
//        bool zero = false,neg = false;
//        for(int i = 1;i<=n;i++){
//            for(int j = 1;j<=m;j++){
//                int x;
//                cin>>x;
//                sum = sum+abs(x);
//                if(abs(x)<mini){
//                    mini_sec = mini;
//                    mini = abs(x);
//                    }
//                if(x<0){
//                    negi++;
//                    neg = true;
//                    }
//                    if(x == 0) zero = true;
//                }
//            }
//            if(mini_sec == 110) mini_sec = mini;
//            if(zero == true || negi == 0) cout<<sum<<endl;
//            else{
//                if(negi%2 == 0) cout<<sum<<endl;
//                else{
//                    sum = ((sum-mini)-mini_sec);
//                    cout<<sum<<endl;
//                    }
//                }
//        }
//        return 0;
//    }

//Add Candies
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        if(n == 2){
//            cout<<1<<endl;
//            cout<<2<<endl;
//            }
//            else{
//                cout<<n<<endl;
//                int j = 1;
//                for(int i = 1;i<=n;i++){
//                    cout<<j<<" ";
//                    j++;
//                    }
//                    cout<<endl;
//                }
//        }
//        return 0;
//    }

//Knapsack
//void knapsack(int w[ ],int n,int W){
//    int dp[n+1][W+1];
//    
//    }
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,W;
//        cin>>n>>W;
//        int w[n];
//        for(int i = 0;i<n;i++) cin>>w[i];
//        knapsack(w,n,W);
//        }   
// }

//Knapsack
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        unsigned long long int n,W,sum = 0;
//        cin>>n>>W;
//        vector<int> vec;
//        long long int fake_w = W;
//        for(int i = 1;i<=n;i++){
//            long long int x;
//            cin>>x;
//            if(x<=W){
//                sum+=x;
//                W = W-x;
//                vec.push_back(i);
//                }
//            }
//            if(sum<=fake_w && sum>=ceil(fake_w/2)){
//                cout<<vec.size()<<endl;
//                for(auto it : vec) cout<<it<<" ";
//                cout<<endl;
//                }
//                else cout<<-1<<endl;
//        }
//        return 0;
//    }

//int main(){
//    int arr[11];
//    int sum = 1;
//    for(int i = 1;i<=10;i++){
//        sum = sum*i;
//        arr[i] = sum;
//        }
//        //for(int i = 1;i<=10;i++) cout<<arr[i]<<" ";
//        int p,i=10,count=0;
//        cin>>p;
//        while(p>0){
//            if(p>=arr[i]){
//                p = p-arr[i];
//                count++;
//                }
//                else i--;
//            }
//            cout<<count<<endl;
//    }

//
//int main(){
//    long long int n,k;
//    cin>>n>>k;
//     long long int extra = k%n;
//    long long int equal = k/n;
//    long long int arr[n+1];
//    set<long long int> st;
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        if(extra!=0){
//        if(st.size() == extra){
//            auto it = st.end();
//            it--;
//            long long int last = *it;
//            if(last>arr[i]){
//                st.erase(it);
//                st.insert(arr[i]);
//                }
//            }
//            else st.insert(arr[i]);
//        }
//        }
//    for(int i = 1;i<=n;i++){
//        if(st.find(arr[i])!=st.end()){
//            cout<<(1+equal)<<endl;
//            }
//            else cout<<equal<<endl;
//        }
//    }
//    

//
//int main(){
//    int a,b;
//    cin>>a>>b;
//    int maxi = a*6;
//    if(a>b) cout<<"No"<<endl;
//    else if(maxi>=b) cout<<"Yes"<<endl;
//    else cout<<"No"<<endl;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        for(int i = 1;i<=n;i++) cout<<1<<" ";
//        cout<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        set<int> st;
//        bool flag = false;
//        for(int i = 1;i<=n;i++){
//            int x;
//            cin>>x;
//            if(st.find(x) == st.end()) st.insert(x);
//            else{
//                flag = true;
//                break;
//                }
//            }
//            if(flag == true) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//
//Reverse Binary Strings 
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,times = 0,consecutive = 0;
//        cin>>n;
//        string s;
//        cin>>s;
//        for(int i = 1;i<s.length();i++){
//            if(s[i] == s[i-1]) consecutive++;
//            else{
//                times = times+consecutive;
//                consecutive = 0;
//                }
//            }
//            cout<<times<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x,ele = 0,times = 0,ans = 0,s = 1;
//        cin>>x;
//        while(x!=0){
//            ele=x%10;
//            x = x/10;
//            times++;
//            }
//            while(times!=0){
//                ans = ans+s;
//                s++;
//                times--;
//                }
//                int ans2 = (ele-1)*10;
//                cout<<(ans+ans2)<<endl;
//        }
//        return 0;
//    }

//Yet another book shelf
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,times = 0,ans = 0;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            }
//            bool flag = false;
//            for(int i = 0;i<n;i++){
//                if(arr[i] == 1){
//                    flag = true;
//                    ans = ans+times;
//                    times = 0;
//                    }
//                    else if(flag == true && arr[i] == 0){
//                        times++;
//                        }
//                }
//                cout<<ans<<endl;
//        }
//        return 0;
//    }

//Dominant Piranha
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,maxi = -1,indii;
//        cin>>n;
//        long long int arr[n+1];
//        set<long long int> st;
//        for(int i=1;i<=n;i++){
//            cin>>arr[i];
//            st.insert(arr[i]);
//            if(arr[i]>=maxi){
//                indii = i;
//                maxi = arr[i];
//                }
//            }
//            if(st.size() == 1) cout<<-1<<endl;
//            else{
//                    if(indii == n){
//                        int i = n;
//                        while(arr[i] == arr[indii]) i--;
//                        indii = i+1;
//                        }
//                    cout<<indii<<endl;
//                }
//        }
//        return 0;
//    }

//Dominant Piranha
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        
//        }
//    }

//District Connection
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,repeat = -1,second = -1;
//        cin>>n;
//        long long int arr[n+1];
//        vector<long long int> vec;
//        map<long long int,long long int> mp;
//        bool first = false;
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            if(repeat == -1){
//                repeat = arr[i];
//                }
//                else if(arr[i] == repeat){
//                    vec.push_back(i);
//                    }
//                    else{
//                        if(second == -1){
//                            second = i;
//                            mp[i] = 1;
//                            }
//                            else{
//                                mp[i] = 1;
//                                }
//                        }
//            }
//            if(second == -1) cout<<"NO"<<endl;
//            else{
//                for(auto it : mp){
//                    cout<<it.first<<" "<<it.second<<endl;
//                    }
//                    for(int it1 : vec){
//                        cout<<second<<" "<<it1<<endl;
//                        }
//                }
//        }
//        return 0;
//    }


//Barrels
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,k,times = 0,sum = 0;
//        cin>>n>>k;
//        int arr[n+1];
//        for(int i= 1;i<=n;i++){
//            cin>>arr[i];
//            }
//            sort(arr+1,arr+(n+1),greater<int>());
//            int ele = arr[1];
//            arr[1] = 0;
//            for(int i = 2;i<=n;i++){
//                sum+=arr[i];
//                times++;
//                if(times == k) break;
//                }
//                cout<<(ele+sum)<<endl;
//        }
//        return 0;
//    }

//Numbers on Whiteboard
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int fake = n;
//        vector<int> vec1;
//        vector<int> vec2;
//        vec1.push_back(n-1);
//        vec2.push_back(n);
//        int sum = n+(n-1),result = 0;
//        if(sum%2 == 0) result = sum/2;
//        else result = (sum/2)+1;
//        //cout<<result<<endl;
//        n = n-2;
//        while(n!=0){
//            vec1.push_back(n);
//            vec2.push_back(result);
//            sum = n+result;
//            if(sum%2 == 0) result = sum/2;
//            else result = (sum/2)+1;
//            //result = ceil((n+result)/2);
//            n--;
//            }
//            cout<<2<<endl;
//                for(int i = 0;i<fake-1;i++){
//                cout<<vec1[i]<<" "<<vec2[i]<<endl;
//                }
//        }
//        return 0;
//    }

//Stable Groups
//int main(){
//        int n,k,x,count = 1;
//        cin>>n>>k>>x;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++) cin>>arr[i];
//        sort(arr+1,arr+(n+1));
//        if(n == 1) count = 1;
//        else{
//        for(int i = 2;i<=n;i++){
//            if((arr[i]-arr[i-1])>x){
//                int diff = arr[i]-arr[i-1];
//                int need = diff/x;
//                if(need<=k){
//                    k = k-need;
//                    }
//                    else count++;
//                }
//            }
//        }
//        cout<<count<<endl;
//    return 0;
//}

//Number of Pairs
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,l,r,front = 0,end = 0;
//        cin>>n>>l>>r;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            }
//            sort(arr+1,arr+(n+1));
//            for(int i = 2;i<=n;i++){
//                if(arr[i]+arr[i-1]>=l){
//                    int start = n-(i-1);
//                    front = start;
//                    break;
//                    }
//                }
//                for(int i = n;i>=2;i--){
//                    if(arr[i]+arr[i-1]<=r){
//                        end = i;
//                        break;
//                        }
//                    }
//                    int ele = end-front;
//                    int ans = (ele*(ele+1))/2;
//                    cout<<ans<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,l,r,ans = 0;
//        cin>>n>>l>>r;
//        int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            }
//            sort(arr,arr+n);
//            for(int i = 0;i<n-1;i++){
//                auto it1 = lower_bound(arr+i+1,arr+n,l-arr[i]);
//                auto it2 = lower_bound(arr+i+1,arr+n,r-arr[i]);
//                ans=ans+(it2-it1);
//                }
//                cout<<ans<<endl;
//        }
//    }

//Nastia and a good array
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            }
//            for(int i = 1;i<n;i++){
//                int mini = min(arr[i],arr[i+1]);
//                cout<<i<<" "<<i+1<<" "<<mini<<" "<<mini+1<<endl;
//                }
//        }
//        return 0;
//    }

//Nastia and good array
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,x,y;
//        cin>>n;
//        int times = 0;
//        long long int arr[n+1]={0};
//        for(int i = 1;i<=n;i++) cin>>arr[i];
//        if(n!=1){
//        cout<<n-1<<endl;    
//        for(int i = 1;i<n;i++){
//            if(__gcd(arr[i],arr[i+1]) != 1){
//                long long int mini = min(arr[i],arr[i+1]);
//                if(mini%2 == 0){
//                    if(arr[i-1]%2 == 0){
//                        x = mini+1;
//                        y = mini;
//                        }
//                        else{
//                            x = mini;
//                            y = mini+1;
//                            }
//                    }
//                    else{
//                        if(arr[i-1]%2 == 0){
//                            x = mini;
//                            y = mini+1;
//                            }
//                            else{
//                                x = mini+1;
//                                y = mini;
//                                }
//                        }
//                }
//                else{
//                    x = arr[i];
//                    y = arr[i+1];
//                    }
//                cout<<i<<" "<<i+1<<" "<<x<<" "<<y<<endl;
//            }
//        }
//        else cout<<times<<endl;
//        }
//        return 0;
//    }

//Nastia and Good array
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,mini = 1000000010,indii = -1;
//        cin>>n;
//        long long int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            if(arr[i]<mini){
//                mini = arr[i];
//                indii = i;
//                }
//            }
//            if(n == 1) cout<<0<<endl;
//            else{
//                cout<<n-1<<endl;
//            long long int mini2 = mini;
//            for(int i=indii-1;i>=1;i--){
//                cout<<i<<" "<<i+1<<" "<<mini+1<<" "<<mini<<endl;
//                mini = mini+1;
//                }
//                for(int i = indii;i<n;i++){
//                    cout<<i<<" "<<i+1<<" "<<mini2<<" "<<mini2+1<<endl;
//                    mini2 = mini2+1;
//                    }
//            }
//        }
//        return 0;
//    }

//Nastia and good array
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,mini=1000000010,indii = -1,count = 1;
//        cin>>n;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            if(arr[i]<mini){
//                mini = arr[i];
//                indii = i;
//                }
//            }
//            if(n == 1) cout<<0<<endl;
//            else{
//                cout<<n-1<<endl;
//            for(int i = indii-1;i>=1;i--){
//                cout<<i<<" "<<indii<<" "<<mini+count<<" "<<mini<<endl;
//                count++;
//                }
//                count = 1;
//                for(int i = indii+1;i<=n;i++){
//                    cout<<indii<<" "<<i<<" "<<mini<<" "<<mini+count<<endl;
//                    count++;
//                    }
//        }
//    }
//    return 0;
//    }

//Morning Jogging
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,count = 1;
//        cin>>n>>m;
//        int arr[n+1][m+1];
//        multiset<int> st;
//            for(int i = 1;i<=n;i++){
//            int b[m+1];
//            for(int i = 1;i<=m;i++){
//                cin>>b[i];
//                if(st.size()!=m) st.insert(b[i]);
//                else{
//                    auto it = st.end();
//                    it--;
//                    int ele = *it;
//                    if(b[i]<ele){
//                        st.erase(it);
//                        st.insert(b[i]);
//                        }
//                    }
//                }
//                sort(b+1,b+(m+1));
//                for(int i = 1;i<=m;i++){
//                    arr[count][i] = b[i];
//                    }
//                    count++;
//            }
//            int curr=1;
//            for(int i = 1;i<=n;i++){
//                for(int j = 1;j<=m;j++){
//                    int ele = arr[i][j];
//                    if(st.find(ele)!=st.end()){
//                        int temp = arr[i][curr];
//                        arr[i][curr] = ele;
//                        arr[i][j] = temp;
//                        }
//                        else break;
//                    }
//                }
//                for(int i = 1;i<=n;i++){
//                    for(int j = 1;j<=m;j++){
//                        cout<<arr[i][j]<<" ";
//                        }
//                        cout<<endl;
//                    }
//        }
//        return 0;
//    }

//Morning Jogging 
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,count=1;
//        cin>>n>>m;
//        int arr[n+1][m+1];
//        multiset<int> st;
//        for(int i=1;i<=n;i++){
//            int b[m+1];
//            for(int j = 1;j<=m;j++){
//                cin>>b[j];
//                if(st.size()!=m) st.insert(b[j]);
//                else{
//                    auto it = st.end();
//                    it--;
//                    int ele = *it;
//                    if(b[j]<ele){
//                        st.erase(it);
//                        st.insert(b[j]);
//                        }
//                    }
//                }
//                sort(b+1,b+(m+1));
//                for(int a = 1;a<=m;a++){
//                    arr[i][a] = b[a];
//                    }
//            }
//            bool flag = true;;
//            for(int i = 1;i<=n;i++){
//                for(int j = 1;j<=m;j++){
//                    if(count == m+1){
//                        flag = false;
//                        break;
//                        }
//                    int ele = arr[i][j];
//                    if(st.find(ele)!=st.end()){
//                        int curr = arr[i][count];
//                        arr[i][count++] = ele;
//                        arr[i][j] = curr;
//                        }
//                        else break;
//                    }
//                    if(flag == false) break;
//                }
//                for(int i = 1;i<=n;i++){
//                    for(int j = 1;j<=m;j++) cout<<arr[i][j]<<" ";
//                    cout<<endl;
//                    }
//        }
//        return 0;
//    }

//Exciting bets
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int a,b;
//        cin>>a>>b;
//        if(a == b) cout<<0<<" "<<0<<endl;
//        else{
//            long long int req=0;
//            long long int diff = abs(a-b);
//            long long int maxi = max(a,b);
//            long long int rem = maxi%diff;
//            if(rem!=0) req = diff-rem;
//            cout<<diff<<" "<<req<<endl;
//            }
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,sum = 0;
//        cin>>n;
//        long long int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//            }
//            long long int divi = sum/n;
//            long long int rem = sum%n;
//            if(rem == 0) cout<<0<<endl;
//            else{
//                int ans = rem*(n-rem);
//                cout<<ans<<endl;
//                }
//        }
//        return 0;
//    }

//M-arrays
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        map<int,int> mp;
//        for(int i = 1;i<=n;i++){
//            int x;
//            cin>>x;
//            if(mp.find(x) == mp.end()) mp[x] = 1;
//            else mp[x]++;
//            }
//            for(autp it = mp.begin();it!=mp.end();it++){
//                int curr = it->first;
//                int seci1 = it->second;
//                int count = 1;
//                bool flag = true;
//                while(flag == true){
//                    int sum = m*count;
//                    count++;
//                    int need = sum-curr;
//                    if(mp.find(need)!=mp.end()){
//                        auto it1 = mp.find(need);
//                        int seci2 = it1->second;
//                        if(seci1<seci2){
//                            mp.erase(it);
//                            mp[need] = sec2-(sec1+1);
//                            }
//                        }
//                    }
//                }
//        }
//    }

//
//int main(){
//    int t;
//    cin>>t;
//while(t--){
//    int n,m,count = 0;
//    cin>>n>>m;
//    map<int,int> mp;
//    for(int i = 0;i<n;i++){
//        int x;
//        cin>>x;
//        int rem = x%m;
//        if(mp.find(rem) == mp.end()) mp[rem] = 1;
//        else mp[rem]++;
//        }
//        if(mp.find(0)!=mp.end()){
//            count++;
//            mp.erase(0);
//            }
//            if(m%2 == 0){
//                int half = m/2;
//                if(mp.find(half)!=mp.end()){
//                    count++;
//                    mp.erase(half);
//                    }
//                }
//                //cout<<count<<endl;
//                for(auto it : mp){
//                    int doosra_wala = m-it.first;
//                    if(mp.find(doosra_wala)!=mp.end()){
//                    auto it1 = mp.find(doosra_wala);
//                    int firsts = it.second;
//                    int second = it1->second;
//                    mp.erase(doosra_wala);
//                    //mp.erase(it.first);
//                    if(abs(firsts-second)<=1) count++;
//                    else{
//                        count++;
//                        int diff = abs(firsts-second);
//                        diff--;
//                        count = count+diff;
//                        }
//                    }
//                    else count = count+it.second;
//                    //cout<<count<<endl;
//                    }
//                    cout<<count<<endl;
//    }
//    return 0;
//    }
//Number of pairs
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,l,r,sum = 0;
//        cin>>n>>l>>r;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            }
//            sort(arr+1,arr+(n+1));
//            for(int i = 1;i<n;i++){
//                int it1 = lower_bound(arr+i+1,arr+(n+1),l-arr[i])-arr;
//                int it2 = lower_bound(arr+i+1,arr+(n+1),r-arr[i])-arr;
//                if(it1>n) it1 = n;
//                if(it2>n) it2 = n;
//                sum = sum+(it2-it1+1);
//                //cout<<it1<<" "<<it2<<endl;
//                }
//                cout<<sum<<endl;
//        }
//    }

//
//int main()
//{
//     long long ans,e,n,s,i,l,r;
//     cin>>e;
//     while(e--)
//     {
//        cin>>n>>l>>r;
//        vector<long long>a(n);
//        for(i=0;i<n;i++)
//        cin>>a[i];
//        
//        sort(a.begin(),a.end());
//        ans=0;
//        for(i=0;i<n-1;i++)
//        {
//             auto itr1=lower_bound(a.begin()+i+1,a.end(),l-a[i]);
//             auto itr2=upper_bound(a.begin()+i+1,a.end(),r-a[i]);
//             ans+=(itr2-itr1);
//        }
//        cout<<ans<<"\n";
//     }
//}

//Bovine Dilemma
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n+1];
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            }
//            int b[n-1];
//            for(int i = 0;i<n-1;i++){
//                b[i] = arr[i]-arr[i-1];
//                }
//                set<int> st;
//                for(int i = 0;i<n-1;i++){
//                    st.insert(b[i]);
//                    }
//                    int diff = (n-1)-st.size();
//                    int total = ((n-1)*((n-1)+1))/2;
//                    int ans = total - diff;
//                    cout<<ans<<endl;
//        }
//        return 0;
//    }

//Last Minute Enhancements
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++) cin>>arr[i];
//        sort(arr,arr+n);
//        arr[n-1]++;
//        for(int i = n-2;i>=0;i--){
//            if(arr[i]+1 != arr[i+1] && (arr[i]+1)<arr[i+1]) arr[i]++;
//            }
////            for(auto it : arr) cout<<it<<" ";
////            cout<<endl;
//            set<int> st;
//            for(int i = 0;i<=n-1;i++) st.insert(arr[i]);
//            cout<<st.size()<<endl;
//        }
//    return 0;
//    }

//Canine Property
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        char pasta = '0';
//        map<int,int> mp;
//        int len = s.length(),count=0,past = -1;
//        for(int i = 0;i<len-1;i++){
//            if(s[i] == pasta && s[i] == s[i+1]){
//                i++;
//                count++;
//                continue;
//                }
//            else if(s[i]==s[i+1]){
//                count++;
//                pasta = s[i];
//                continue;
//                }
//            if(mp.find(s[i]) == mp.end()) {
//            mp[s[i]]=i;
////            pasta = s[i];
//            }
//            else{
//                int past = mp[s[i]];
//                int present = i;
//                if(present-past == 2){
//                    count++;
//                    }
//                else mp[s[i]] = i;
//                }
//                pasta = s[i];
//            }
//            cout<<count<<endl;
//        }
//        return 0;
//    }

//Canine Poetry
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        map<char , int> mp; 
//        int len = s.length(),count = 0;
//        for(int i = 0;i<len-1;i++){
//            if(mp.find(s[i]) == mp.end()) mp[s[i]] = i;
//            else{
//                int past = mp[s[i]];
//                int present = i;
//                if(present-past<=2){
//                    count++;
//                    }
//                    else mp[s[i]] = i;
//                }
//            }
//            if(mp.find(s[len-1]) != mp.end()){
//                int past = mp[s[len-1]];
//                int present = len-1;
//                if(present-past<=2) count++;
//                }
//            cout<<count<<endl;
//        }
//        return 0;
//    }

//Bolvine dilemma
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,curr = 1;
//        cin>>n;
//        int arr[n+1];
//        int b[n];
//        set<int> st;
//        for(int i = 1;i<=n;i++) cin>>arr[i];
//        for(int i = 1;i<=n-1;i++){
//            b[i] = arr[i+1]-arr[i];
//            }
//            while(curr<=n-1){
//                int ele = b[curr];
//                st.insert(ele);
//                for(int i = curr+curr;i<=n-1;i+curr){
//                    int indii = i-curr;
//                    int elee = b[indii];
//                    st.insert(elee);
//                    }
//                    curr++;
//                }
//                cout<<st.size()<<endl;
//        }
//        return 0;
//    }

//
//void solve() {
//	int n;
//	scanf("%d", &n);
//
//	vector <int> in(n);
//	for(auto &p: in)
//		scanf("%d", &p);
//	
//	set <int> S;
//	for(int i = 0; i < n; ++i)
//		for(int j = i + 1; j < n; ++j)
//			S.insert(in[j] - in[i]);
//
//	printf("%d\n", (int)S.size());
//}
//
//int main() {
//	int cases;
//	scanf("%d", &cases);
//	
//	while(cases--)
//		solve();
//	return 0;
//}

//
//int main(){
//    int a,b;
//    cin>>a>>b;
//    if(a>b) cout<<0<<endl;
//    else{
//    int ans = b-a+1;
//    cout<<ans<<endl;
//    }
//    }

//
//int main(){
//    int n,x,sum = 0;
//    cin>>n>>x;
//    int arr[n+1];
//    for(int i = 1;i<=n;i++){
//        cin>>arr[i];
//        if(i%2==1) sum+=arr[i];
//        else sum+=(arr[i]-1);
//        }
//        if(x>=sum) cout<<"Yes"<<endl;
//        else cout<<"No"<<endl;
//    }

//
//int main(){
//    unsigned long long int n,ans = 1;
//    cin>>n;
//    long long int arr[n];
//    set<long long int> st;
//    for(int i = 0;i<n;i++){
//        cin>>arr[i];
//        if(st.find(arr[i]) == st.end()){
//            st.insert(arr[i]);
//            ans = ((ans%1000000007)*(arr[i]%1000000007))%1000000007;
//            }
//        }
//        cout<<(ans%1000000007)<<endl;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x1,y1,x2,y2,x3,y3;
//        cin>>x1>>y1>>x2>>y2>>x3>>y3;
//        if(x1 == x2 && y1 == y2) cout<<0<<endl;
//        else{
//        int x = abs(x1-x2)+abs(x2-x3);
//        int y = abs(y1-y2)+abs(y2-y3);
//        int ans = abs(x2-x1)+abs(y2-y1);
//        if(x == 0){
//            int first = abs(y3-y2);
//            int second = abs(y1-y2);
//            if(second>first) ans = ans+2;
//            }
//            if(y == 0){
//                int first = abs(x3-x2);
//            int second = abs(x1-x2);
//            if(second>first) ans = ans+2;
//                }
//        cout<<ans<<endl;
//        }
//    }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        set<int> st;
//        int len = s.length(),maxi = -1;
//        bool flag = true;
//        for(int i = 0;i<len;i++){
//            if(st.find(s[i]) == st.end()){
//                int ele = s[i];
//                maxi = max(maxi,ele);
//                st.insert(s[i]);
//                if(i!=0 && i!=(len-1)){
//                    int curr = s[i];
//                    int prev = s[i-1];
//                    int next = s[i+1];
//                    if(curr>prev && curr>next){
//                        flag = false;
//                        break;
//                        }
//                    }
//                }
//                else{
//                    flag = false;
//                    break;
//                    }
//            }
//            int check = maxi-'a'+1;
//            if(st.size()!=check) flag = false;
//            if(flag == false) cout<<"NO"<<endl;
//            else cout<<"YES"<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int k,n,m,maxi = -1,count = 0;
//        cin>>k>>n>>m;
//        int a[n];
//        int b[n];
//        for(int i = 0;i<n;i++){
//            cin>>a[i];
//            if(a[i] == 0) count++;
//            maxi = max(maxi,a[i]);
//            }
//        for(int i = 0;i<m;i++){
//            cin>>b[i];
//            if(b[i] == 0) count++;
//            maxi = max(maxi,b[i]);
//            }
//            int total = k+count;
//            if(total<maxi) cout<<"-1"<<endl;
//            else{
//                sort(a,a+n);
//                sort(b,b+n);
//                int first=0,second=0;
//                for(int i = 0;i<n;i++){
//                    if(a[i] == 0) cout<<a[i]<<" ";
//                    else{
//                        first = i;
//                        break;
//                        }
//                    }
//                    for(int i = 0;i<m;i++){
//                    if(a[i] == 0) cout<<a[i]<<" ";
//                    else{
//                        second = i;
//                        break;
//                        }
//                    }
//                    for(int i = first;i<n;i++){
//                    cout<<a[i]<<" ";
//                    }
//                    for(int i = second;i<m;i++) cout<<b[i]<<" ";
//                    cout<<endl;
//                }
//        }
//        return 0;
//    }

//Co-Growing Sequence
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        unsigned long long int n,first = -1;
//        cin>>n;
//        unsigned long long int arr[n];
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            if(i == 0) first = arr[i];
//            else{
//                arr[i] = (arr[i]^first);
//                }
//            }
//            arr[0] = arr[0]^arr[0];
//            for(auto it : arr) cout<<it<<" ";
//            cout<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int x1,y1,z1,x2,z2,x3,y3,z3,maxi = -1,ans = 0;
//        cin>>x1>>y1>>z1>>x2>>z2>>x3>>y3>>z3;
//        map<long long int,long long int> mp;
//        long long int middle1 = (y1+y3)/2;
//        if(abs(y1-y3)%2 == 1) middle1=-1;
//        long long int middle2 = (x2+z2)/2;
//        if(abs(x2-z2)%2 == 1) middle2=-1;
//        long long int dia1 = (x1+z3)/2;
//        if(abs(x1-z3)%2 == 1) dia1=-1;
//        long long int dia2 = (x3+z1)/2;
//        if(abs(x3-z1)%2 == 1) dia2=-1;
//        if(mp.find(middle1) == mp.end()) mp[middle1] = 1;
//        else mp[middle1]++;
//        if(mp.find(middle2) == mp.end()) mp[middle2] = 1;
//        else mp[middle2]++;
//        if(mp.find(dia1) == mp.end()) mp[dia1] = 1;
//        else mp[dia1]++;
//        if(mp.find(dia2) == mp.end()) mp[dia2] = 1;
//        else mp[dia2]++;
//        for(auto it : mp){
//            if(it.first>=0){
//            long long int secondi = it.second;
//            maxi = max(maxi,secondi);
//            }
//        }
//            if(maxi>0) ans = ans+maxi;
//            //cout<<ans<<endl;
//            if((x1+z1)/2 == y1 && abs(x1-z1)%2 == 0) ans = ans+1;
//             if((x3+z3)/2 == y3 && abs(x3-z3)%2 == 0) ans = ans+1;
//              if((x1+x3)/2 == x2 && abs(x1-x3)%2 == 0) ans = ans+1;
//               if((z1+z3)/2 == z2 && abs(z1-z3)%2 == 0) ans = ans+1;
//               cout<<ans<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,c,sum = 0;
//        cin>>n>>c;
//        long long int arr[10010]={0};
//        for(int i = 1;i<=n;i++){
//            long long int l,r;
//            cin>>l>>r;
//            arr[l+1]++;
//            arr[r]--;
//            }
//            for(int i=1;i<10010;i++){
//                arr[i] = arr[i]+arr[i-1];
//                }
//                sort(arr,arr+10010,greater<int>());
//                for(int i = 0;i<10010;i++){
//                    if(c>0){
//                    sum+=arr[i];
//                    c--;
//                    }
//                    }
//                  //for(auto it : arr) cout<<it<<" ";
//                    cout<<(n+sum)<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    for(int i = 1;i<=t;i++){
//        long long int x1,y1,z1,x2,z2,x3,y3,z3,maxi = -1,ans = 0;
//        cin>>x1>>y1>>z1>>x2>>z2>>x3>>y3>>z3;
//        map<long long int,long long int> mp;
//        if((x3+z1)%2 == 0){
//            long long int ele=(x3+z1)/2;
//            if(mp.find(ele) == mp.end()) mp[ele] = 1;
//            else mp[ele]++;
//            }
//            if((y1+y3)%2 == 0){
//            long long int ele=(y1+y3)/2;
//            if(mp.find(ele) == mp.end()) mp[ele] = 1;
//            else mp[ele]++;
//            }
//            if((x1+z3)%2 == 0){
//            long long int ele=(x1+z3)/2;
//            if(mp.find(ele) == mp.end()) mp[ele] = 1;
//            else mp[ele]++;
//            }
//            if((x2+z2)%2 == 0){
//            long long int ele=(x2+z2)/2;
//            if(mp.find(ele) == mp.end()) mp[ele] = 1;
//            else mp[ele]++;
//            }
//            for(auto it : mp){
//                long long int secondi = it.second;
//                maxi = max(maxi,secondi);
//                }
//                if(maxi!=-1) ans = ans+maxi;
//                if((x1+x3)%2 == 0 && (x1+x3)/2 == x2){
//                    ans = ans+1;
//                    }
//                    if((x3+z3)%2 == 0 && (x3+z3)/2 == y3){
//                    ans = ans+1;
//                    }
//                    if((z1+z3)%2 == 0 && (z1+z3)/2 == z2){
//                    ans = ans+1;
//                    }
//                    if((x1+z1)%2 == 0 && (x1+z1)/2 == y1){
//                    ans = ans+1;
//                    }
//                    cout<<"Case #"<<i<<": "<<ans<<endl;
//        }
//        return 0;
//    }

//Final Exam
//int main(){
//    int t;
//    cin>>t;
//    for(int i = 1;i<=t;i++){
//        int n,m;
//        cin>>n>>m;
//        set<int> st;
//        set<int> st1;
//        for(int i = 1;i<=n;i++){
//            int a,b;
//            cin>>a>>b;
//            for(int i = a;i<=b;i++){
//                st.insert(i);
//                }
//            }
//            for(int i = 1;i<=m;i++){
//                int s;
//                cin>>s;
//                if(st.find(s)!=st.end()){
//                        cout<<s<<" ";
//                        st.erase(s);
//                    }
//                    else{
//                        int ele1=-1,ele2=-1;
//                        for(auto it : st){
//                            if(it>s) ele2 = it;
//                            else ele1 = it;
//                            }
//                            if(ele1 == -1) cout<<ele2<<" ";
//                            else{ 
//                            if(ele1<=ele2) {
//                                cout<<ele1<<" ";
//                                st.erase(ele1);
//                                }
//                            else {
//                            cout<<ele2<<" ";
//                            st.erase(ele2);
//                            }
//                        }
//                    }
//                }
//                cout<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,sum1 = 0,sum2 = 0,req = 0;
//        cin>>n;
//        int arr1[n+1];
//        int arr2[n+1];
//        map<int,int> great;
//        map<int,int> small;
//        for(int i = 1;i<=n;i++){
//            cin>>arr1[i];
//            sum1+=arr1[i];
//            }
//             for(int i = 1;i<=n;i++){
//            cin>>arr2[i];
//            sum2+=arr2[i];
//            if(arr2[i]<arr1[i]){
//                great[i] = arr1[i]-arr2[i];
//                req+=(arr1[i]-arr2[i]);
//                }
//                else if(arr2[i]>arr1[i]){
//                    small[i] = arr2[i]-arr1[i];
//                    req+=(arr2[i]-arr1[i]);
//                    }
//            }
//           if(sum1!=sum2) cout<<-1<<endl;
//           else{
//               cout<<(req/2)<<endl;
//               for(auto it : great){
//                   bool flag = true;
//                   while(flag == true){
//                       if(it.second == 0) flag = false;
//                       else{
//                           auto it1 = small.begin();
//                           int ele = it1->second;
//                           if(ele == 0){
//                               small.erase(it1);
//                               continue;
//                               }
//                               else{
//                                   cout<<it.first<<" "<<it1->first<<endl;
//                                   int val = it.second;
//                                   it.second = val-1;
//                                   int val1 = it1->second;
//                                   it1->second = val1-1;
//                                   }
//                           }
//                       }
//                   
//                   }
//               } 
//        }
//        return 0;
//    }

//Aquamoon and stolen strings
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,fake;
//        cin>>n>>m;
//        int arr[m]={0};
//        int arr2[m]={0};
//        fake = n-1;
//        while(n--){
//            string s;
//            cin>>s;
//            for(int i = 0;i<m;i++){
//                arr[i] += s[i];
//                }
//            }
//            while(fake--){
//                string s;
//                cin>>s;
//                for(int i = 0;i<m;i++){
//                    arr2[i] += s[i];
//                    }
//                }
//                string s;
//                for(int i = 0;i<m;i++){
//                    int ele = arr[i] - arr2[i];
//                    char c = ele;
//                    s = s+c;
//                    }
//                    cout<<s<<endl;
//        }
//        return 0;
//    }

//Aquamoon and strange sort
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n];
//        int fake[n];
//        multimap<int,int> mp;
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            fake[i] = arr[i];
//            }
//        sort(fake,fake+n);
//        for(int i = 0;i<n;i++){
//            mp.insert(pair <int, int> (fake[i], i));
//            }
//            bool ans = true;
//            for(int i = 0;i<n;i++){
//                int ele=arr[i];
//                bool flag = false;
//                for(auto it = mp.find(ele);it!=mp.end();it++){
//                    int indii = it->second;
//                    int diff = abs(indii-i);
//                    if(diff%2 == 0){
//                        flag = true;
//                        mp.erase(it);
//                        break;
//                        }
//                    }
//                    if(flag == false){
//                        ans = false;
//                        break;
//                        }
//                }
//                if(ans == false){
//                    cout<<"NO"<<endl;
//                    }
//                    else cout<<"YES"<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    char s = '9';
//    int ans = s-'0';
//    cout<<ans<<endl;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x1,y1,x2,y2,count = 0,ans = 0;
//        cin>>x1>>y1>>x2>>y2;
//        if(x2>x1) count++;
//        if(y2>y1) count++;
//        //cout<<count<<endl;
//        if(count == 0) cout<<0<<endl;
//        else if(count == 2) ans = ans+2;
//        ans = (x2-x1)+(y2-y1);
//        cout<<ans<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        string s;
//        cin>>s;
//        set<int> clockwise;
//        set<int> antiClockwise;
//        set<int> st;
//        //int ans = 0;
//        for(int i = 0;i<n;i++){
//            if(s[i] == '-'){
//                st.insert(i);
//                int ele = (i+1)%n;
//                st.insert((ele)%n);
//                clockwise.insert(i);
//                antiClockwise.insert(i);
//                }
//            else if(s[i] == '>'){
//                clockwise.insert(i);
//                }
//                else if(s[i] == '<'){
//                    int ele = (i+1)%n;
//                    antiClockwise.insert(i);
//                    }
//            }
//           int c = clockwise.size();
//           int sa = st.size();
//           int ac = antiClockwise.size();
//           if(c == n || ac == n) cout<<n<<endl;
//           else{
//               int count = 0;
//               for(auto it : clockwise){
//                   int ele = it;
//                   if(st.find(ele) == st.end()) count++;
//                   }
//                   for(auto it1 : antiClockwise){
//                       int ele = it1;
//                       if(st.find(ele) == st.end()) count++;
//                       }
//                       int ans = n-count;
//                       cout<<ans<<endl;
//               }
//        }
//        return 0;
//    }

//Cubes Sorting
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,steps = 0;
//        cin>>n;
//        int arr[n+1];
//        bool flag = true;
//        for(int i = 1;i<n;i++){
//            cin>>arr[i];
//            if(i!=1){
//                if(arr[i]<arr[i-1]) flag = false;
//                }
//            }
//            if(n>2) cout<<"YES"<<endl;
//            else{
//                if(n == 2 && flag == true) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//                }
//        }
//        return 0;
//    }

//
int countBits(unsigned int n)
{
   int count = 0;
   while (n)
   {
        count++;
        n >>= 1;
    }
    return count;
}
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,ans = 0;
//        cin>>n;
//        long long int arr[n+1];
//        map<long long int,long long int> mp;
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            long long int ele = countBits(arr[i]);
//            if(mp.find(ele) == mp.end()) mp[ele] = 1;
//            else mp[ele]++;
//            }
//            for(int i = 1;i<=n;i++){
//                long long int ele = arr[i];
//                if(mp.find(ele) == mp.end()) continue;
//                auto it = mp.find(ele);
//                int times = it->second;
//                int ele1 = times-1;
//                if(ele1 == 0) mp.erase(it);
//                else it->second = ele1;
//                ans = ans+(times-1);
//                }
//                cout<<ans<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int n;
//    cin>>n;
//    int ans = countBits(n);
//    cout<<ans<<endl;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,steps = 0;
//        cin>>n;
//        long long int arr[n+1];
//        long long int fake[n+1];
//        bool flag = false;
//        bool ans = false;
//        for(int i = 1;i<=n;i++){
//            cin>>arr[i];
//            fake[i] = arr[i];
//            }
//            sort(fake+1,fake+(n+1),greater<int>());
//            for(int i=1;i<=n;i++){
//                if(arr[i]!=fake[i]){
//                    flag = true;
//                    }
//                    if(i!=1){
//                        if(fake[i] == fake[i-1]) ans = true;
//                        }
//                }
//                if(ans == true) cout<<"YES"<<endl;
//                else if(flag == true) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//is n is odd -> Raze wins
//if n is even -> Breach wins

//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        if(n%2 == 0) cout<<2<<endl;
//        else cout<<1<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,x,fake;
//        cin>>n;
//        cin>>x;
//        fake = n;
//        bool flag = false,raze = false,breach = false;
//        if(n%2 == 0) flag = true;
//        if(n%2 == 0){
//        while(x!=0){
//            long long int ele = x%10;
//            if(flag == true){
//                if(ele%2 == 0){
//                    breach = true;
//                    break;
//                    }
//                    flag = false;
//                }
//                else flag = true;
//                x = x/10;
//            }
//        }
//        else{
//            while(x!=0){
//            long long int ele = x%10;
//            if(flag == false){
//                if(ele%2 == 1){
//                    raze = true;
//                    break;
//                    }
//                    flag = true;
//                }
//                else flag = false;
//                x = x/10;
//            }
//            }
//            if(fake%2 == 0){
//                if(breach == true) cout<<2<<endl;
//                else cout<<1<<endl;
//                }
//                else{
//                    if(raze == true) cout<<1<<endl;
//                    else cout<<2<<endl;
//                    }
//    }
//        return 0;
//    }


//Stairs
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int x,count = 0,add = 1;
//        cin>>x;
//        bool flag = true;
//        while(flag == true){
//            if((x-add)>=0){
//            x = x-add;
//            add++;
//            count++;
//               }
//               else flag = false;
//            }
//            cout<<count<<endl;
//        }
//        return 0;
//    }

//Digit Game
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int digits,number;
//        cin>>digits;
//        cin>>number;
//        vector<int> vec(digits);
//        int indii = digits,even = 0,odd = 0;
//        //if n is odd  and all digits are even then only breach will win otherwise raze will win
//        //if n is even and odd digits are equal to or more than (n/2+1), then only raze will win otherwise breach will win
//        while(number!=0){
//            int ele = number%10;
//            if(ele%2 == 1) odd++;
//            else even++;
//            number = number/10;
//            }
//        if(digits%2 == 1){
//            if(even == digits) cout<<"2"<<endl;
//            else cout<<"1"<<endl;
//            }
//            else{
//                if(odd>=((digits/2)+1)) cout<<"1"<<endl;
//                else cout<<"2"<<endl;
//                }
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,count = 0,total = 1;
//        cin>>n;
//        set<int,greater<int> > pos;
//        set<int,greater<int> > neg;
//        for(int i = 0;i<n;i++){
//            int x;
//            cin>>x;
//            if(x<0) neg.insert(x);
//            else pos.insert(x);
//            }
//            if(pos.size() == 1 || pos.size()>=3){
//                 while(count!=5){
//                    if(count<=3){
//                 negative_val = 0,positive_val = 0;
//                         if(neg.size()>=2){
//                         auto it = neg.begin();
//                         int first = *it;
//                         it++;
//                         int second = *it;
//                         negative_val= first*second;
//                         total = total*negative_val;
//                         count+=2;
//                     }
//                     if(pos.size()>=2){
//                         auto it = pos.begin();
//                         int first = *it;
//                         it++;
//                         int second = *it;
//                         positive_val = first*second;
//                         total = total*positive_val;
//                         count+=2;
//                         }
//                         else{
//                             if(pos.size()>=1) auto it = pos.begin();
//                             int ele = *it;
//                             total = total*ele;
//                             count+=1;
//                             pos.erase(it); 
//                             }
//                 }
//                 else{
//                     auto it = pos.begin();
//                     int ele = *it;
//                     total = total*ele;
//                     count+=1;
//                     }   
//            }   
//                }
//                else{
//                    
//                    }
//           
//        }
//    }


//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        vector<int> pos;
//        vector<int> neg;
//        for(int i = 0;i<n;i++){
//            int x,total = 1;
//            cin>>x;
//            if(x<0) neg.push_back(x);
//            else pos.push_back(x);
//            }
//            int size1 = pos.size();
//            int size2 = neg.size();
//            sort(pos.begin(),pos.end());
//            sort(neg.begin(),neg.end());
//            if(size2%2 == 1 && size2<=5) flag = false;
//            if(flag == true){
//                int count = 0;
//                while(size1>0 || size2>0){
//                    
//                    }
//                }
//        }
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n;
//        cin>>n;
//        long long int arr[n];
//        for(int i = 0;i<n;i++) cin>>arr[i];
//        sort(arr,arr+n);
//        long long int ff = arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
//        long long int ss = arr[0]*arr[1]*arr[2]*arr[3]*arr[4];
//        long long int gg = arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
//        long long int ans=max(ff,max(ss,gg));
//        cout<<ans<<endl;
//        }
//        return 0;
//    }

//
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long int n,count = 0;
//         cin>>n;
//         long long int len = n;
//         multiset<long long int> st;
//         for(int i = 0;i<n;i++){
//             long long int x;
//             cin>>x;
//             st.insert(x);
//             }
//             bool flag = true;
//             while(st.size() != 1 && flag == true){
//                 auto it = st.begin();
//                 long long int ele = *it;
//                 auto it1 = it;
//                 long long int ele1 = *it1;
//                 if(ele!=ele1){
//                     st.erase(it);
//                     st.erase(it1);
//                     st.insert((ele+ele1));
//                     }
//                     else{
//                         auto it2 = st.end();
//                         it2--;
//                         long long int ele3 = *it2;
//                         if(ele1!=ele3){
//                             st.erase(it);
//                             st.erase(it2);
//                             st.insert(ele1+ele3);
//                             }
//                             else{
//                                 flag = false;
//                                 }
//                         }
//                 }
//                 cout<<st.size()<<endl;
//         }
//         return 0;
//     }
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        int arr[n+1]={0};
//        for(int i=1;i<=m;i++){
//            cin>>m;
//            arr[m] = 1;
//            }
//            //Now the completed jobs index will have 1 value and left jobs will have index value as 0.
//            int left[(n-m)+1];
//            int indii=1;
//            for(int j=1;j<=n;j++){
//               if(arr[j] == 0){
//                   left[indii] = j;
//                   indii++;
//                   }
//                }
//                for(int c=1;c<=(n-m+1);c+=2){
//                    cout<<left[c]<<" ";
//                    }
//                    for(int a=2;a<=(n-m+1);a+=2){
//                        cout<<left[a]<<" ";
//                        }
//        }
//        return 0;
//    }

// COIN FLIP

// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int G;
//        cin>>G;
//        while(G--){
//            int I,N,Q;
//            cin>>I>>N>>Q;
//            int end_Heads = 0;
//            int end_Tails = 0;
//            if(N%2 == 0){
//                if(Q == 1){
//                    cout<<N/2<<endl;
//                    }
//                    else{
//                        cout<<N/2<<endl;
//                        }
//                }
//                else{
//                 if(Q == 1){
//                     if(I == 1) cout<<N/2<<endl;
//                     else cout<<N/2+1<<endl;
//                     }
//                  else{
//                      if(I == 1) cout<<N/2+1<<endl;
//                      else cout<<N/2<<endl;
//                      }
//                    }
//            }
//        }
//        return 0;
//    }

// Chef and Notebooks

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
// int X,Y,K,N;
// cin>>X>>Y>>K>>N;
// int req_pages = X-Y;
// long int count = 0;
// while(N--){
// int Pi,Ci;
// cin>>Pi>>Ci;
// if(Pi>=req_pages && Ci<=K) count++;
// else count = count;
//}
// if(count>0) cout<<"LuckyChef"<<endl;
// else cout<<"UnluckyChef"<<endl;
// count = 0;
//}
// return 0;
//}

// Carvans
// 1 Approach
// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
// int N;
// cin>>N;
// long int arr[N];
// for(int i=0;i<N;i++){
// cin>>arr[i];
//}
// int max_speed = 1;
// for(int j=1;j<N;j++){
// if(arr[j]<=arr[j-1]){
// max_speed++;
//}
//}
// cout<<max_speed<<endl;
//}
// return 0;
//}

// Carvans 2nd approach

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
// int N;
// cin>>N;
// long int arr[N];
// for(int i=0;i<N;i++){
// cin>>arr[i];
//}
// int max = 1;
// int min = arr[0];
// for(int i=0;i<N;i++){
// if(arr[i]<=arr[i-1] && arr[i]<=min){
// max++;
// min = arr[i];
//}
//}
// cout<<max<<endl;
//}
// return 0;
//}

// Count Substrings
// With brute force
// int main(){
// int t;
// cin>>t;
// while(t--){
// int N;
// cin>>N;
// string s;
// cin>>s;
// int count = 0;
// for(int i=0;i<N;i++){
// if(s[i] == '1') count++;
//}
// long int sub_str = 0;
// for(int i=count;i>=1;i--){
// sub_str+=i;
//}
// cout<<sub_str<<endl;
//}
// return 0;
//}

// With recursion
// long long int sub_str(int count_1){
// if(count_1 == 0) return 0;
// return count_1+sub_str(count_1-1);
//}
// int main(){
// int t;
// cin>>t;
// while(t--){
// int N;
// cin>>N;
// string s;
// cin>>s;
// int count = 0;
// for(int i=0;i<N;i++){
// if(s[i] == '1') count++;
//}
// cout<<sub_str(count)<<endl;
//}
// return 0;
//}

// Interesting XOR
// int main(){
//    int a,b;
//    cin>>a>>b;
//    cout<<(a&b)<<" AND OPERATION"<<endl;
//    cout<<(a|b)<<" OR operation"<<endl;
//    cout<<(a^b)<<" XOR operation"<<endl;
//    cout<<(a=~b)<<" NOT operation "<<endl;
//    cout<<(a<<b)<<" Left shift operation"<<endl;
//    cout<<(a>>b)<<" Right shift operation"<<endl;
//    }
//

// int main(){
//    cout<<"Enter the number"<<endl;
//    int num;
//    cin>>num;
//    cout<<"Enter index you want to set the bit"<<endl;
//    int index;
//    cin>>index;
//    int a = 1;
//    a = a<<index;
//    num = num|a;
//    cout<<num<<endl;
//
//    return 0;
//    }

//    int main(){
//    cout<<"Enter the number"<<endl;
//    int num;
//    cin>>num;
//    cout<<"Enter index you want to set the bit"<<endl;
//    int index;
//    cin>>index;
//    int a = 1;
//    a = a<<index;
//    a = ~a;
//    num = num&a;
//    cout<<num<<endl;
//
//    }

// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    int c;
//    cin>>c;
//    int d=0;
//    int small = min_d(c,d);
//    int bar = pow(2,small);
//    int arr[bar] = {0};
//    int i=bar-1;
//    int j=bar-2;
//    int indii = 0;
//    while(i>0 && j>0){
//        if(i^j == c){
//            arr[indii] = i*j;
//            indii++;
//            i--;
//            j--;
//            }
//            else{
//                i--;
//                j--;
//                }
//        }
//      sort(arr,arr+indii,greater<int>());
//      cout<<arr[0]<<endl;
//      arr[bar] = {0};
//    }
//    return 0;
//    }
// interseting xor

// Paying up
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        int arr[n];
//        for(int i=0;i<n;i++){
//            cin>>arr[n];
//            }
//            int sum=0;
//            bool flag = false;
//    for(int i=0;i<n;i++){
//        for(int j=i;j<n;j++){
//            sum+=arr[j];
//            }
//            if(sum == m){
//                flag = true;
//                break;
//                }
//                else{
//                    sum = 0;
//                    flag = false;
//                    continue;
//                    }
//            }
//              cout<<(flag ? "YES":"NO")<<endl;
//        }
//            return 0;
//}

// Paying up

// int main(){
// int t;
// cin>>t;
// while(t--){
// int n,m;
// cin>>n>>m;
// int arr[n];
// for(int j=0;j<n;j++){
// cin>>arr[j];
//}
// int i=0;
// int sum=0;
// bool flag = false;
// while(i != (n-1)){
// for( int a=i;a<n;a++){
// sum+=arr[a];
// if(sum == m) {
//    flag = true;
//    break;
//}
//}
// if(flag == true) break;
// else i++;
//}
// if(flag == true) cout<<"YES"<<endl;
// else cout<<"NO"<<endl;
//}
// return 0;
//}

// int main(){
//    int n;
//    cin>>n;
//    int count = 0;
//    while(n>0){
//        if((n&1) != 0) count++;
//        n=n>>1;
//        }
//        cout<<count<<endl;
//
//        return 0;
//    }

// Paying up
//
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//      int arr[n];
//        for(int i=0;i<n;i++){
//            cin>>arr[n];
//            }
//            int total = 1<<n;
//            bool flag = false;
//            for(int i=1;i<total;i++){
//               int sum=0;
//                for(int j=0;j<n;j++){
//                    if(i&(1<<j)) {
//                        sum+=arr[j];
//                    }
//                    }
//                    if(sum == m) {
//                        flag = true;
//                    break;
//                    }
//                }
//                if(flag == true) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

// Jewels and stones;
// int main(){
// int t;
// cin>>t;
// while(t--){
// string j,s;
// cin>>j>>s;
// int len1 = j.length();
// int arr1[130]={0};
// for(int i=0;i<len1;i++){
// int indii = j[i]-'a';
// if(indii<0) arr1[indii+80] = 1;
// else arr1[indii]++;
//}
// int len2 = s.length();
// int arr2[130]={0};
// for(int i=0;i<len2;i++){
// int indii = s[i]-'a';
// if(indii<0) arr2[indii+80] = 1;
// else arr2[indii]++;
//}
// int count = 0;
// for(int i=0;i<130;i++){
// if(arr1[i] == arr2[i] && arr1[i] == 1){
// count++;
//}
// if(arr1[i]>0 && arr2[i]>0 && arr1[i] != arr2[i]){
//    count += arr2[i];
//    }
//}
// cout<<count<<endl;
//}
// return 0;
//}
//

// Maximum weight difference
// int main(){
// int t;
// cin>>t;
// while(t--){
//    int N,K;
//    cin>>N>>K;
//    int arr[N] = {0};
//    for(int i=0;i<N;i++){
//        cin>>arr[i];
//        }
//       long long int sum_N = 0;
//        for(int i=0;i<N;i++){
//            sum_N += arr[i];
//            }
//            sort(arr,arr+N);
//          long long int sum_K = 0;
//            for(int i=0;i<K;i++){
//                sum_K+=arr[i];
//                }
//              long long int sum_C = sum_N-sum_K;
//                cout<<sum_C - sum_K<<endl;
//    }
//    return 0;
//}
//
// Interesting XOR!!!
// int min_d(int c,int d){
// if(pow(2,d)>c) return d;
// return min_d(c,d+1);
//}
//
// int main(){
// int t;
// cin>>t;
// while(t--){
// int c;
// cin>>c;
// int d = 0;
// int small = min_d(c,d);
// int bar = pow(2,small);
// int xo=0;
// int max_i,max_j=0;
// for(int i=bar-1;i>=1;i--){
//    int j=i-1;
//    xo = i^j;
//    if(xo == c){
//        max_i=i;
//        max_j=j;
// break;
//    }
//    }
//    cout<<(max_i*max_j)<<endl;
//    small=0,bar=0,xo=0;
//}
// return 0;
//}

// The lead Game
// int main(){
// int n;
// cin>>n;
// int arrS[n]={0};
// int arrT[n]={0};
// for(int i=0;i<n;i++){
// int Si,Ti;
// cin>>Si>>Ti;
// arrS[i]+=Si;
// arrT[i]+=Ti;
//}
// for(int i=1;i<n;i++){
// arrS[i] = arrS[i]+arrS[i-1];
// arrT[i] = arrT[i]+arrT[i-1];
//}
// int arr1[n]={0};
// int arr2[n]={0};
// for(int i=0;i<n;i++){
// if(arrS[i]>arrT[i]){
// arrS[n] = {0};
// arr1[i]=arrS[i]-arrT[i];
//}
// else{
// arrT[n]={0};
// arr2[i]=arrT[i]-arrS[i];
//}
//}
// int P1 = *max_element(arr1,arr1+n);
// int P2 = *max_element(arr2,arr2+n);
// if(P1>P2) cout<<1<<" "<<P1<<endl;
// else cout<<2<<" "<<P2<<endl;
//
// return 0;
//}

// The minimum number of notes

// int main(){
//    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int min = INT_MAX;
//        int arr[n];
//        for(int i=0;i<n;i++){
//            cin>>arr[i];
//            if(arr[i]<min) min = arr[i];
//            }
//            long long count = 0;
//            for(int i=0;i<n;i++){
//                count += (arr[i]-min);
//                }
//                cout<<count<<endl;
//        }
//        return 0;
//    }

// int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//        long long A; //total no. of particles bombarded
//        long long N; //limit for a chamber
//        long long K; //no. of chambers(from 0 to K-1)
//        cin >> A >> N >> K;
//        vector<int> vec;
//        int count = 0;
//
//        int i = 0;
//        while (A > 0 && i < K)
//        {
//            cout << A % (N + 1) << " ";
//            A = A / (N + 1);
//            i++;
//        }
//        while (i < K)
//        {
//            cout << "0 ";
//            i++;
//        }
//
//        cout << endl;
//
//}

// Interseting XOR
// int min_d(int c,int d){
// if(pow(2,d)>c) return d;
// return min_d(c,d+1);
//}
// int max_xor(int bar,int c){
//    int max = 0;
//    for(int i=bar-1;i>=1;i++){
//        for(int j=i-1;j>=1;j++){
//            if(i^j==c){
//                max = i*j;
//                return max;
//                }
//            }
//        }
//        return 0;
//    }
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int c;
//        cin>>c;
//        int d=0;
//        int small = min_d(c,d);
//        int bar=  pow(2,small);
//        int ans = max_xor(bar,c);
//        cout<<ans<<endl;
//        }
//        return 0;
//    }

// Interesting Xor
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int c;
//        long long A=0,B=0;
//        cin>>c;
//        int flag = 1;
//        int id = 0;
//        for(int i=31;i>=0;i--){
//            if((1<<i)&c){
//                id = i;
//                break;
//                }
//            }
//            for(int i=id;i>=0;i--){
//                if((1<<i)&c){
//                    if(flag == 1){
//                        A = A|(1<<i);
//                        flag = 0;
//                        }
//                        else{
//                            B = B|(1<<i);
//                            }
//                    }
//                    else{
//                        A = A|(1<<i);
//                        B = B|(1<<i);
//                        }
//                }
//                cout<<A*B<<endl;
//        }
//        return 0;
//    }

// Space Arrays
// int main(){
// int t;
// cin>>t;
// while(t--){
// int N;
// cin>>N;
// int arr[N];
// int count = 0,lasti=0;
// for(int i=0;i<N;i++){
// cin>>arr[i];
//}
// sort(arr,arr+N);
// for(int i=0;i<N;i++){
// if(arr[i]<=(i+1)){
// count+=(i+1)-arr[i];
// lasti++;
//}
// else break;
//}
// if(lasti<(N-1) || count%2 == 0){
// cout<<"Second"<<endl;
//}
// else{
//    cout<<"First"<<endl;
//    }
//}
// return 0;
//}

// Nuclear Reactors

// int main(){
// int N,K;
// long long int A;
// cin>>A>>N>>K;
// int arr[K]={0};
// while(A>(N+1)){
// A = A-(N+1);
// arr[0] = N+1;
// for(int i=0;i<K;i++){
// if(arr[i]>N){
// arr[i] = 0;
// arr[i+1]++;
//}
//}
//}
// arr[0] = arr[0]+A;
// for(int i=0;i<K;i++){
// cout<<arr[i]<<" ";
//}
// return 0;
//}

// Optimized solution
// int main(){
//   long long int A,N,K;
//    cin>>A>>N>>K;
//    int arr[K]={0};
//    for(int i=0;i<K;i++){
//        arr[i] = A%(N+1);
//        A = A/(N+1);
//        }
//        for(int i=0;i<K;i++){
//            cout<<arr[i]<<" ";
//            }
//    return 0;
//    }

// Chef and Feedback
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    string s;
//    cin>>s;
//    int len = s.length();
//   int pos1 = s.find('101');
//   int pos2 = s.find('010');
//   if((pos1<=len) || (pos2==len)){
//       cout<<"Bad"<<endl;
//       }
//       else{
//           cout<<"Good"<<endl;
//           }
//    }
//    return 0;
//    }
//********************************************************// -- Incomplete

// Fit squares in Triangle
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int B;
//        cin>>B;
//        int area_tr = 0.5*B*B;
//        int area_sq = 4;
//        int total = (area_tr/area_sq);
//        cout<<total<<endl;
//        }
//        return 0;
//    }

// Prime Generator
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       long long int a,b;
//        cin>>a>>b;
//        if(a<=1) a = 2;
//        if(a == 2) cout<<a<<endl;
//        if(a%2 == 0) a++;
//        for(int i=a;i<=b;i=i+2){
//            int flag = 1;
//            for(int j=2;j*j<=i;j++){
//                if(i%j == 0){
//                    flag = 0;
//                    break;
//                    }
//                }
//                if(flag == 1)
//                cout<<i<<endl;
//            }
//        }
//        return 0;
//    }

// Discrepancies in the voters list
// int main(){
//    int N1,N2,N3;
//    cin>>N1>>N2>>N3;
//    int arr1[N1];
//    int arr2[N2];
//    int arr3[N3];
//    int freq_arr[50001]={0};
//    for(int i=0;i<N1;i++){
//        cin>>arr1[i];
//        freq_arr[arr1[i]]++;
//        }
//        for(int j=0;j<N2;j++){
//            cin>>arr2[j];
//            freq_arr[arr2[j]]++;
//            }
//            for(int k=0;k<N3;k++){
//                cin>>arr3[k];
//                freq_arr[arr3[k]]++;
//                }
//                int ans[N1]={0};
//                int count=  0;
//                int a=0;
//                for(int i=0;i<50001;i++){
//                    if(freq_arr[i]>=2){
//                        ans[a] = i;
//                        a++;
//                        count++;
//                        }
//                    }
//                    cout<<count<<endl;
//                    for(int i=0;i<N1;i++){
//                        cout<<ans[i]<<endl;
//                        }
//                    return 0;
//    }

// using second approach
// int main(){
//    int N1,N2,N3;
//    cin>>N1>>N2>>N3;
//    int total_id = N1+N2+N3;
//    vector<int>arr;
//    for(int i=0;i<total_id;i++){
//        int id;
//        cin>>id;
//        arr.push_back(id);
//        }
//        sort(arr.begin(),arr.end());
//        int printed=-1;
//        vector<int> ans;
//        int count = 0;
//        for(int i=0;i<total_id;i++){
//            if(arr[i] == arr[i+1]){
//                if(printed != arr[i]){
//                printed = arr[i];
//                ans.push_back(printed);
//                count++;
//                }
//                }
//            }
//            cout<<count<<endl;
//            for(int i=0;i<count;i++){
//                cout<<ans[i]<<endl;
//                }
//
//            return 0;
//    }

// Little Elephant and Permutations
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//        int arr[N];
//        int prev = -1;
//        int inv = 0;
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            }
//            for(int i=0;i<N;i++){
//                for(int j=i+1;j<N;j++){
//                    if(arr[i]>arr[j]) inv++;
//                    }
//            }
//            int local_inv = 0;
//            for(int i=0;i<N-1;i++){
//                if(arr[i]>arr[i+1]) local_inv++;
//                }
//                if(inv == local_inv) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

// Dividing Stamps
// long long int fact(long long int N){
//    if(N == 0) return 0;
//    return N+fact(N-1);
//    }
//
// int main(){
//   long int N;
//    cin>>N;
//   long long int arr[N];
//   long long int facti = fact(N);
//   long long int sum = 0;
//    for(int i=0;i<N;i++){
//        cin>>arr[i];
//        sum+=arr[i];
//        }
//        if(sum == facti) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        return 0;
//    }

// 2 approach
// int main(){
//    long int N;
//    cin>>N;
//    long long sum=0;
//    for(int i=1;i<N+1;i++){
//        int C;
//        cin>>C;
//        sum+=C;
//        }
//       long long int sum_n = (N*(N-1))/2;
//        if(sum_n == sum) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//
//        return 0;
//    }

// Chopsticks

// int main(){
// long long int N,D;
// cin>>N>>D;
// long long int arr[N+1];
// arr[0] = 0;
// for(int i=1;i<=N;i++){
// cin>>arr[i];
//}
// sort(arr,arr+(N+1));
// int i=N-1;
// int j=N;
// int count = 0;
// while(i>=1 || j>=1){
// if(arr[j] - arr[i]<=D){
// count++;
// i = i-2;
// j = j-2;
//}
// else{
// i--;
// j--;
//}
//}
// cout<<count<<endl;
//
// return 0;
//}

// Sell all the cars

// int main(){
// ios::sync_with_stdio(false);
// cin.tie(0);
// const int mod = 1'000'000'007;
// int t;
// cin>>t;
// while(t--){
// int N;
// cin>>N;
// long long int arr[N+1];
// arr[0] = 0;
// for(int i=1;i<=N;i++){
// cin>>arr[i];
//}
// sort(arr,arr+(N+1));
// int i=N;
// long long int sum = 0;
// int increment = 0;
// int ans = 0;
// while(i!=0){
// if(arr[i]!=0){
// sum+=arr[i]-increment;
// increment++;
//}
// i = i-1;
// if(ans>mod){
// ans-=mod;
//}
//}
// cout<<sum<<endl;
//}
//}

// Doctor Chef -- wrong approach
// int main(){
// int t;
// cin>>t;
// while(t--){
// int N,x;
// cin>>N>>x;
// int arr[N];
// for(int i=0;i<N;i++){
// cin>>arr[i];
//}
// sort(arr,arr+N);
// int i = N-1;
// int days = 0;
// while(i != -1){
// if(x>=arr[i]){
// days++;
// x = x*2;
// i--;
//}
// else{
// days++;
// int temp = arr[i];
// arr[i] = arr[i] - x;
// if(2*arr[i]<=temp){
// arr[i] = 2*arr[i];
//}
// else{
// arr[i] = temp;
//}
// x = x*2;
//}
//}
// cout<<days<<endl;
//}
// return 0;
//}

// Right approach
// int main(){
// int t;
// cin>>t;
// while(t--){
// int N,x;
// cin>>N>>x;
// int arr[N];
// for(int i=0;i<N;i++){
// cin>>arr[i];
//}
// int max = *max_element(arr,arr+N);
// int flag = 0;
// int count = 0;
// if(x>=max){
//    cout<<N<<endl;
//    continue;
//    }
//    else{
//        while(x<max){
//            for(int i=0;i<N;i++){
//                if(x>=arr[i] && arr[i]>x/2){
//                    arr[i] = 0;
//                    x = arr[i]*2;
//                    flag = 1;
//                    break;
//                    }
//                }
//               if(flag == 0){
//                   x = x*2;
//                   }
//                   count++;
//            }
//            for(int i=0;i<N;i++){
//                if(arr[i]!=0){
//                    count++;
//                    }
//                }
//                cout<<count<<endl;
//        }
//}
// return 0;
//}

// Right approach
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N,x;
//        int arr[N];
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            }
//            sort(arr,arr+N);
//            int max = arr[N-1];
//            int count = 0;
//            int flag = 1;
//            if(x>=max){
//                cout<<N<<endl;
//                continue;
//                }
//                else{
//                    while(x<max){
//                        for(int i=0;i<N;i++){
//                            if(2*arr[i]>x){
//                                x = arr[i]*2;
//                                arr[i] = 0;
//                                flag = 0;
//                                count++;
//                                break;
//                                }
//                            }
//                            if(flag == 0){
//                            x = x*2;
//                            count++;
//                            }
//                        }
//                        count++;
//                        arr[N-1] = 0;
//                        for(int i=0;i<N;i++){
//                            if(arr[i] != 0){
//                                 count++;
//                                }
//                            }
//                    }
//                    cout<<count<<endl;
//        }
//        return 0;
//    }

// Maximum weight difference
// int main(){
// int t;
// cin>>t;
// while(t--){
// int N,K;
// cin>>N>>K;
// int son_items=min(K,(N-K));
// long int arr[N];
// int sum = 0;
// for(int i=0;i<N;i++){
// cin>>arr[i];
// sum+=arr[i];
//}
// sort(arr,arr+N);
// int son_sum = 0;
// for(int i=0;i<son_items;i++){
// son_sum+=arr[i];
//}
// int father_sum = sum-son_sum;
// cout<<father_sum-(son_sum)<<endl;
//}
// return 0;
//}
//

// Dipsa and Number army
// int main(){
// int t;
// cin>>t;
// while(t--){
// int n;
// cin>>n;
// int arr[n];
// for(int i = 0;i<n;i++){
// cin>>arr[n];
//}
// if(n%3 != 0){
// cout<<n/3+1<<" ";
//}
// else{
// cout<<n/3<<" ";
//}
// if(n%2 == 0){
// cout<<n/2<<endl;
//}
// else{
// cout<<n/2+1<<endl;
//}
//}
// return 0;
//}
//
//
//
// Fast Food
// int main(){
// int t;
// cin>>t;
// while(t--){
// int N;
// cin>>N;
// int A[N],B[N];
// int sum_A=0,sum_B=0;
// for(int i=0;i<N;i++){
// cin>>A[i];
// sum_A+=A[i];
//}
// for(int i=0;i<N;i++){
// cin>>B[i];
// sum_B+=B[i];
//}
// int max_profit = 0;
// for(int i=0;i<N;i++){
// if(B[i]>A[i] && sum_B<sum_A){
// max_profit+=A[i];
// sum_A = sum_A-A[i];
// sum_B = sum_B-B[i];
// continue;
//}
// if(B[i]>A[i] && sum_B>sum_A){
// max_profit+=sum_B;
// break;
//}
// if(A[i]>B[i]){
// max_profit+=A[i];
// sum_A = sum_A-A[i];
// sum_B = sum_B-B[i];
// continue;
//}
//}
// cout<<max_profit<<endl;
//}
// return 0;
//}

// second approach
// int main(){
// int t;
//    cin >> t;
//    while(t--) {
//        int n;
//        cin >> n;
//        int v1[n],v2[n];
//        int mx = 0;
//        for(int i=0;i<n;i++) {
//            cin >> v1[i];
//            mx += v1[i];
//        }
//        int cur = mx;
//        for(int i=0;i<n;i++) {
//            cin >> v2[i];
//        }
//        for(int i=n-1;i>=0;i--) {
//            cur += v2[i]-v1[i];
//            mx = max(mx,cur);
//        }
//        cout << mx << '\n';
//    }
// return 0;
//}

// splitting candies
// int main(){
// int t;
// cin>>t;
// while(t--){
// long long int  N,K;
// cin>>N>>K;
// if(N == 0){
// cout<<0<<" "<<0<<endl;
//}
// if( K == 0){
// cout<<0<<" "<<N<<endl;
//}
// if(N!=0 && K!=0){
// long long int teacher = N%K;
// long long int student = N/K;
// cout<<student<<" "<<teacher<<endl;
//}
//}
// return 0;
//}

//
// int main(){
// int t;
// cin>>t;
// while(t--){
// int w1,w2,x1,x2,m;
// cin>>w1>>w2>>x1>>x2>>m;
// int increase = w2-w1;
// int lower_boundie = x1*m;
// int higher_boundie = x2*m;
// if(increase>=lower_boundie && increase<=higher_boundie) cout<<1<<endl;
// else cout<<0<<endl;
//}
// return 0;
//}
// int main(){
// int t;
// cin>>t;
// while(t--){
// string str;
// cin>>str;
// size_t index = 0;
// while (true) {
// index = str.find("party", index);
// if (index == std::string::npos) break;
// str.replace(index, 5, "pawri");
//}
// cout<<str<<endl;
//}
// return 0;
//}

//
// int main() {
//    int l = 1, r = 1000000;
//    while (l != r) {
//        int mid = (l + r + 1) / 2;
//        printf("%d\n", mid);
//        fflush(stdout);
//
//        char response[3];
//        scanf("%s", response);
//        if (strcmp(response, "<") == 0)
//            r = mid — 1;
//        else
//            l = mid;
//    }
//
//    printf("! %d\n", l);
//    fflush(stdout);
//}

// Matrix XOR
// int main(){
// int t;
// cin>>t;
// while(t--){
// long long int N,M,K;
// cin>>N>>M>>K;
// long long int present = 0;
// long long int prev = 0;
// int m = M;
// while(N!=0){
// while(M!=0){
// present=K+N+M;
// prev=prev^present;
// M--;
//}
// N--;
// M=m;
//}
// cout<<prev<<endl;
//}
// return 0;
//}

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
// long long int N,M,K;
// cin>>N>>M>>K;
// long long int present = 0;
// long long int prev = 0;
// long int m = M;
// while(N!=0){
// present=K+N+M;
// if(present == prev){
// prev=0;
// M--;
// continue;
//}
// prev=prev^present;
// M--;
// if(M == 0){
// N--;
// M=m;
//}
//}
// cout<<prev<<endl;
//}
// return 0;
//}

// Consecutive deletions -- after the contest
// int main(){
// int t;
// cin>>t;
// while(t--){
// long int N,K;
// cin>>N>>K;
// long int arr[N];
// long int sum=0,cnt=0;
// for(int i=0;i<N;i++){
// cin>>arr[i];
// sum+=arr[i];
//
// if(i<K && arr[i] == 1){
// cnt++;
//}
//}
// long int min_cnt = cnt;
// for(int i=K;i<N;i++){
// if(arr[i-K] == 1) cnt--;
// if(arr[i] == 1) cnt++;
//
// min_cnt = min(min_cnt,cnt);
//}
// sum-=min_cnt;
// sum+=(min_cnt*(min_cnt+1))/2;
//
// cout<<sum<<endl;
//}
// return 0;
//}

// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//        int arr[N];
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            }
//          for(int i=0;i<N;i++){
//              if(arr)
//              }
//        }
//    }
//
//

// Number Game Revisited
// int main(){
// int t;
// cin>>t;
// while(t--){
// int N;
// cin>>N;
// int flag = 0;
// int count = 0;
// while(N>0){
// int i = N;
// for(int j=2;j*j<=N;j++){
// if(i%j==0){
// flag = 1;
// break;
//}
//}
// if(flag == 0){
// N = N-i;
// count++;
//}
// else{
// N--;
// count++;
//}
// flag=0;
//}
// if(count%2 == 0){
// cout<<"ALICE"<<endl;
//}
// else{
// cout<<"BOB"<<endl;
//}
//}
// return 0;
//}

// Number Revisited
// int main(){
// long long int t;
// cin>>t;
// while(t--){
// long long int N;
// cin>>N;
// if(N%4 == 1) cout<<"ALICE"<<endl;
// else cout<<"BOB"<<endl;
//}
// return 0;
//}

// Copy Paste
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//        int arr[N];
//        for(int j=0;j<N;j++){
//            cin>>arr[j];
//            }
//            sort(arr,arr+N);
//            int repeat=-1;
//            int count = 0;
//            int i=0;
//           for(;i<N-1;i++){
//               if(arr[i] == repeat) continue;
//            if(arr[i] == arr[i+1]){
//            repeat = arr[i];
//            }
//            count++;
//               }
//               if(arr[i]!=arr[i-1]) count++;
//               cout<<count<<endl;
//        }
//        return 0;
//    }

// Tourist Translations

// int main(){
//    int t;
//    string M;
//    cin>>t>>M;
//    while(t--){
//        string s;
//        cin>>s;
//        int len = s.length();
//        int indii;
//        int j=-1;
//        string original = "abcdefghijklmnopqrstuvwxyz";
//       for(int i=0;i<len;i++){
//           if(s[i] == '.' || s[i] == ',' || s[i] == '?' || s[i] == '!') continue;
//           while(s[i]!=M[j]){
//               j++;
//               }
//               s[i] = original[j];
//           }
//           cout<<s<<endl;
//    }
//    return 0;
//}

// unordered_map<char,char> m;
// int main(){
//    int t;
//    string M;
//    cin>>t>>M;
//    int len = M.length();
//    for(int i=0;i<len;i++){
//        m[char(i+'a')] = M[i];
//        }
//        while(t--){
//            string s;
//            cin>>s;
//            string res="";
//            for(char c:s){
//                if(c == '_') res+=' ';
//                else if(isalpha(c)){
//                    if(isupper(c)) res+=toupper(m[tolower(c)]);
//                    else res+=m[c];
//                    }
//                    else{
//                        res+=c;
//                        }
//                }
//                cout<<res<<endl;
//            }
//            return 0;
//    }

// The Best Box -- wrong answer
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    int P,S;
//    cin>>P>>S;
//    int wire = P/4;
//    int area = S/2;
//    bool flag1=1,flag2=0,flag3=0;
//    int L=0,B=0,H=0;
//    while((L+B+H<=wire) && (L*B+B*H+L*H<=area)){
//        if(flag1 == 1){
//            L++;
//            flag1 = 0;
//            flag2 = 1;
//            }
//            else if(flag2 == 1){
//                B++;
//                flag2 = 0;
//                flag3 = 1;
//                }
//                else{
//                    H++;
//                    flag3 = 0;
//                    flag1 = 1;
//                    }
//        }
//        double volume = L*B*H;
//        cout<<fixed<<setprecision(2)<<volume<<endl;
//    }
//    return 0;
//}

// counting pretty numbers
// int main(){
// int t;
// cin>>t;
// while(t--){
// int L,R;
// cin>>L>>R;
// int count = 0;
// for(int i=L;i<=R;i++){
// int rem = i%10;
// if(rem==2 || rem==3 || rem==9){
// count++;
//}
// else{
// continue;
//}
//}
// cout<<count<<endl;
// count = 0;
//}
// return 0;
//}

// GCD2
//int gcd(int a,int b){
//if(b == 0) return a;
//return gcd(b,a%b);
//}
//int main()
//{
//int n;
//cin >> n;
//while(n--) {
//int a;
//string b;
//cin >> a >> b;
//if(a == 0) {
//cout << b << endl;
//}
//int rem = 0;
//for(int i=0;i<b.length();i++){
//rem = (rem * 10 + b[i]-'0')%a; 
//}
//cout<<gcd(a,rem)<<endl;
//}
//return 0;
//}

//Your Name is Mine
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string M,W;
//        cin>>M>>W;
//        int lenM = M.length();
//        int lenW = W.length();
//        if(lenM<lenW){
//            int index = W.find(M);
//            if(index != string::npos) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//            continue;
//            }
//            else{
//               int index = M.find(W);
//               if(index != string::npos) cout<<"YES"<<endl;
//               else cout<<"NO"<<endl;
//               continue;
//                }
//        }
//        return 0; 
//    }

//Your Name is mine -second approach
//int main(){
//int t;
//cin>>t;
//while(t--){
//string M,W;
//cin>>M>>W;
//int len_M = M.length();
//int len_W = W.length();
//bool flag = 0;
//int prev1 = -1;
//int prev2 = -1;
//if(len_M<=len_W){
//for(int i=0;i<len_M;i++){
//int j = prev1+1;
//for( ;j<len_W;j++){
//flag = 0;
//if(M[i] == W[j]){
//flag = 1;
//prev1 = j;
//break;
//}
//else{
//    flag = 0;
//    }
//}
//if(flag == 0){
//cout<<"NO"<<endl;
//break;
//}
//}
//if(flag == 1)
// cout<<"YES"<<endl;
//}
//else{
//for(int i=0;i<len_W;i++){
//int j = prev2+1;
//for( ;j<len_M;j++){
//flag = 0;
//if(W[i] == M[j]){
//flag = 1;
//prev2 = j;
//break;
//}
//else{
//    flag = 0;
//    }
//}
//if(flag == 0){
//cout<<"NO"<<endl;
//break;
//}
//}
//if(flag == 1)
//cout<<"YES"<<endl;
//}
//}
//return 0;
//}

//Subtraction Game 1 -- Time Limit Exceeded
//int main(){
//int t;
//cin>>t;
//while(t--){
//int N;
//cin>>N;
//long long int arr[N] = {0};
//for(int i=0;i<N;i++){
//cin>>arr[i];
//}
//sort(arr,arr+N,greater<int>());
//while(arr[0]!=arr[N-1]){
//arr[0] = arr[0] - arr[N-1];
//if(arr[1]>arr[N-1]){
//    arr[1] = arr[1] - arr[N-1];
//    }
//sort(arr,arr+N,greater<int>());
//}
//cout<<arr[0]<<endl;
//}
//return 0;
//}

//Subtraction Game - 1
//int main(){
//   long long int t;
//    cin>>t;
//    while(t--){
//        long long int N;
//        cin>>N;
//       long long int arr[N]=  {0};
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            }
//           long long int x = arr[0];
//            for(int i=1;i<N;i++){
//            x = __gcd(x,arr[i]);    
//                }
//                cout<<x<<endl;
//        }
//        return 0;
//    }

//Magic pairs
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//       long long int ans = 0;
//       long long int ele;
//        for(int i=0;i<n;i++){
//            cin>>ele;
//            }
//        for(int i= (n-1);i>=1;i--){
//            ans+=i;
//            }
//            cout<<ans<<endl;
//        }
//        return 0;
//    }

//Little Elephant and Bombs
//int main(){
//int t;
//cin>>t;
//while(t--){
//int n;
//cin>>n;
//string s;
//cin>>s;
//    int count = 0;
//    if(n == 1){
//        if(s[0] == '0') cout<<1<<endl;
//        else cout<<0<<endl;
//        }
//        else if(n == 2){
//        if(s[0] == '1' || s[1] == '1') cout<<0<<endl;
//        else cout<<1<<endl;
//            }
//        else if(n>=3){
//    if(s[0] == '0' && s[1] == '0') count++;
//    if(s[n-1] == '0' && s[n-2] == '0') count++;
//    for(int i=1;i<n-1;i++){
//    if(s[i] == '1' || s[i-1] == '1' || s[i+1] == '1') continue;
//        if(s[i] == '0' && s[i-1] == '0' && s[i+1] == '0'){
//            count++;
//            } 
//        }
//        cout<<count<<endl;
//}
//else{
//    n = n;
//    }
//}
//return 0;
//}

//Divide the cake
//int main(){
//int t;
//cin>>t;
//while(t--){
//int N;
//cin>>N;
//int total_angle = 360;
//if(total_angle%N == 0){
//cout<<"y"<<" ";
//}
//else{
//cout<<"n"<<" ";
//}
//if(N<=360){
//cout<<"y"<<" ";
//}
//else{
//cout<<"n"<<" ";
//}
//if((N*(N+1))/2<=360){
//cout<<"y"<<endl;
//}
//else{
//cout<<"n"<<endl;
//}
//}
//return 0;
//}

//Processing a string
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        int len = s.length();
//        int sum = 0;
//        for(int i=0;i<len;i++){
//            int x = s[i] - 'a';
//            if(x<0){
//                int real = s[i] - '0';
//                sum+=real;
//                }
//            }
//            cout<<sum<<endl;
//        }
//        return 0;
//    }

//Permutation cycles
//int main(){
//    int N;
//    cin>>N;
//    int arr[N+1];
//    for(int i=1;i<=N;i++){
//        cin>>arr[i];
//        }
//        int count = 0;
//        int arr1[N+1] = {0};
//        vector<int> arr2;
//        int j = 1;
//        int times = 0;
//        while(count!=N){
//            j = 1;
//            times++;
//             while(arr1[j] == -1){
//            j++;
//            }
//            while(arr1[j]!=-1){
//                count++;
//                arr2.push_back(j);
//                arr1[j] = -1;
//                j = arr[j];
//                }
//                arr2.push_back(j);
//                arr2.push_back(0);
//            }
//            cout<<times<<endl;
//            int len = arr2.size();
//            for(int a=0;a<len;a++){
//                if(arr2[a] == 0){ 
//                    cout<<endl;
//                    continue;
//                }
//                else{
//                    cout<<arr2[a]<<" ";
//                    }
//                }
//            return 0;
//    }

//Compilers and Parsers
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        bool ok = true;
//        int balance,MAX;
//        MAX = balance = 0; 
//        for(int i=0;i<s.length();i++){
//            if(s[i] == '<'){
//                balance++;
//                }
//                else{
//                    balance--;
//                    }
//                    if(balance<0) ok=false;
//                    if(balance == 0 && ok){
//                        MAX = i+1;
//                        }
//            }
//            cout<<MAX<<endl;
//        }
//        return 0;
//    }

//Motivation
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       long long int N,X;
//        cin>>N>>X;
//        vector<int>S;
//        vector<int> R;
//       long long int s,r;
//        for(int i=0;i<N;i++){
//            cin>>s>>r;
//            if(s<=X){
//                S.push_back(s);
//                R.push_back(r);
//                }
//                else{
//                    continue;
//                    }
//            }
//           long long  int len = R.size();
//            sort(R.begin(),R.end());
//            cout<<R[len-1]<<endl;
//        }
//        return 0;
//    }

//Turn it
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int U,V,A,S;
//        cin>>U>>V>>A>>S;
//        float part = (U*U)-(2*A*S);
//        float v = pow(part,0.5);
//        if(v>V){
//            cout<<"NO"<<endl;
//            }
//            else{
//                cout<<"YES"<<endl;
//                }
//        }
//        return 0;
//    }

//Make the sum even
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//       long long int arr[N];
//       long long int sum_of_seq = 0;
//        vector<int> odd;
//        int p;
//       long long int selected;
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            if(arr[i]%2!=0) odd.push_back(arr[i]);
//            sum_of_seq+=arr[i];
//            }
//            if(sum_of_seq%2!=0){
//            int len = odd.size();
//            sort(odd.begin(),odd.end());
//            int temp = (odd[len-1]/2);
//            if(temp>0){
//            selected = temp+1;
//            }
//            else{
//                selected = 0;
//                }
//            if(selected <= 0) cout<<(-1)<<endl;
//            else cout<<1<<endl;
//            }
//                else{
//                    cout<<0<<endl;
//                    }
//        }
//        return 0;
//    }

//again
//int main(){
//int t;
//cin>>t;
//while(t--){
//int N;
//cin>>N;
//long long int arr[N];
//long long int sum = 0;
//bool odd = false;
//for(int i=0;i<N;i++){
//cin>>arr[i];
//if(arr[i]%2!=0 && arr[i]!=1 && arr[i]!=0) odd = true;
//sum+=arr[i];
//}
//if(sum%2 == 0){
//cout<<0<<endl;
//}
//else{
//if(odd == true){
//cout<<1<<endl;
//}
//else{
//cout<<-1<<endl;
//}
//}
//}
//return 0;
//}

//Racing
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int X,R,M;
//        cin>>X>>R>>M;
//        float min_X = X/60;
//        float ans = (R-min_X)*2+1;
//        if(ans>M){
//            cout<<"NO"<<endl;
//            }
//            else{
//                cout<<"YES"<<endl;
//                }
//        }
//        return 0;
//    }

//Possible victory
//int main(){
//  int R,O,C;
//  cin>>R>>O>>C;
//  int rem_overs = 20-O;
//int rem_balls = rem_overs*6;
//int max_runs = rem_balls*6; 
//  int rem = R-C;
//  if(rem==0){
//      cout<<"YES"<<endl;
//      }
//      if(rem!=0){
//   if(rem<=max_runs){
//       cout<<"YES"<<endl;
//       }
//else{
//    cout<<"NO"<<endl;
//    }
//      }
//return 0;   
//    }
    
    
    
//    int main(){
//  int R,O,C;
//  cin>>R>>O>>C;
//  int rem_overs = 20-O;
//int rem_balls = rem_overs*6;
//int max_runs = rem_balls*6; 
//  int rem = R-C;
//  if(R == 720){
//      cout<<"NO"<<endl;
//      }
//      if(R!=720){
//   if(rem<=max_runs){
//       cout<<"YES"<<endl;
//       }
//else{
//    cout<<"NO"<<endl;
//    }
//      }
//return 0;   
//    }

//Nobel Prize
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       long int N,M;
//        cin>>N>>M;
//        bool flag = false;
//       long long int arr[N];
//       long long int update[M+1]={0};
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            int val = arr[i];
//            update[val]++;
//            }
//            for(int i=1;i<M+1;i++){
//                if(update[i] == 0){
//                    flag = true;
//                    break;
//                    }
//                }
//                if(flag == true) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//College Life 5
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N,M;
//        cin>>N>>M;
//        int size = max(N,M);
//        int F[size] = {0};
//        int C[size] = {0};
//        for(int i=0;i<N;i++){
//            cin>>F[i];
//            }
//            for(int i=0;i<M;i++){
//                cin>>C[i];
//                }
//                char ptr = 'f';
//                int count = 0;
//                for(int i=0;i<size;i++){
//                    if(F[i]<C[i] && F[i]!=0 && ptr == 'c'){
//                        count++;
//                        ptr = 'f';
//                        }
//                    else if(C[i]<F[i] && C[i]!=0 && ptr == 'f'){
//                        count++;
//                        ptr = 'c';
//                        }
//                        else{
//                            count = count;
//                            }
//                }
//                cout<<count<<endl;
//        }
//        return 0;
//    }

//int main(){
//int t;
//cin>>t;
//while(t--){
//int N,M;
//cin>>N>>M;
//int F[N];
//int C[M];
//for(int a=0;a<N;a++){
//cin>>F[a];
//}
//for(int b=0;b<M;b++){
//cin>>C[b];
//}
//char view = 'f';
//int i = 0;
//int j = 0;
//int count = 0;
//while(i!=0 || j!=0){
//    if(view=='f'){
//        if(C[j]<F[i]){
//            view='c';
//            count++;
//            j++;
//            }
//        }
//        else{
//            if(F[i]<C[j]){
//                view='f';
//                count++;
//                i++;
//                }
//            }
//    }
//    cout<<count+1<<endl;
//}
//return 0;
//}

//copied
//#include  <bits/stdc++.h>
//using namespace std;
//#define ll long long int
//int main() {
//ll test;
//cin>>test;
//while(test--){
//    ll n,m,flag=1,count = 0,temp;
//    cin>>n>>m;
//    map<ll,ll> m1;
//    vector<ll> v;
//    for(ll i=0;i<n;i++){
//        cin>>temp;
//        m1[temp]++;
//        v.push_back(temp);
//    }
//    for(ll i=0;i<m;i++){
//        cin>>temp;m1[temp] = 0;
//        v.push_back(temp);
//    }
//    sort(v.begin(),v.end());
//    for(auto i:v){
//        if(m1[i]!=flag){
//            flag=0;
//        }
//        else flag =1;
//        count++;
//    }
//    cout<<count<<endl;
//}
//	return 0;
//}

//Cutting Recipes
//int main(){
// int test;
// cin>>test;
// while(test--){
//     int number_of_ingii;
//     cin>>number_of_ingii;
//     int arr[number_of_ingii];
//     for(int i=0;i<number_of_ingii;i++){
//         cin>>arr[i];
//         }
//         if(number_of_ingii == 2){
//             
//             }
//         int common_gcd[number_of_ingii-1];
//         for(int i=0;i<number_of_ingii-1;i++){
//             common_gcd[i] = __gcd(arr[i],arr[i+1]);
//             }
//             sort(common_gcd,common_gcd+number_of_ingii-1);
//        if(common_gcd[0] == common_gcd[number_of_ingii-2]){
//            for(int i=0;i<number_of_ingii;i++){
//                cout<<(arr[i]/common_gcd[0])<<" ";
//                }
//                cout<<endl;
//            }
//            else{
//                for(int i=0;i<number_of_ingii;i++){
//                    cout<<arr[i]<<" ";
//                    }
//                    cout<<endl;
//                }
//     
//     }
//     return 0;
//    }

//Dinner By Candlelight
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       long long int A,Y,X;
//        cin>>A>>Y>>X;
//       long long int remaining;
//        if(A>=Y){
//            remaining = X*Y;
//            }
//            else{
//                remaining = A*X+1;
//                }
//                cout<<remaining<<endl;
//        }
//        return 0;
//    }

//Racing -repeat
//int main(){
//     int t;
//    cin>>t;
//    while(t--){
//        float X,R,M;
//        cin>>X>>R>>M;
//    float new_X = X/60;
//    float new_R = R-new_X;
//    float new_M = M-new_X;
//    float X1 = new_R/new_X;
//    float sub_from_M = X1*new_X;
//    float last_M = new_M-sub_from_M;
//    //cout<<new_X<<" "<<new_R<<" "<<new_M<<" "<<X1<<" "<<sub_from_M<<" "<<last_M<<" "<<endl;
//    if(last_M<new_R) cout<<"NO"<<endl;
//    else cout<<"YES"<<endl;
//    }
//    return 0;
//}

//Racing
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int X,R,M;
//        cin>>X>>R>>M;
//        if(M<R){
//            cout<<"NO"<<endl;
//            return 0;
//            }
//        float r = R*60;
//        float m = M*60;
//        float new_r = r-X;
//        float new_m = m-X;
//        float ratio = new_r/X;
//        if((ratio*X)+new_r<=new_m) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        
//        }
//        return 0;
//    }

//Racing
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       long long int X,R,M;
//        cin>>X>>R>>M;
//       long long int r = R*60;
//       long long int m = M*60;
//       if(X>=r && X>=M){
//           cout<<"YES"<<endl;
//           }
//           else if(X>=r && X<M) cout<<"NO"<<endl;
//           else if(X<r){
//        if((X+(r-X)*2)<=m) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        }
//    }
//        return 0;
//    }

//Racing
//void solve(){
//
//long long int x,r,m;
//cin>>x>>r>>m;
//r=r*60;
//m=m*60;
//if(r>m){
//cout<<"NO"<<"\n";
//return;
//}
//long long int reSec = r-x;
//long long int avSec = m-x;
//long long int maxSec = avSec/2;
//if(maxSec >= reSec){
//cout<<"YES"<<"\n";
//return;
//}
//cout<<"NO"<<"\n";
//}
//
//int main(){
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
//int t;
//cin>>t;
//while(t>0){
//solve();
//t--;
//}
//
//}

//Make the sum even
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       long long int N;
//        cin>>N;
//        int arr[N];
//       long long int sum = 0;
//        bool flag =false;
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            sum+=arr[i];
//            }
//            if(sum%2 == 0){
//                cout<<0<<endl;
//                continue;
//                }
//                else{
//                for(int i=0;i<N;i++){
//                    if(arr[i] == 2){
//                        flag = true;
//                        break;
//                        }
//                    }
//                    if(flag == true) cout<<1<<endl;
//                    else cout<<-1<<endl;
//                }
//        
//        }
//        return 0;
//    }

//Lunchtime
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//       long long int arr[N];
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            }
//            int arr1[N] = {0};
//            for(int i=0;i<N;i++){
//                for(int j=i+1;j<N;j++){
//                    if(arr[j]>arr[i]) break;
//                    if(arr[i] == arr[j]){
//                        arr1[i]++;
//                        arr1[j]++;
//                        }
//                    }
//                }
//                for(int i=0;i<N;i++){
//                    cout<<arr1[i]<<" ";
//                    }
//        }
//        return 0;
//    }

//College 5
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N,M;
//        cin>>N>>M;
//        vector<pair<int,int>> event;
//        while(N--){
//           long long int f;
//            cin>>f;
//        event.push_back({f,0});
//            }
//            while(M--){
//               long long int c;
//                cin>>c;
//                event.push_back({c,1});
//                }
//                sort(event.begin(),event.end());
//                int ans=0,curr=0;
//                for(auto a:event){
//                    if(a.second!=curr){
//                        ans++;
//                        curr = 1-curr;
//                        }
//                    }
//                    cout<<ans<<endl;
//        }
//        return 0;
//    }

//Cutting Recipes
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i=0;i<n;i++){
//            cin>>arr[i];
//            }
//            bool flag = true;
//             int gcd_all;
//            int gcd_f = __gcd(arr[0],arr[1]);
//            if(n == 2){
//                cout<<arr[0]/gcd_f<<" "<<arr[1]/gcd_f;
//                }
//                else{
//                    for(int i=2;i<n;i++){
//                        gcd_all = __gcd(arr[i],gcd_f);
//                        }
//                        for(int i=0;i<n;i++){
//                            cout<<arr[i]/gcd_all<<" ";
//                            }
//                    }
//                    cout<<endl;
//        }
//        return 0;
//    }

//Decreasing string
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int k;
//        cin>>k;
//        char arr[k+1];
//        for(int i=0;i<k+1;i++){
//            char alpha = i+'a';
//            arr[i] = alpha;
//            }
//            for(int i=k;i>=0;i--){
//                cout<<arr[i];
//                }
//                cout<<endl;
//        }
//        return 0;
//    }

//Decreasing string
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int k;
//        cin>>k;
//        char arr[104];
//        for(int i=0;i<26;i++){
//            char alpha = i+'a';
//            arr[i] = alpha;
//            }
//            if(k<=25){
//                for(int i=k;i>=0;i--){
//                    cout<<arr[i];
//                    }
//                    cout<<endl;
//                }
//                else if(k>25){
//                    while(k!=0){
//                        if(k<=25){
//                            for(int i=k;i>=0;i--){
//                                k=0;
//                                cout<<arr[i];
//                                }
//                            }
//                            else{
//                                for(int i=25;i>=0;i--){
//                                    k--;
//                                    cout<<arr[i];
//                                    }
//                                }
//                        }
//                        cout<<endl;
//                    }
//                    else{
//                        k = k;
//                        }
//        }
//        return 0;
//    }

//int main()
//{
//    long long int t;
//    cin>>t;
//    while(t--)
//    {
//        long long int k,i,num = 0;
//        cin>>k;
//        string str =  "zyxwvutsrqponmlkjihgfedcba";
//        num = k/25;
//        k = k%25;
//        if(k!=0)
//        {
//        for(i = 25-k;i<26;i++)
//        {
//            cout<<str[i];
//        }
//        }
//         while(num--)
//         {
//             cout<<str;
//         }
//        cout<<endl;
//    }
//    return 0;
//        
//}

//Decreasing string
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int k;
//        cin>>k;
//        char arr[104];
//        for(int i=0;i<26;i++){
//            char alpha = i+'a';
//            arr[i] = alpha;
//            }
//        if(k<=25){
//            for(int i=k;i>=0;i--){
//                cout<<arr[i];
//                }
//                cout<<endl;
//            }
//            else{
//                int rem = k%25;
//                int d = k/25;
//                if(rem!=0){
//                    for(int i=rem;i>=0;i--){
//                        cout<<arr[i];
//                        }
//                    }
//                    while(d--){
//                        for(int i=25;i>=0;i--){
//                            cout<<arr[i];
//                            }
//                        }
//                        cout<<endl;
//                }
//        }
//        return 0;
//    }

//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i=0;i<n;i++){
//           cin>>arr[i];
//            }
//            bool flag = true;
//             int gcd_all;
//           int gcd = __gcd(arr[0],arr[1]);
//            if(n == 2){
//                cout<<arr[0]/gcd<<" "<<arr[1]/gcd;
//                }
//                else{
//                    for(int i=2;i<n;i++){
//                        gcd = __gcd(arr[i],gcd);
//                        }
//                        for(int i=0;i<n;i++){
//                            cout<<arr[i]/gcd_all<<" ";
//                            }
//                    }
//                    cout<<endl;
//        }
//       return 0;
// }

//Cutting Recipes
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n];
//        int arr1[n];
//        for(int i=0;i<n;i++){
//            cin>>arr[i];
//            arr1[i] = arr[i];
//            }
//            sort(arr1,arr1+n);
//            bool flag = true;
//            int gcd_f = __gcd(arr1[0],arr1[1]);
//            if(n == 2){
//                cout<<arr[0]/gcd_f<<" "<<arr[1]/gcd_f;
//                }
//                else{
//                    for(int i=2;i<n;i++){
//                        int gcd_all = __gcd(arr1[i],gcd_f);
//                        if(gcd_all!=gcd_f){
//                            flag = false;
//                            break;
//                            }
//                        }
//                        int divide;
//                        if(flag == true) divide = gcd_f;
//                        else divide = 1;
//                        for(int i=0;i<n;i++){
//                            cout<<arr[i]/divide<<" ";
//                            }
//                    }
//                    cout<<endl;
//        }
//        return 0;
//    }

//Walk on the axis
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//        int ans = N+(N*(N+1))/2;
//        cout<<ans<<endl;
//        }
//        return 0;
//    }
//    
//Suraj goes Shopping
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//        int arr[N];
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            }
//       sort(arr,arr+N,greater<int>());
//       if(N == 1){
//           cout<<arr[0]<<endl;
//           continue;
//           }
//      else if(N<=4){
//           int sum = arr[0]+arr[1];
//           cout<<sum<<endl;
//           continue;
//           }
//           else{
//              long long int cost = 0;
//               int i=0;
//               while(N>4){
//                   int small_cost = arr[i]+arr[i+1];
//                   cost+=small_cost;
//                   N=N-4;
//                   i = i+4;
//                   }
//                   if(N == 1) cost+=arr[i];
//                   else{
//                       int small_cost = arr[i]+arr[i+1];
//                       cost+=small_cost;
//                       }
//                       cout<<cost<<endl;
//               }
//        }
//        return 0;
//    }

//Lucky LONG
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//        int count = 0;
//        while(N!=0){
//            int last_digii = N%10;
//            N = N/10;
//            if(last_digii != 7 && last_digii != 4){
//                count++;
//                }
//            }
//            cout<<count<<endl;
//        }
//        return 0;
//    }

//Walk
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//       long long int arr[N];
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            }
//            if(N == 1){
//                cout<<arr[0]<<endl;
//                continue;
//                }
//            long long int max_count = arr[0];
//            long long int count = arr[0];
//            for(int i=0;i<N;i++){
//                if(count>=arr[i]){
//                    count--;
//                    }
//                    else{
//                        max_count += arr[i]-count;
//                        count = arr[i]-1;
//                        }
//                }
//                cout<<max_count<<endl;
//        }
//        return 0;
//    }

//Open the Dragon Scroll
//int main(){
//int t;
//cin>>t;
//while(t--){
//int N,A,B;
//cin>>N>>A>>B;
//int big,small;
//if(A>=B){
//big = A;
//small = B;
//}
//else{
//big = B;
//small = A;
//}
//int one = 1;
//int new_one = one<<N;
//while(big&new_one!=1){
//big = big<<1;
//}
//while(small&one!=1){
//small = small>>1;
//}
//cout<<(big^small)<<endl;
//}
//return 0;
//}

//Open the dragon scroll
//int main(){
//int t;
//cin>>t;
//while(t--){
//int N,A,B;
//cin>>N>>A>>B;
//int big,small;
//if(A>=B){
//big = A;
//small = B;
//}
//else{
//big = B;
//small = A;
//}
//int count_big = 0,count_small = 0;
//while(big!=0){
//if(big&1 == 1) count_big++;
//big = big>>1;
//}
//while(small!=0){
//if(small&1 == 1) count_small++;
//small = small>>1;
//}
//int all_one = 0,shuffled_A;
//while(count_big--){
//all_one+=pow(10,count_big-1);
//}
//shuffled_A = all_one*pow(10,(N-count_big));
//int shuffled_B;
//while(count_small--){
//shuffled_B+=pow(10,count_small-1);
//}
//cout<<(shuffled_A^shuffled_B)<<endl;
//}
//return 0;
//}

//int main(){
//int t;
//cin>>t;
//while(t--){
//int N,A,B;
//cin>>N>>A>>B;
//int big,small;
//if(A>=B){
//big = A;
//small = B;
//}
//else{
//big = B;
//small = A;
//}
//int count_big = 0,count_small = 0;
//while(big!=0){
//if(big&1 == 1) count_big++;
//big = big>>1;
//}
//while(small!=0){
//if(small&1 == 1) count_small++;
//small = small>>1;
//}
//int total_bits = N;
//int shuffled_A;
//int shuffled_B;
//while(count_big!=0){
//    int shift_big = 1<<total_bits;
//    shuffled_A=shuffled_A | shift_big;
//    total_bits--;
//    count_big--;
//    }
//    while(count_small!=0){
//    int shift_small = 1<<count_small;
//    shuffled_B=shuffled_B | shift_small;
//    count_small--;
//    }
//    cout<<(shuffled_A^shuffled_B)<<endl;
//}
//return 0;
//}
//
//int main(){
//    int n=10;
//    while(n--){
//        cout<<n<<" ";
//        }
//        return 0;
//    }
    
//    int main(){
//        int n=10;
//        int sum = 0;
//        while(n--){
//            sum+=N;
//            }
//            cout<<sum<<endl;
//            return 0;
//        }
        
//        int main(){
//            int n;
//            cin>>n;
//            int sum = 0;
//            while(n--){
//                cout<<n<<" ";
//                sum+=n;
//                }
//                cout<<"sum till "<<n<<" is "<<sum<<endl;
//                return 0;
//            }
            
//            int main(){
//                int n;
//                cin>>n;
//                int arr[n];
//                int sum = 0;
//                for(int i=0;i<n;i++){
//                    cin>>arr[i];
//                    sum+=arr[i];
//                    }
//                    int avg = sum/n;
//                    cout<<"sum is "<<sum<<endl;
//                    cout<<"average is "<<average<<endl;
//                    return 0;
//                }

//int cubes(int n){
//    if(n==0) return 1;
//    return n*cubes(n-1);
//    }
//int main(){
//    int n;
//    cin>>n;
//    while(n--){
//        int cube = cubes(n);
//        cout<<"cube of "<<n<<"is "<<cube<<endl;
//        }
//        return 0;
//    }

//Long Day challenge
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        float k1,k2,k3,v;
//        cin>>k1>>k2>>k3>>v;
//        float speed_comp = k1*k2*k3*v;
//        float time = 100/speed_comp;
//        float rounded_time =floor((time*100)+.5)/100;
//        //cout<<rounded_time<<endl;
//        if(rounded_time<(9.57)) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Valid pair
//int main(){
//        int A,B,C;
//        cin>>A>>B>>C;
//        int count = 0;
//        if(A == B) count++;
//        if(B == C) count++;
//        if(A == C) count++;
//        if(count>=1) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        return 0;
//    }

//Strong Language
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N,K;
//        cin>>N>>K;
//        string s;
//        cin>>s;
//        if(N<K){
//         cout<<"NO";
//         continue;
//        }
//        int count=0,max_count=0;
//        for(int i=0;i<N;i++){
//            if(s[i] == '*'){
//                count++;
//                max_count = max(count,max_count);
//                }
//                else{
//                    count = 0;
//                    }
//            }
//            if(max_count>=K) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Chef and Dice
//int main(){
//int t;
//cin>>t;
//while(t--){
//long long int N;
//cin>>N;
//long int each = N/4;
//int rem = N%4;
//long long int upper_side_pips=0,upper_upper_pips=0,upper_level_pips = 0,lower_level_pips = 0;
//if(each>=1){
//upper_upper_pips = 14;
//lower_level_pips = each*(44);
//}
//else{
//lower_level_pips = 0;
//if(rem==1){
//upper_upper_pips = 2;
//}
//else if(rem == 2){
//    upper_upper_pips = 6;
//    }
//    else if(rem == 3){
//        upper_upper_pips = 10;
//        }
//}
//if(rem==3){
//upper_side_pips = 41;
//}
//else if(rem==2){
//upper_side_pips = 30;
//}
//else if(rem==1){
//upper_side_pips = 18;
//}
//else{
//upper_side_pips = upper_side_pips;
//}
//long long int max_number_of_pips = upper_side_pips+upper_upper_pips+upper_level_pips+lower_level_pips;
//cout<<max_number_of_pips<<endl;
//}
//return 0;
//}

//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N,C,Q;
//        cin>>N>>C>>Q;
//        while(Q--){
//            int L,R;
//            cin>>L>>R;
//            if(C<L || C>R) continue;
//            else{
//                while(L!=C && R!=C){
//                    L++;
//                    R--;
//                    }
//                    if(L==C) C=R;
//                    else C=L;
//                }
//            }
//            cout<<C<<endl;
//        }
//        return 0;
//    }

//int main(){
//    int n,m;
//    cin>>n>>m;
//    while(m--){
//        int q;
//        cin>>q;
//        int count = 0;
//        if(q<=n+1){ 
//            cout<<0<<endl;
//            continue;
//        }
//        else if(q<=2*n){
//            int a = q-1;
//            int b = 2;
//            count++;
//            while(b!=(n+1) && a!=n){
//                b++;
//                a--;
//                count++;
//                }
//            }
//            else{
//                int a = 2*n;
//                int b = 2*n-q;
//                //if(b>=1 && b<=n) count++;
//                while(b!=(n+1) && a!=n){
//                    b++;
//                    a--;
//                    count++;
//                    }
//                }
//                cout<<count<<endl;
//        }
//        return 0;
//    }

//Sum Queries
//int main(){
//long long int N,M;
//cin>>N>>M;
//while(M--){
//long long int q;
//cin>>q;
//if(q<=N+1 || q>3*N){
//cout<<0<<endl;
//continue;
//}
//if(q>2*N){
//long long int count = 0;
//long long int a = q-(2*N+1);
//long long int b = 2*N;
//long long int left = N-a;
//long long int right = b-N;
//
//count = min(left,right);
//cout<<count<<endl;
//}
//else{
//long long int a = q-1;
//if(a>=(N+1)){
//long long int left = N-1;
//long long int right = (q-1)-N;
//long long int count = min(left,right);
//cout<<count<<endl;
//}
//}
//}
//return 0;
//}

//Chef and Subarray
//int main(){
//    int N;
//    cin>>N;
//    int arr[N];
//    int count = 0;
//    int max_count = 0;
//    for(int i=0;i<N;i++){
//        cin>>arr[i];
//        if(arr[i]!=0){
//            count++;
//            max_count = max(count,max_count);
//            }
//            else{
//                count = 0;
//                }
//        }
//        cout<<max_count<<endl;
//        return 0;
//    }

//Subarray gcd
//int main(){
//int t;
//cin>>t;
//while(t--){
//int N;
//cin>>N;
//int arr[N];
//cin>>arr[0];
//int count = 0,max_count=0;
//for(int i=1;i<N;i++){
//    cin>>arr[i];
//    int GCD = __gcd(arr[i],arr[i-1]);
//    if(GCD == 1){
//        count++;
//        max_count = max(max_count,count);
//        }
//        else{
//            count = 0;
//            }
//    }
//    if(count==0) cout<<-1<<endl;
//    else cout<<count+1<<endl;
//}
//return 0;
//}

//Little Chef and Sums
//int main(){
//int t;
//cin>>t;
//while(t--){
//int N;
//cin>>N; 
//int arr[N+1]={0};
//int sum[N+1];
//int sume = 0;
//for(int i=1;i<=N;i++){
//    cin>>arr[i];
//    sume+=arr[i];
//    sum[i]=sume;
//    }
//    int prev_sum = INT_MAX,ptr=1;
//    for(int i=1;i<=N;i++){
//        int s = N-i+1;
//        int sum_s = sum[N]-sum[s-1];
//        int total_sum = sum[i]+sum_s;
//        if(total_sum<prev_sum){
//            prev_sum = total_sum;
//            ptr=i;
//            }
//        }
// cout<<ptr<<endl;       
//}
//return 0;
//}

//Little Chef and sums
//int suffixSum(long long int sum[ ],int i,int N){
//long long int sum_s;
//int indii = N-i+1;
//sum_s = sum[N]-sum[indii-1];
//return sum_s;
//}
//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//        int arr[N+1]={0};
//       long long int sum[N+1]={0};
//        long long int sume = 0;
//        for(int i=1;i<=N;i++){
//            cin>>arr[i];
//            sume+=arr[i];
//            sum[i]=sume;
//            }
//           long long int smallest = sum[1]+sum[N];
//            int ptr=1;
//            if(n==1){
//                cout<<1<<endl;
//                continue;
//                }
//                else{
//            for(int i=2;i<=N;i++){
//               long long int pres = sum[i]+suffixSum(sum,i,N);
//                if(pres<smallest){
//                    ptr=i;
//                    smallest = pres;
//                    }
//                }
//            cout<<ptr<<endl;
//        }
//    }
//        return 0;
//    }


//Chef and Dice
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       long long int N;
//        cin>>N;
//       long long int inner_levels=0,rem=0,upper_level=0,pips_below_upper=0;
//        if(N<=4){
//            if(N==1) rem=20;
//            else if(N==2) rem=36;
//            else if(N==3) rem=51;
//            else rem=60;
//            }
//            else{
//                inner_levels=N/4;
//                upper_level=N%4;
//                pips_below_upper=inner_levels*44;
//                if(upper_level==1) rem=32;
//                else if(upper_level==2) rem=44;
//                else if(upper_level==3) rem=55;
//                else rem=16;
//                }
//                cout<<(rem+pips_below_upper)<<endl;
//        }
//        return 0;
//    }
//void zigZagMatrix(vector<vector<int>> matrix, int n, int m)
//{
//    int row = 0, col = 0;
//    bool row_inc = 0;
//    int mn = min(m, n);
//    for (int len = 1; len <= mn; ++len) {
//        for (int i = 0; i < len; ++i) {
//            cout << matrix[row][col] << " ";
//  
//            if (i + 1 == len)
//                break;
//            if (row_inc)
//                ++row, --col;
//            else
//                --row, ++col;
//        }
//  
//        if (len == mn)
//            break;
//        if (row_inc)
//            ++row, row_inc = false;
//        else
//            ++col, row_inc = true;
//    }
//  
//    if (row == 0) {
//        if (col == m - 1)
//            ++row;
//        else
//            ++col;
//        row_inc = 1;
//    }
//    else {
//        if (row == n - 1)
//            ++col;
//        else
//            ++row;
//        row_inc = 0;
//    }
//    int MAX = max(m, n) - 1;
//    for (int len, diag = MAX; diag > 0; --diag) {
//  
//        if (diag > mn)
//            len = mn;
//        else
//            len = diag;
//  
//        for (int i = 0; i < len; ++i) {
//            cout << matrix[row][col] << " ";
//  
//            if (i + 1 == len)
//                break;
//  
//            if (row_inc)
//                ++row, --col;
//            else
//                ++col, --row;
//        }
//  
//        if (row == 0 || col == m - 1) {
//            if (col == m - 1)
//                ++row;
//            else
//                ++col;
//  
//            row_inc = true;
//        }
//  
//        else if (col == 0 || row == n - 1) {
//            if (row == n - 1)
//                ++col;
//            else
//                ++row;
//  
//            row_inc = false;
//        }
//    }
//}
//int main(){
//    int n;
//    cin>>n;
//    vector<vector<int>> matrix
//    {
//        {1,2,3},
//        {4,5,6},
//        {7,8,9}
//        };
//
//    zigZagMatrix(matrix,3,3);
//    
//    return 0;
//    }

//Little chefs and sums
//int suffix(int i,long long int sum[ ],int N){
//    int temp = N-i+1;
//    int sufi;
//    if(temp == N){
//    sufi = sum[N];
//    }
//    else{
//        sufi = sum[N]-sum[temp-1];
//        }
//        return sufi;
//    }
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//        int arr[N+1]={0};
//       long long int sum[N+1]={0};
//      unsigned long long int sume = 0,ptr=1;
//        for(int i=1;i<=N;i++){
//            cin>>arr[i];
//            sume+=arr[i];
//            sum[i]=sume;
//            }
//            int smallest=INT_MAX;
//            int ptir=1;
//            for(int i=1;i<=N;i++){
//            int present_sum = sum[i]+suffix(i,sum,N);
//            if(smallest>present_sum){
//                ptir=i;
//                smallest=present_sum;
//                }
//            }
//            cout<<ptir<<endl;
//        }
//        return 0;
//    }

//int main(){
//    int n;
//    cin>>n;
//    int sum = 0;
//    while(n--){
//     sum+=n;
//        }
//        cout<<sum<<endl;
//        return 0;
//    }

//Farmer Feb
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//   int x,y,sum;
//   cin>>x>>y;
//   sum = x+y;
//   bool flag = true;
//   for(int i=1;i<=100;i++){
//       for(int j=2;j<sum+i;j++){
//           if((sum+i)%j == 0){
//               flag = false;
//               break;
//               }
//           }
//           if(flag == true){
//               sum = sum+i;
//               break;
//               }
//               else flag = true;
//       }
//      cout<<sum-(x+y)<<endl; 
//  }
//  return 0;
//    }

//Farmer Feb
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x,y,sum;
//        cin>>x>>y;
//        sum = x+y;
//        bool flag = true;
//        if(sum%2 == 0) sum = sum+1;
//          for(int j=2;j<sum;j++){
//                if(sum%j == 0){
//                    flag = false;
//                    break;
//                    }
//                }
//                if(flag == true){
//                    cout<<1<<endl;
//                    continue;
//                    }
//                    else flag = true;
//        for(int i=2;i<100;i=i+2){
//            for(int j=2;j<(sum+i);j++){
//                if((sum+i)%j == 0){
//                    flag = false;
//                    break;
//                    }
//                }
//                if(flag == true){
//                    sum = sum+i;
//                    break;
//                    }
//                else flag = true;
//            }
//            cout<<sum-(x+y)<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N,even=0,odd=0,clocks=0;
//        cin>>N;
//        int room;
//        for(int i=1;i<N;i++){
//            for(int j=1;j<N;j++){
//               room = i+j;
//               while(room!=0){
//           int rem = room%10;
//           if(rem%2 == 0){
//              even+=rem; 
//               }
//               else{
//                   odd+=rem;
//                   }
//               room = room/10;
//                }
//                clocks = clocks+abs(even-odd);
//                even = 0,odd = 0;
//            }
//            }
//            cout<<clocks<<endl;
//        }
//        return 0;
//    }

//2-D vector
//int n,m,k;
//int matrix(vector<vector<int>> arr,int i,int j,int count,int sum);
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    cin>>n>>m>>k;
//    vector<vector<int>> arr(n, vector<int> (m,0));
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//            }
//        }
//        int count = 0;
//        int sum = 0;
//       int ans = matrix(arr,0,0,count,sum);
//       cout<<count<<endl;
//    } 
//        return 0;
//    }
//    
//    int matrix(vector<vector<int>> arr,int i,int j,int count,int sum){
//        if(i==n || j==m) return 0;
//        for(int a=0;a<=i;a++){
//            for(int b=0;b<=j;b++){
//                sum+=arr[a][b];
//                }
//            }
//            if(sum>=k) count++;
//            matrix(arr,i++,j++,count,sum);
//            return count;
//        }
//        
//Worthy matrix
//int n,m,k;
//int matrix( vector<vector<int>> arr , int i , int j , int min_i , int min_j , int indii_i , int indii_j );        
//int main(){
//int t;
//cin>>t;
//while(t--){
//    int i=1,j=1,min_i=0,min_j=0,indii_i=1,indii_j=1;
//cin>>n>>m>>k;
//vector<vector<int>> arr(n, vector<int> (m,0));
//for(int i=0;i<n;i++){
//for(int j=0;j<m;j++){
//cin>>arr[i][j];
//}
//}
//int ans = matrix(arr,i,j,min_i,min_j,indii_i,indii_j);
//cout<<ans<<endl;   
//}
//return 0;
//}
//
//int matrix( vector<vector<int>> arr , int i , int j , int min_i , int min_j , int indii_i , int indii_j ){
//static int count=0;
//int sum = 0;
//if(i==n || j==m) return 0;
//if(indii_i == n || indii_j == m) return 0;
//for(int a=min_i;a<=indii_i;a++){
//for(int b=min_j;b<=indii_j;b++){
//sum+=arr[a][b];
//}
//}
//if(sum>=k) count++;
//sum = 0;
//
//matrix(arr,i,j,min_i,min_j++,indii_i,indii_j++);
//matrix(arr,i,j,min_i++,min_j,indii_i++,indii_j);
//matrix(arr,i++,j++,min_i=0,min_j=0,indii_i=i,indii_j=j);
//
//return count;
//}

//Little chef and sums
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N;
//        cin>>N;
//        int arr[N];
//        int mini=1000000;
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            mini = min(mini,arr[i]);
//            }
//            int a=0;
//            for(;a<N;a++){
//                if(arr[a] == mini) break;
//                }
//                cout<<(a+1)<<endl;
//        }
//        return 0;
//    }

//Little chef and sums int64_t
//int suffix(int stn[ ],int i,int N){
//int ret;
//if(i==1){
//ret = stn[N];
//}
//else{
//int indii = N-i+1;
//ret = stn[i]-stn[N-indii]; 
//}
//return ret;    
//    }
    
//int main(){
//int t;
//cin>>t;
//while(t--){
//int N,ptr=1;
//cin>>N;
//int arr[N+1];
//int stn[N+1];
//int sum = 0;
//for(int i=1;i<=N;i++){
//cin>>arr[i];
//sum+=arr[i];
//stn[i] = sum;
//}
//int prev = stn[1]+stn[1];
//for(int i=1;i<=N;i++){
//int pre = stn[i]+suffix(stn,i,N);
//if(pre<prev){
//    prev = pre;
//    ptr = i; 
//    }    
//    }
//    cout<<ptr<<endl;
//}
//return 0;
//}

//Stone
//int main(){
//long long int N,k;
//cin>>N>>k;
//long long int arr[N];
//long long int maxi = 0;
//for(int i=0;i<N;i++){
//cin>>arr[i];
//maxi = max(maxi,arr[i]);
//}
//while(k--){
//for(int i=0;i<N;i++){
//arr[i] = arr[i]-maxi;
//maxi = max(maxi,arr[i]);
//}
//}
//for(int i=0;i<N;i++){
//cout<<abs(arr[i])<<" ";
//}
//cout<<endl;
//
//return 0; 
//}

//Stone Approach
//int main(){
//    int N,K;
//    cin>>N>>K;
//    int arr[N];
//    for(int i=0;i<N;i++){
//        cin>>arr[i];
//        }
//        int max = *max_element(arr,arr+N);
//        for(int i = 0;i<N;i++){
//            cout<<abs(arr[i]-max)<<" ";
//            }
//            
//            cout<<endl;
//            return 0;
//    }

//Stone 3 Approach
//int main(){
//    long long int N,K;
//    cin>>N>>K;
//    long long int arr[N];
//    for(int i = 0;i<N;i++){
//        cin>>arr[i];
//        }
//         long long int max = *max_element(arr,arr+N);
//        long long int min = *min_element(arr,arr+N);
//        if(K==0){
//            for(int i=0;i<N;i++) {
//                cout<<arr[i]<<" ";
//            }
//            cout<<endl;
//            }
//        else if(K%2 == 0){
//            for(int i = 0;i<N;i++){
//                cout<<arr[i]-min<<" ";
//                }
//                cout<<endl;
//            }
//            else if(K%2!=0){
//                for(int i=0;i<N;i++){
//                    cout<<max-arr[i]<<" ";
//                    }
//                    cout<<endl;
//                }
//                return 0;
//    }

//int main() {
//    long long int a,b;
//    cin>>a>>b;
//    long long int arr[a];
//    cin>>arr[0];
//    long long int max=arr[0],min=arr[0];
//    for(int i=1;i<a;i++)
//    {
//        cin>>arr[i];
//       if(arr[i]>max)
//       max=arr[i];
//       if(arr[i]<min)
//       min=arr[i];
//    }
//    if(b==0)
//    {
//        for(int i=0;i<a;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//    }
//
//    else if(b%2==0)
//    {
//        for(int i=0;i<a;i++)
//        {
//            cout<<arr[i]-min<<" ";
//        }
//        cout<<endl;
//    }
//    else if(b%2!=0)
//    {
//        for(int i=0;i<a;i++)
//        {
//            cout<<max-arr[i]<<" ";
//        }
//        cout<<endl;
//    }
//	// your code goes here
//	return 0;
//}

//Fit to Play
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N,ptr=0;
//        cin>>N;
//        int arr[N];
//        vector<int> ans;
//        bool flag = false;
//        for(int i = 0 ; i < N ; i++ ){
//            cin>>arr[i];
//            }
//           for(int i=0;i<N;i++){
//               for(int j = i+1;j<N;j++){
//                   if(arr[j]>arr[i]) {
//                       ans.push_back(arr[j]-arr[i]);
//                       ptr++;
//                       flag = true;
//                   }
//                   }
//               }
//               if(flag == false) cout<<"UNFIT"<<endl;
//               else{
//                   sort(ans.begin(),ans.end());
//                  cout<<ans[ptr-1]<<endl;
//                   }
//        }
//        return 0;
//    }

//Fit to play -- Another Approach
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n];
//        cin>>arr[0];
//        int mini = arr[0],maxi = arr[0];
//        int ptr1=0,ptr2=0,diff1=0,diff2=0;
//        for(int i = 1;i<n;i++){
//            cin>>arr[i];
//            if(arr[i]<mini){
//                mini = arr[i];
//                ptr1 = i;
//                }
//                if(arr[i]>maxi){
//                    maxi = arr[i];
//                    ptr2 = i;
//                    }
//            }
//            for(int i = ptr1;i<n;i++){
//                if( arr[i] > mini && i > ptr1 ){
//                    int diff1_new=arr[i]-mini;
//                    if(diff1_new>diff1){
//                        diff1 = diff1_new;;
//                        }
//                    }
//                }
//                for(int i=0;i<ptr2;i++){
//                    if(arr[i] < maxi && i < ptr2){
//                        int diff2_new = maxi-arr[i];
//                        if(diff2_new>diff2){
//                            diff2 = diff2_new;
//                            }
//                        }
//                    }
//                if(diff1 == 0 && diff2 == 0) cout<<"UNFIT"<<endl;
//                else{
//                    if(diff1>diff2) cout<<diff1<<endl;
//                    else cout<<diff2<<endl;
//                    }
//        }
//        return 0;
//    }

//Andrew and the Meatballs
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       long long int N,M,ptr=0;
//        cin>>N>>M;
//        long long int arr[N];
//        for(int i=0;i<N;i++){
//            cin>>arr[i];
//            }
//            sort(arr,arr+N);
//            for(int i=N-1;i>=0;i--){
//                if(M<=0) break;
//                M=M-arr[i];
//                ptr++;
//                }
//                if(M<=0){
//                cout<<ptr<<endl;
//                }
//                else{
//                    cout<<-1<<endl;
//                    }
//        }
//        return 0;
//    }

//Closing the Tweets
//int click(int arr[ ],int n,int open){
//    if(arr[n] == 0){
//        arr[n] = 1;
//        open++;
//        }
//    else{
//        arr[n] = 0;
//        open--;
//        }
//    return open;
//    }
//    int closeAll(int arr[ ],int N,int open){
//        for(int i = 0;i<N;i++){
//            arr[i] = 0;
//            }
//            open = 0;
//            return open;
//        }
//int main(){
//    int N,K,open=0;
//    cin>>N>>K;
//    int arr[N]={0};
//    while(K--){
//        string s;
//        cin>>s;
//        if(s == "CLICK"){
//            int n;
//            cin>>n;
//           open = click(arr,n-1,open);
//           cout<<open<<endl;
//            }
//            else{
//                open = closeAll(arr,N,open);
//                cout<<open<<endl;
//                }
//        }
//            return 0;
//    }


// If we want to check that number is even or not
//int main(){
//    int a;
//    cin>>a;
//    if((a&1) == 0) cout<<"Even"<<endl;
//    else cout<<"ODD"<<endl;
//    
//    return 0;
//    }

//If we want to divide any number by 2
//int main(){
//    int a;
//    cin>>a;
//    a = a>>1;
//    cout<<a<<endl;
//    
//    return 0;
//    }

//If we want to multiply any number by 2
//int main(){
//    int a;
//    cin>>a;
//    a = a<<1;
//    cout<<a<<endl;
//    return 0;
//    }

//we can avoid using multiply, divide and modulus operations instead if we can use Bit operations we shud use  them beacause bit operations
//work on bits , hence causing less time complexity.

//How to calculate a power b when it will be out of range of int and long
//int main(){
//    int a,b,res=1,n=1000000007;
//    cin>>a>>b;
//    while( b > 0 ){
//        if((b & 1) != 0) res = (res * a % n) % n;
//        a = (a % n * a % n) % n;
//        b = b >> 1;
//        }
//        cout<<res<<endl;
//    }

//Save Water Save Life
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int h,x,y,c;
//        cin>>h>>x>>y>>c;
//        int water_per = x+(y/2);
//        int required = water_per*h;
//        if(required > c) cout<<"NO"<<endl;
//        else cout<<"YES"<<endl;
//        }
//        return 0;
//    }

//Valentine Couple
//int main(){
//int t;
//cin>>t;
//while(t--){
//int n,maximum;
//long long int max_girl=0,max_boy=0;
//cin>>n;
//long long int boys[n];
//long long int girls[n];
//for(int i=0;i<n;i++){
//cin>>boys[i];
//max_boy = max(max_boy,boys[i]);
//}
//for(int i=0;i<n;i++){
//cin>>girls[i];
//max_girl = max(max_girl,girls[i]);
//}
//if(max_girl>max_boy){
//sort(girls,girls+n);
//sort(boys,boys+n);
//for(int i = 0;i<n;i++){
//if(girls[n-1]+boys[i]>=girls[n-2]+boys[n-1]) {
//maximum=girls[n-1]+boys[i];
//break;
//}
//}
//}
//else{
//sort(boys,boys+n);
//sort(girls,girls+n);
//for(int i = 0;i<n;i++){
//if(boys[n-1]+girls[i]>=boys[n-2]+girls[n-1]){
//maximum=boys[n-1]+girls[i];
//break;
//}
//}
//}
//cout<<maximum<<endl;
//}
//return 0;
//}

//Valentine Couple
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int boys[n];
//        int girls[n];
//        for(int i=0;i<n;i++) cin>>boys[i];
//        for(int i=0;i<n;i++) cin>>girls[i];
//        sort(boys,boys+n);
//        sort(girls,girls+n);
//        cout<<(boys[n-1]+girls[n-1])<<endl;
//        }
//        return 0;
//    }

//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int A1,B1,C1,T1,A,B,C;
//        cin>>A1>>B1>>C1>>T1>>A>>B>>C;
//        if(A>=A1 && B>=B1 && C>=C1){
//            if((A+B+C)>=T1) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//            }
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Bodybuilder
//int main(){
//int t;
//cin>>t;
//while(t--){
//int n,r,maxi=0,curr;
//cin>>n>>r;
//long int minutes[n];
//int tension[n];
//for(int i=0;i<n;i++){
//cin>>minutes[i];
//}
//for(int i=0;i<n;i++){
//cin>>tension[i];
//}
//if(n == 1) cout<<tension[0]<<endl;
//else{
//int prev_t = tension[0];
//maxi = prev_t;
//long int prev_m = minutes[0];
//for(int i=1;i<n;i++){
//long int tbs = (minutes[i]-prev_m)*r;
//if(prev_t>tbs) prev_t = prev_t-tbs;
//else prev_t = 0;
//curr = tension[i]+prev_t;
//prev_t = curr;
//maxi = max(maxi,curr);
//prev_m = minutes[i];
//}
//cout<<maxi<<endl;
//}
//}
//return 0;
//}

//Chocolate Monger
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,x,count=0,j=0;
//        cin>>n>>x;
//        long int choco[n];
//        for(int i=0;i<n;i++){
//            cin>>choco[i];
//            }
//            if(n == 1) cout<<0<<endl;
//            else if(n == 2){
//                if(choco[0]!=choco[1]){
//                    int left = n-x;
//                    if(left>=count) cout<<count<<endl;
//                    else cout<<left<<endl;
//                    }
//                }
//                else{
//            sort(choco,choco+n);
//            for(;j<n-1;j++){
//                if(choco[j]!=choco[j+1]) count++;
//                }
//                if(choco[j]!=choco[j-1]) count++;
//                
//                int left = n-x;
//                if(left>=count) cout<<count<<endl;
//                else cout<<left<<endl;
//                }
//        }
//        return 0;
//    }

//chocolate moggler
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,x,count=1;
//        cin>>n>>x;
//        long int choco[n+1] = {0};
//        for(int i=0;i<n;i++) cin>>choco[i];
//        int left = n-x;
//        if(left == 0) cout<<0<<endl;
//        else{
//            sort(choco,choco+n);
//            for(int i=0;i<n;i++){
//                if(choco[i]!=choco[i+1]) count++;
//                }
//                count=count-1;
//                if(count<=left) cout<<count<<endl;
//                else cout<<left<<endl;
//            }
//        }
//        return 0;
//    }

//int main(){
//int t;
//cin>>t;
//while(t--){
//long long int n,r,prev=0,maxi=0;
//cin>>n>>r;
//long long int minutes[n];
//int tension[n];
//for(int i=0;i<n;i++){
//cin>>minutes[i];
//int curr = minutes[i];
//minutes[i] = minutes[i]-prev;
//prev = curr;
//}
//cin>>tension[0];
//int curr_t = tension[0];
//for(int i=1;i<n;i++){
//cin>>tension[i];
//long long int decrease = minutes[i]*r;
//if(curr_t>decrease){
//tension[i] = tension[i]+(curr_t-decrease);
//curr_t = curr_t-decrease;
//}
//else curr_t = tension[i];
//}
////                for(int i=0;i<n;i++){
////                    maxi = max(maxi,tension[i]);
////                    }
////                    cout<<maxi<<endl;
//maxi = *max_element(tension,tension+n);
//cout<<maxi<<endl;
//}
//return 0;
//}

//BodyBuilder
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,r;
//        cin>>n>>r;
//        long long int A[n],B[n];
//        for(int i=0;i<n;i++) cin>>A[i];
//        for(int i=0;i<n;i++) cin>>B[i];
//        long long int maxi = B[0],curr=B[0];
//        long long z=0;
//    for(int i=0;i<n;i++){
//        long int decrease = (A[i]-A[i-1]);
//       curr= max(z, curr - decrease*r);
//        curr=curr+B[i];
//        maxi = max(maxi,curr);
//        }
//        cout<<maxi<<endl;
//        }
//        return 0;
//    }

//Codeforces
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k;
//        cin>>n>>k;
//        int arr[n];
//        for(int i=0;i<n;i++){
//            cin>>arr[i];
//            }
//            int first = 0,second = n-1;
//            while(k--){
//                if(first == second || first>second){
//                    break;
//                    }
//                    if(arr[first]!=0){
//                        arr[first]--;
//                        arr[second]++;
//                        }
//                        else first++;
//                }
//                for(int i=0;i<n;i++){
//                    cout<<arr[i]<<" ";
//                    }
//                    cout<<endl;
//        }
//        return 0;
//    }

//vector
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    int N,M,x,y,a,b;
//    cin>>N>>M;
//    vector < vector<int> > matrix (N+1, vector<int>(M+1, 0) );
//    cin>>x>>y>>a>>b;
//    matrix[x][y] = 1;
//    matrix[a][b] = 2;
//    while(matrix[N][M] == 0){
//        if(x!=N){
//            x++;
//            }
//            else if(y!=M){
//                y++;
//                }
//                if(matrix[x][y] == 0) matrix[x][y]=1;
//                if(a!= N && b!=M){
//                    a++;
//                    b++;
//                    }
//                else if(a!=N){
//                    a++;
//                    }
//                    else if(b!=M){
//                        b++;
//                        }
//                        if(matrix[a][b] == 0) matrix[a][b] = 2;
//        }
//        if(matrix[N][M] == 1) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//    }
//    return 0;
//    }
//    
    
//int main(){
//int t;
//cin>>t;
//while(t--){
//int N,M,x,y,a,b;
//cin>>N>>M;
//vector < vector<int> > matrix (N+1, vector<int>(M+1, 0) );
//cin>>x>>y;
//cin>>a>>b;
//int t_row,t_column,t_total,p_row,p_column,p_total;
//t_row = N-x;
//t_column = M-y;
//t_total = t_row+t_column;
//p_row = N-a;
//p_column = M-b;
//p_total = max(p_row,p_column);
//
//if(t_total<=p_total) cout<<"YES"<<endl;
//else cout<<"NO"<<endl;
//
//}
//return 0;
//}

//Hiring test
//int main(){
//int t;
//cin>>t;
//int l=1;
//while(l<=t){
//int n,m,x,y,j=0;
//cin>>n>>m;
//int arr[n]={0};
//cin>>x>>y;
//int z=1;
//while(z<=n){
//int f=0,p=0,u=0;
//char result[m];
//cin>>result;
//for(int i=0;i<m;i++){
//char s = result[i];
//if(s == 'F') f++;
//else if(s == 'P') p++;
//else u++;
//}
//if(f>=x) arr[j]=1;
//else if(f==(x-1) && p>=y) arr[j]=1;
//j++;
//z++;
//}
//for(int a=0;a<n;a++){
//cout<<arr[a];
//}
//cout<<endl;
//l++;
//}
//return 0;
//}

//Hiring Test
//void answer() {
//  int N,M;
//  cin>>N>>M;
//  int X,Y;
//  cin>>X>>Y;
//  string s;
//  for(int i = 0 ; i < N ; i++){
//    cin>>s;
//    int f=0,u=0,p=0;
//    for(int i = 0 ; i < M ; i++){
//      if(s[i] == 'F'){
//        f++;
//      }
//      else if(s[i] == 'U'){
//        u++;
//      }
//      else{
//        p++;
//      }
//    }
//    if(f>=X) cout<<"1";
//    else if(((f==X-1)&&(p >= Y))) cout<<"1";
//    else cout<<"0";
//  }
//  cout<<endl;
//}
//
//int main() {
//    int t ;
//     cin >> t;
//    while(t--){
//        answer();
//    }
//}
//
//
////ios_base::sync_with_stdio(0);
////    cin.tie(0); cout.tie(0);

//Maximum size
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N,M;
//        cin>>N>>M;
//        vector < vector<int> > matrix (N+1, vector<int>(M+1, 0) );
//        }
//    }

//Coldplay
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int m,s;
//        cin>>m>>s;
//        if(s>m) cout<<0<<endl;
//        else cout<<m/s<<endl;
//        }
//        
//        return 0;
//    }

//Equinox Strings
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    long long int n,a,b,sarthak=0,anuradha=0;
//    cin>>n>>a>>b;
//    int arr[n] = {69,81,85,73,78,79,88};
//    while(n--){
//        string s;
//        cin>>s;
//        int ele = s[0];
//        bool flag = false;
//        for(int i=0;i<7;i++){
//            if(ele == arr[i]){
//                flag = true;
//                break;
//                }
//            }
//            if(flag == true) sarthak+=a;
//            else anuradha+=b;
//        }
//        if(anuradha == sarthak) cout<<"DRAW"<<endl;
//        else if(anuradha>sarthak) cout<<"ANURADHA"<<endl;
//        else cout<<"SARTHAK"<<endl;
//    }
//        return 0;
//    }

//Chef and Heaven
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int l,punya=0,paap=0;
//        cin>>l;
//        string s;
//        cin>>s;
//        bool flag = false;
//        for(int i=0;i<s.length();i++){
//            if(s[i] == '0') paap++;
//            else if(s[i] == '1') punya++;
//            if(punya>=paap){
//                flag = true;
//                break;
//                }
//            }
//            if(flag == true) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        
//        return 0;
//    }

//Array Rotation
//int main(){
//    long long int n,sum=0,q,query;
//    cin>>n;
//    long long int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//        sum=(sum+arr[i]+1000000007)%1000000007;
//        }
//        cin>>q;
//        while(q--){
//            cin>>query;
//            sum = (2*sum)%1000000007;
//            cout<<sum<<endl;
//            }
//            
//            return 0;
//    }

//Bench Press
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int N,W,W1,a=0;
//        cin>>N>>W>>W1;
//        int arr[N];
//        for(int i=0;i<N;i++) cin>>arr[i];
//        int diff = W-W1;
//        if(W1>=W) cout<<"YES"<<endl;
//        else{
//            sort(arr,arr+N);
//            bool flag = false;
//            while(a!=N){
//                int b=a;
//                if(arr[a]!=arr[a+1]) a++;
//                else{
//                    diff-=(arr[a]+arr[a+1]);
//                    if(diff<=0){
//                        flag = true;
//                        break;
//                        }
//                        else a = a+2;
//                    }
//                }
//                if(flag == true) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//            }
//        }
//        
//        return 0;
//    }


//Solubility
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x,a,b;
//        cin>>x>>a>>b;
//        int solubility = a+(100-x)*b;
//        cout<<solubility*10<<endl;
//        }
//        return 0;
//    }

//Golf
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,x,k,N;
//        cin>>n>>x>>k;
//        N = n+1;
//        long long int forward = x-0;
//        long long int backward = N-x;
//        if(forward%k == 0 || backward%k == 0) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//An interseting sequence
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int k,sum=0;
//        cin>>k;
//        int size = 2*k+2;
//        long long int arr[size]={0};
//        for(int i = 1;i<=2*k+1;i++){
//            int ele = k+pow(i,2);
//            arr[i] = ele;
//            }
//            for(int i = 1;i<2*k+1;i++){
//                int ele = __gcd(arr[i],arr[i+1]);
//                sum+=ele;
//                }
//                cout<<sum<<endl;
//        }
//        return 0;
//    }

//XOR Equality
//int size = 
//int main(){
//    int 
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x;
//        cin>>x;
//        int count=  0;
//        int power = pow(2,x);
//        for(int i = 0;i<=power-1;i++){
//        int left = i^(i+1);
//        int right = (i+2)^(i+3);
//        if(left == right) count++;
//        }
//        cout<<count<<endl;
//        count = 0;
//    }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x;
//        cin>>x;
//        int left = x^(x+1);
//        int right = (x+2)^(x+3);
//        if(left == right) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Xor Equality
//int main(){
//    int t,ans = 1;
//    cin>>t;
//    long long int arr[100001];
//    arr[1] = 1;
//    for(int i=2;i<=100000;i++){
//        ans = (ans%1000000007)*2;
//        arr[i] = (ans%1000000007);
//        }
//    while(t--){
//        long long int N;
//        cin>>N;
//        long long int result = arr[N];
//        cout<<(result%1000000007)<<endl;
//        }
//        return 0;
//    }

//Tic Tac Toe
//int main(){
//    vector<string> str[3];
//    string a;
//    for(int i = 0;i<=2;i++){
//        for(int j = 0;j<=2;j++){
//            cin>>a;
//            str[i].push_back(a);
//            }
//        }
//        for(int i = 0;i<=2;i++){
//        for(int j = 0;j<=2;j++){
//            cout<<str[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//        
//        return 0;
//    }

//Window sliding Technique Basic naive approach
//int main(){
//    int arr[12]={1,33,3,4,5,6,7,8,9,10,11,12};
//    int k,maxi = 0;
//    cin>>k;
//    for(int i = 0;i<10;i++){
//        int sum = 0;
//        for(int j = i;j<=i+(k-1);j++){
//            sum+=arr[j];
//            }
//            maxi = max(sum,maxi);
//        }
//        cout<<maxi<<endl;
//        
//        return 0;
//    }

//Brute Force for Finding the first negative number in every window of size K
//int main(){
//    int n,k;
//    cin>>n;
//    int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    cin>>k;
//    for(int i = 0;i<n-(k-1);i++){
//        int ele=0;
//        for(int j = i;j<=i+(k-1);j++){
//            if(arr[j]<0){
//                ele = arr[j];
//                break;
//                }
//            }
//            if(ele == 0) cout<<"No negative element"<<endl;
//            else cout<<ele<<endl;
//        }
//        
//        return 0;
//    }

//Printing the first negative number of every window
//int main(){
//    int n,k;
//    cin>>n>>k;
//    int arr[n];
//    for(int j = 0;j<n;j++) cin>>arr[j];
//    list<int> mylist;
//    int i;
//    for(i=0;i<k;i++){
//        if(arr[i]<0) mylist.push_back(i);
//        }
//        for(;i<n;i++){
//            if(mylist.empty() == true) cout<<0<<endl;
//            else cout<<arr[mylist.front()]<<endl;
//            if(mylist.empty() == false) mylist.pop_front();
//            if(arr[i]<0) mylist.push_back(i);
//            }
//            if(mylist.empty() == true) cout<<0<<endl;
//            else cout<<arr[mylist.front()]<<endl;
//            
//            return 0;
//    }

//Fence
//int main(){
//    int n,k;
//    cin>>n>>k;
//    int arr[n+1];
//    for(int j = 1;j<=n;j++) cin>>arr[j];
//    int i,mini = 1000000009,sum = 0,indii = 1,ans=1;
//    for(i = 1;i<=k;i++){
//        sum+=arr[i];
//        }
//        mini = sum;
//        for(;i<=(n-k+1);i++){
//            sum = sum+arr[i];
//            sum = sum - arr[indii++];
//            if(sum<mini){
//                mini = sum;
//                ans = (i-k+1);
//                }
//            }
//            cout<<ans<<endl;
//            return 0;
//    }

//Shivigawdz
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,b,a;
//        cin>>n>>b>>a;
//        int arr[n+1];
//        for(int a = 1;a<=n;a++) cin>>arr[a];
//        vector<float> vec;
//        for(int i = a;i<=b;i++){
//            int indii = 1,sum = 0,j;
//            float maxi = -1;
//            for(j=1;j<=i;j++) sum+=arr[j];
//            maxi = sum;
//            for(;j<=n;j++){
//                sum = sum - arr[indii++];
//                sum = sum+arr[j];
//                if(sum>maxi) maxi = sum;
//                }
//                maxi = maxi/i;
//                vec.push_back(maxi);
//            }
//            float ans = *max_element(vec.begin(),vec.end());
//            cout<<fixed;
//            cout<<setprecision(7)<<ans<<endl;
//        }
//        return 0;
//    }

//Birthday Gift again -- Brute Force
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        int ans = 0,times = 0;
//        for(int i = 0;i<s.length();i++){
//           int count_1 = 0,count_0 = 0;
//            for(int j=i;j<s.length();j++){
//                times++;
//                if(s[j] == '0') count_0++;
//                else count_1++;
//                if(count_0 == (count_1*count_1)) ans++;
//                }
//            }
//            cout<<times<<endl;
//            cout<<ans<<endl;
//        }
//        return 0;
//    }

//Sliding Window Maximum
//int main(){
//    list<int> vec;
//    int n;
//    cin>>n;
//    while(n--){
//        int ele;
//        cin>>ele;
//        vec.push_back(ele);
//        }
//        int ans = *max_element(vec.begin(),vec.end());
//        cout<<ans<<endl;
//        
//        return 0;
//    }

//vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
//list<int> vec;
//vector<int> ans;
//int maxi = -1,ansi=0;
//if(B>A.size()){
//for(int i = 0;i<A.size();i++){
//maxi = max(maxi,A[i]);    
//}
//ansi = maxi;
//}
//else{
//for(int i = 0;i<B;i++){
//maxi = max(maxi,A[i]);
//vec.push_back(A[i]);
//}
//ans.push_back(maxi);
//for(;i<A.size();i++){
//vec.pop_front();
//vec.push_back(A[i]);
//int maxsh = *max_element(vec.begin(),vec.end());
//ans.push_back(maxsh);
//}
//}
//if(ans == 0) return ans;
//else return ansi;
//}


//Sliding Window Maximum
//int main(){
//vector<int> A;
//int n;
//cin>>n;
//while(n--){
//int a;
//cin>>a;
//A.push_back(a);
//}
//int B;
//cin>>B;
//list<int> vec;
//vector<int> ans;
//int maxi = -1,ansi=0;
//if(B>A.size()){
//for(int i = 0;i<A.size();i++){
//maxi = max(maxi,A[i]);    
//}
//ansi = maxi;
//}
//else{
//    int i;
//for(i = 0;i<B;i++){
//maxi = max(maxi,A[i]);
//vec.push_back(A[i]);
//}
//ans.push_back(maxi);
//for(;i<A.size();i++){
//vec.pop_front();
//vec.push_back(A[i]);
//int maxsh = *max_element(vec.begin(),vec.end());
//ans.push_back(maxsh);
//}
//}
//if(ansi == 0){
//    for(int i = 0;i<ans.size();i++){
//        cout<<ans[i]<<" ";
//        }
//    }
//else{
//    cout<<ansi<<endl;
//    }
//
//return 0; 
//    }
    
    
//vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
//vector<int> A;
//int n;
//cin>>n;
//while(n--){
//int a;
//cin>>a;
//A.push_back(a);
//}
//int B;
//cin>>B;
//list<int> vec;
//vector<int> ans;
//int maxi = -1,ansi=0;
//if(B>A.size()){
//for(int i = 0;i<A.size();i++){
//maxi = max(maxi,A[i]);    
//}
//ansi = maxi;
//}
//else{
//    int i;
//for(i = 0;i<B;i++){
//maxi = max(maxi,A[i]);
//vec.push_back(A[i]);
//}
//ans.push_back(maxi);
//for(;i<A.size();i++){
//vec.pop_front();
//vec.push_back(A[i]);
//int maxsh = *max_element(vec.begin(),vec.end());
//ans.push_back(maxsh);
//}
//}
//if(ansi == 0){
//    return ans;
//    }
//else{
//    return ansi;
//    }
//}

//Longest substring of K characters
//int main(){
//    string s;
//    cin>>s;
//    int k;
//    cin>>k;
//    int n = s.length();
//    int arr[130]={0};
//    int first = 0,distinct = 0,maxi = 0,len = 0,f,j;
//    for(int i=0;i<n;i++){
//        int indii = s[i];
//        if(arr[indii] == 0){
//            distinct++;
//            len++;
//            arr[indii]++;
//            }
//            else{
//                arr[indii]++;
//                }
//            if(distinct>k){
//                int len1 = len-1;
//                if(len1 > maxi){
//                    f = first;
//                    j = i-1;
//                    maxi = len1;
//                    }
//                    bool f = true;
//                    while(f == true){
//                        int now = s[first];
//                        arr[now]--;
//                        cout<<first<<" ";
//                        first++;
//                        len--;
//                        if(arr[now] == 0) f = false;
//                        }
//                        distinct--;
//                }
//        }
//        string al = s.substr(f,j);
//        cout<<al<<endl;
//        
//        return 0;
//    }

//Tic Tac Toe
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        vector<string> vec[3];
//        int count_X = 0,count_O = 0,ans = 0;
//        for(int i = 0;i<=2;i++){
//            string s;
//            cin>>s;
//            for(int i = 0;i<s.length();i++){
//                if(s[i] == 'X') count_X++;
//                else if(s[i] == 'O') count_O++;
//                }
//            vec[i].push_back(s);
//            }
//            if(abs(count_X-count_O)>1) ans = 3;
//            
//        }
//        return 0;
//    }

//int main(){
//    unordered_map<int,string> m;
//    m[1] = "Nikhil";
//    m[4] = "Mukul";
//    m[6] = "Neetu";
//    m[8] = "Sanjay";
//    m[10] = "Mansi";
//    for(auto p : m){
//        cout<<p.first<<" "<<p.second<<endl;
//        }
//        unordered_map<int,string> :: iterator it;
//        it = m.find(10);
//        m.erase(it);
//        for(auto p : m){
//        cout<<p.first<<" "<<p.second<<endl;
//        }
//        return 0;
//    }

//Longest Substring with K unique Characters
//int main(){
//    string s;
//    cin>>s;
//    int k,len,i=0;
//    cin>>k;
//    len = s.length();
//    int start = 0,end = 0;
//    string ans;
//    unordered_map<char,int> m;
//        while(i!=len){
//        m[s[i]]++;
//        if(m.size() == k)
//        }
//        
//        return 0;
//    }

//Modular Equation
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,m,count = 0;
//        cin>>n>>m;
//        for(int i = 1;i<=n-1;i++){
//            for(int j = i+1;j<=n;j++){
//                if((m%i)%j == (m%j)%i){
//                    cout<<i<<" and "<<j<<endl;
//                    count++;
//                    }
//                }
//            }
//            cout<<count<<endl;
//        }
//        return 0;
//    }

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int func();
//int main()
//{
//int test_cases;
////Test cases start
//cin >> test_cases;
//for (int i = 0; i <test_cases; i++){
//int ans = func();
////Function called
//cout<<ans<<endl;
//}
//return 0;
//}
//int func(){
//char arrr[3][3];
//for (int ilm=0;ilm<3;ilm++){
//for (int jlm=0;jlm<3; jlm++) cin>>arrr[ilm][jlm];
//}
//int mnt = 0,nmt=0;
////Finding the winning
//if (arrr[1][0]=='X' && arrr[1][1]=='X' && arrr[1][2]=='X') mnt = 1;
//if (arrr[0][0]=='X' && arrr[0][1]=='X' && arrr[0][2]=='X') mnt = 1;
//if (arrr[0][0]=='O' && arrr[1][0]=='O' && arrr[2][0]=='O') nmt = 1;
//if (arrr[2][0] == 'X' && arrr[2][1]=='X' && arrr[2][2]=='X') mnt = 1;
//if (arrr[0][1] == 'O' && arrr[1][1] == 'O' && arrr[2][1]=='O') nmt = 1;
//if (arrr[0][2] == 'O' && arrr[1][2] == 'O' && arrr[2][2]=='O') nmt = 1;
//if (arrr[0][2]=='O' && arrr[1][1] == 'O' && arrr[2][0]=='O') nmt = 1;
//if (arrr[0][0] == 'O' && arrr[1][1] == 'O' && arrr[2][2]=='O') nmt = 1;
//if (arrr[0][0]=='O' && arrr[0][1]=='O' && arrr[0][2]=='O') nmt = 1;
//if (arrr[2][0] == 'O' && arrr[2][1] == 'O' && arrr[2][2] == 'O') nmt = 1;
//if (arrr[1][0]=='O' && arrr[1][1]=='O' && arrr[1][2]=='O') nmt = 1;
//if (arrr[0][0]=='X' && arrr[1][0]=='X' && arrr[2][0]=='X') mnt = 1;
//if (arrr[0][1]=='X' && arrr[1][1]=='X' && arrr[2][1]=='X') mnt = 1;
//if (arrr[0][2]=='X' && arrr[1][1]=='X' && arrr[2][0]=='X') mnt = 1;
//if (arrr[0][2]=='X' && arrr[1][2]=='X' && arrr[2][2]=='X') mnt = 1;
//if (arrr[0][0]=='X' && arrr[1][1]=='X' && arrr[2][2]=='X') mnt = 1;
//int emptyie=0,x=0,y=0;
//for (int i=0; i<3; i++){
//for (int j=0; j<3; j++){
//if (arrr[i][j]=='X'){
//x++;
//}
//else if (arrr[i][j]=='O'){
//y++;
//}
//else emptyie++;
//}
//}
//int subst=x - y;
////Toh swagat hai apka mere mehel me
//if (mnt==1 && nmt==1 || subst<0 || subst>1) return 3;
//else if (mnt==0 && nmt==0 && emptyie==9) return 2;
//else if (mnt>1 || nmt>1) return 3;
//else if (mnt==1 && nmt==0 && subst > 0) return 1;
//else if (mnt==0 && nmt==1 && (x==y)) return 1;
//else if (mnt==0 && nmt==0 && emptyie==0) return 1;
//else if (mnt==0 && nmt==0 && emptyie > 0) return 2;
//else return 3;
////Chal bhai Chalta hu
//}


//Marathon
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int D,d,A,B,C;
//        cin>>D>>d>>A>>B>>C;
//        int maxi = D*d;
//        if(maxi>=42) cout<<C<<endl;
//        else if(maxi>=21) cout<<B<<endl;
//        else if(maxi>=10) cout<<A<<endl;
//        else cout<<0<<endl;
//        }
//        return 0;
//    }    

//Chef and Subarrays
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    int N,k;
//    cin>>N>>k;
//    int arr[N];
//    long long int a = 0,indii = 0,sum = 0,count = 0;
//    for(int i = 0;i<N;i++){
//        cin>>arr[i];
//        if(a!=k){
//            sum+=arr[i];
//            a++;
//            }
//        }
//        long long int sums = sum;
//        if(k == N) cout<<0<<endl;
//        else{
//            for(int i = k;i<=N-k;i++){
//                sums-=arr[indii];
//                indii++;
//                if(sums!=sum) count++;
//                }
//                cout<<count<<endl;
//            }
//    }
//    return 0;
//}

//The Last Problem
//const int len = 1001;
//int arr[len][len];
//int main(){
//    for(int i = 1;i<=1000;i++) arr[i][1] = i*(i+1)/2;
//    for(int i=1;i<=1000;i++){
//        for(int j = 2;j<=1000;j++){
//            arr[i][j] = arr[i][j-1]+(j-1)+(i-1);
//            }
//        }
//    int t;
//    cin>>t;
//    while(t--){
//        long long int x1,x2,y1,y2,sum=0;
//        cin>>x1>>y1>>x2>>y2;
//        for(int i = x1;i<=x2;i++){
//            sum+=arr[i][y1];
//            }
//            for(int i = y1+1;i<=y2;i++){
//                sum+=arr[x2][i];
//                }
//                cout<<sum<<endl;
//        }
//        return 0;
//    }

//Chef and Subarrays
//int main(){
//int t;
//cin>>t;
//while(t--){
//    long long int n,k,sum = 0,count = 0,indii = 1;
//    cin>>n>>k;
//    int arr[n+1];
//    for(int i = 1;i<=n;i++) cin>>arr[i];
//    if(n == k) cout<<0<<endl;
//    else{
//        int i = 1;
//        for(;i<=k;i++) sum+=arr[i];
//        long long int sums = sum;
//        for(;i<=(n-k+1);i++){
//            sums = sums-arr[indii];
//            indii++;
//            long long int diff = sums+arr[i]-sum;
//            if(diff!=0){ 
//            count++;
//            arr[i] = arr[i] - diff;
//            sums+=arr[i];
//            }
//        }
//            cout<<count<<endl;
//        }
//    }
//    return 0;
//    }


//Chef and subarrays
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k,ans = 0;
//        cin>>n>>k;
//        int arr[n];
//        unordered_map<int,int> mp;
//        for(int i = 0;i<n;i++){
//            cin>>arr[i];
//            }
//            for(int i = 0;i<k;i++){
//                int cnt = 0;
//                for(int j = i;j<n;j = j+k){
//                    mp[arr[j]]++;
//                    cnt++;
//                    }
//                    int MAX = 0;
//                    unordered_map<int,int> ::iterator it;
//                    for(it = mp.begin();it!=mp.end();++it){
//                        MAX = max(MAX,it->second);
//                        }
//                        ans+=(cnt-MAX);
//                }
//                cout<<ans<<endl;
//        }
//        return 0;
//    }    

//Man with No NAME
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int n,sum = 0;
//        cin>>n;
//        long long int arr[n+1];
//       for(int i = 1;i<=n;i++){
//           cin>>arr[i];
//           if(arr[i] == -1){
//               arr[i] = sum/(i-1);
//               sum+=arr[i];
//               }
//               else sum+=arr[i];
//               cout<<arr[i]<<" ";
//           }
//           cout<<endl;        
//        }
//        return 0;
//    }

//Kj and Street Lights
//int main(){
//    int n,p;
//    cin>>n>>p;
//    int arr[p+2]={0};
//    while(n--){
//        int x,r;
//        cin>>x>>r;
//        int left = x-r;
//        if(left<0) left = 0;
//        int right = x+r;
//        if(right>p) right = p;
//        arr[left]++;
//        arr[right+1]--;
//        }
//        int count = 0,maxi = -1;
//        if(arr[0]>1 || arr[0] == 0) count = 1;
//        for(int i = 1;i<=p;i++){
//            arr[i] = arr[i]+arr[i-1];
//            if(arr[i]>1 || arr[i] == 0) count++;
//            else count = 0;
//            maxi = max(maxi,count);
//            }
//            cout<<maxi<<endl;
//            
//            return 0;
//    }

//Simple Modification
//const int sizes = 1010;
//int arr[sizes][sizes];
//int main(){
//    int n,m,u,q,first_row = 0,first_column = 0;
//    cin>>n>>m>>u>>q;
//    for(int i = 0;i<n;i++){
//        for(int j = 0;j<m;j++){
//            cin>>arr[i][i];
//            if(i == 0){
//                first_row+=arr[i][j];
//                arr[i][j] = first_row;
//                }
//                if(j == 0){
//                    first_column+=arr[i][j];
//                    arr[i][j] = first_column;
//                    }
//            }
//        }
//        for(int i = 1;i<n;i++){
//            for(int j = 1;j<m;j++){
//                arr[i][j] = arr[i][j]+arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1];
//                }
//            }
//            while(u--){
//                int k,r1,c1,r2,c2;
//                cin>>k>>r1>>c1>>r2>>c2;
//                for(int i = r1;i<=r2;i++){
//                    arr[i][c1]+=k;
//                    arr[i][c2+1]-=k;
//                    }
//                }
//                for(int i = 1;i<n;i++){
//                    for(int j = 1;j<n;j++){
//                        arr[i][j] = arr[i][j]+arr[i][j-1];
//                        }
//                    }
//                    while(q--){
//                        int r1,c1,r2,c2,row,column;
//                        cin>>r1>>c1>>r2>>c2;
//                        if(r1 == 0) row = 0;
//                        else row = r1-1;
//                        if(c1 == 0) column = 0;
//                        else column = c1-1;
//                        int ans = arr[r2][c2]-arr[row][c2]-arr[r2][column]+arr[row][column];
//                        cout<<ans<<endl;
//                        }
//                        return 0;
//    }

//Pongal Bunk
//int main(){
//    int n;
//    cin>>n;
//    int A[n+2] = {0};
//    int q;
//    cin>>q;
//    while(q--){
//        int l,r;
//        cin>>l>>r;
//        int addi = l-l+1;
//        A[l]++;
//        A[r+1]--;
//        }
//        int count = 0;
//        for(int i = 1;i<=n;i++) A[i] = A[i]+A[i-1];
//            int m;
//            cin>>m;
//            while(m--){
//                int indii;
//                cin>>indii;
//                cout<<A[indii]<<endl;
//                }
//                
//                return 0;
//    }

//Pongal Bank
//int main(){
//    int n;
//    cin>>n;
//   long long int A[n+2]={0};
//   long long int B[n+2]={0};
//    int q;
//    cin>>q;
//    while(q--){
//        int l,r;
//        cin>>l>>r;
//        A[l]+=l;
//        A[r+1]-=l;
//        B[l]++;
//        B[r+1]--;
//        }
//        for(int i = 1;i<=n;i++){
//            A[i] = A[i]+A[i-1];
//            B[i] = B[i]+B[i-1];
//            }
//            int m;
//            cin>>m;
//            while(m--){
//                int indii;
//                cin>>indii;
//                long long int ans = B[indii]*indii-A[indii]+B[indii];
//                cout<<ans<<endl;
//                }
//                
//                return 0;
//    }

//Prime Generator
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//    int m,n,count = 0;
//    cin>>m>>n;
//    for(long long int i = m;i<=n;i++){
//        if(i == 1) continue;
//        bool flag = true;
//        for(long long int j = 2;j*j<=i;j++){
//            if(i%j == 0){
//                flag = false;
//                break;
//                }
//            }
//            if(flag == true){ 
//            count++;
//           cout<<i%100<<endl;
//            }
//            if(count == 101) break;
//        }
//        cout<<endl;
//    }
//    return 0;
//        }

//Sieve of Eratosthenes
//int main(){
//    int n;
//    cin>>n;
//    int arr[n] = {0};
//    for(int i = 2;i<=n;i++){
//        if(arr[i] == 0){
//            for(int j = i*i;j<=n;j = j+i){
//                arr[j] = 1;
//                }
//            }
//        }
//        for(int i = 2;i<=n;i++){
//            if(arr[i] == 0) cout<<i<<" ";
//            }
//            cout<<endl;
//            
//            return 0;
//    }

//Printing Some Primes
//int main(){
//    //int count = 1,ans = 101;
//    int count = 1,ans = 101;
//    cout<<2<<endl;
//    for(int i = 3;i<=100000000;i=i+2){
//        bool flag = true;
//        for(int j = 3;j*j<=i;j=j+2){
//            if(i%j == 0){
//                flag = false;
//                break;
//                }
//            }
//            if(flag == true){
//                count++;
//                if(ans == count){
//                cout<<i<<endl;
//                ans = ans+100;
//                //i = i+100;
//                }
//                //else i = i+2;
//            }
//        }
//        return 0;
//    }

//
//int main(){
//    int n,k;
//    cin>>n>>k;
//    int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    int mini = 100010,maxi = -1;
//        for(int i = 0;i<n;i++){
//        if(arr[i]>=k){
//        arr[i] = arr[i]-k;
//        mini = min(mini,arr[i]);
//        maxi = max(maxi,arr[i]);
//        }
//        else{
//        arr[i] = arr[i]+k;
//        mini = min(mini,arr[i]);
//        maxi = max(maxi,arr[i]);
//        }
//        }
//        cout<<maxi<<" "<<mini<<endl;
//        int diff = maxi-mini;
//    }
//Printing Some Primes
//const int sizes = 100000000;
//vector<char> arr(sizes+1,true);
//vector<int> vec;
//int main(){
//    vec.push_back(2);
//    for(int i = 3;i*i<=100000000;i=i+2){
//        if(arr[i]==true){
//            for(int j=i*i;j<=100000000;j = j+i){
//                arr[j] = false;
//                }
//            }
//        }
//        for(int i = 3;i<=100000000;i=i+2){
//            if(arr[i] == true) vec.push_back(i);
//            }
//        //for(auto it = vec.begin();it!=vec.end();++it) cout<<*it<<endl;
//        int size = vec.size();
//        for(int i = 0;i<size;i = i+100) cout<<vec[i]<<endl;
//        return 0;
//    }

//Ashu and Prime Factors

//Iski Time Complexity Jyada Hogi , So rather than it we can Pre-Compute the answer
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        vector<char> arr(1000010,true);
//        int x,count = 1;
//        cin>>x;
//        for(int i = 2;i*i<=1000000;i++){
//            if(arr[i] == true && i == x){
//                for(int j = i*i;j<=1000000;j=j+i){
//                    if(arr[j] == true) count++;
////                    else arr[i] = false;
//                    }
//                    break;
//                }
//                else if(arr[i] == true){
//                 for(int j = i*i;j<=1000010;j=j+i) arr[j]=false;   
//                }  
//            }
//            cout<<count<<endl;
//        }
//        return 0;
//    }

//Ashu and Prime Factors
//const int sizes = 1000010;
//vector<char> vec(sizes,true);
//vector<int> arr(sizes,1);
//int main(){
//    arr[0]=0;
//    arr[1]=0;
//    for(int i = 2;i<=1000000;i++){
//        int count = 1;
//        if(arr[i] == 0) continue;
//        else
//        for(int j = i*i;j<=1000000;j=j+i){
//            if(vec[j] == true) count++;
//            vec[j] = false;
//            arr[j] = 0;
//            }
//            arr[i] = count;
//        }
//    int t;
//    cin>>t;
//    while(t--){
//        int x;
//        cin>>x;
//        cout<<arr[x]<<endl;
//        }
//        return 0;
//    }

//Sherlock and his Girlfriend
//const int sizes = 1000010;
//vector<char> arr(sizes+2,true);
//vector<int> vec(sizes+2);
//int main(){
//    int n;
//    cin>>n;
//    for(int i = 2;i<=n+1;i++){
//        int count = 1;
//        if(arr[i] == true){
//            vec[i] = count;
//            for(int j = i*i;j<=n+1;j+=i){
//                if(arr[j] == true){
//                    count++;
//                    vec[j] = count;
//                    arr[j] = false;
//                    }
//                }
//            }
//        }
//        if((n+1)%2 == 0) cout<<vec[n+1]<<endl;
//        else cout<<vec[n]<<endl;
//        for(int i = 2;i<=n+1;i++) cout<<vec[i]<<" ";
//        cout<<endl;
//        return 0;
//    }

//Special Numbers
//const int sizes=10000010;
//vector<int> vec(sizes,1);
//int main(){
//    for(int i = 2;i<=10000000;i++){
//        if(vec[i] == 1){
//            vec[i] = i;
//            for(int j = 2*i;j<=10000000;j+=i){
//                if(vec[j] == 1) vec[j] = i;
//                }
//            }
//        }
//        int p;
//        cin>>p;
//        int t;
//        cin>>t;
//        while(t--){
//            int n;
//            cin>>n;
//            int ans=1,count = 0;
//             while(n!=1){
//                 int primii = vec[n];
//                 if(ans!=primii){
//                     ans = primii;
//                     count++;
//                     }
//                 n = n/primii;
//                 }
//                 if(count>=p) cout<<"YES"<<endl;
//                 else cout<<"NO"<<endl;
//            }
//            return 0;
//    }

//Lazy Chef
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int x,m,d;
//        cin>>x>>m>>d;
//        int minii = min(x*m,x+d);
//        cout<<minii<<endl;
//        }
//        return 0;
//    }

//Correct Sentence
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int k;
//        cin>>k;
//        bool flag = true;
//        while(k--){
//            string s;
//            cin>>s;
//            int indii = s[0];
//            cout<<indii<<"ans"<<endl;
//            int left,right;
//            if(indii>=97 && indii<=109){
//                left = 97;
//                right = 109;
//                }
//                else if(indii>=78 && indii<=90){
//                    left = 78;
//                    right = 90;
//                    }
//                    else{
//                        flag = false;
//                        break;
//                        }
//                        int len = s.length();
//                        for(int i = 0;i<len;i++){
//                            int curr= s[i];
//                            if(curr<left || curr>right){
//                                flag = false;
//                                break;
//                                }
//                            }
//            }
//            if(flag == true) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Plagiarism
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long int n,m,k,count = 0;
//        cin>>n>>m>>k;
//        long long int arr[n+1]={0};
//        while(k--){
//            int user;
//            cin>>user;
//            if(user<=n){
//                arr[user]++;
//                if(arr[user] == 2) count++;
//                }
//            }
//            cout<<count<<" ";
//            for(int i = 1;i<=n;i++){
//                if(arr[i]>1) cout<<i<<" ";
//                }
//                cout<<endl;
//        }
//        return 0;
//    }

//Cheating time
//int main(){
//int t;
//cin>>t;
//while(t--){
//    long long int n,k,f;
//    cin>>n>>k>>f;
//    long int f1 = f;
//    while(n--){
//        long long int s,e;
//        cin>>s>>e;
//        long long int diff = e-s;
//        f = f-diff;
//        }
//        if(k>f1) cout<<"NO"<<endl;
//        else if(f>=k) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//    }
//    return 0;
//}

//
//#define ll long long int
//int main(){
//    int test;
//    cin>>test;
//    while(test--){
//        int k, a=0, c;
//        string str{"ab"};
//        cin>>k;
//        c=k;
//        while(k--){
//            int left=0, upper=0;
//            cin >> str;
//            for(int i=0;i<str.length();i++){
//                if(str[i]>=97 && str[i]<=109)
//                    left++;
//                else if(str[i]>=78 && str[i]<=90)
//                    upper++;
//            }
//            if(upper==str.length() || left==str.length()) a++;
//        }
//        if(a!=c) cout<<"NO"<<endl;
//        else cout <<"YES"<<endl; }
//    return 0; }

//Cheating time
//const int sizes = 1000000005;
//vector<char> vec(sizes,'f');
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k,f;
//        cin>>n>>k>>f;
//        while(n--){
//            int s,e;
//            cin>>s>>e;
//            vec[s] = 't';
//            vec[e]='t';
//            }
//            for(int i = 1;i<f;i++){
//                
//                }
//        }
//    }

//Cheating Time
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k,f;
//        cin>>n>>k>>f;
//        //K--Chef needs K time to cheat 
//        //F--Total time of exam
//        //N--Number of invigilators
//        vector<pair<int,int>> vec(n);
//        for(int i = 0;i<n;i++){
//            cin>>vec[i].first>>vec[i].second;
//            }
//            sort(vec.begin(),vec.end());
//            int ans = 0;
//            int max_end = vec[0].second;
//            for(int i = 1;i<n;i++){
//                ans+=max(0,vec[i].first-max_end);
//                max_end = max(max_end,vec[i].second);
//                }
//                ans+=vec[0].first;
//                ans+=f-(max_end);
//                if(ans>=k) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//        }
//        return 0;
//    } 

//Hoop Jump
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        cout<<n/2+1<<endl;
//        }
//        return 0;
//    }

//Tom and jerry 1
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,c,d,k;
//        cin>>a>>b>>c>>d>>k;
//        int row = abs(c-a);
//        int column = abs(d-b);
//        int sum = row+column;
//        int diff = k-sum;
//        if(diff<0) cout<<"NO"<<endl;
//        else{
//            if(diff%2 == 1) cout<<"NO"<<endl;
//            else cout<<"YES"<<endl;
//            }
//        }
//        return 0;
//    }

//Birthday Gifts
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k;
//        cin>>n>>k;
//        long long int arr[n+1];
//        for(int a = 1;a<=n;a++) cin>>arr[a];
//        sort(arr+1,arr+(n+1));
//        long long int count = 0,i=n,sum_f = 0,sum_s = 0;
//        while(count<2*k){
//            if(count%2 == 0){
//                sum_f+=arr[i];
//                i--;
//                }
//                else{
//                    sum_s+=arr[i];
//                    i--;
//                    }
//                    count++;
//            }
//            sum_s+=arr[i];
//            if(sum_s>=sum_f) cout<<sum_s<<endl;
//            else cout<<sum_f<<endl;
//        }
//        return 0;
//    }

//Charges
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,k;
//        cin>>n>>k;
//        string s;
//        cin>>s;
//        s='0'+s;
//        long long int total_sum = 0;
//        for(int i = 2;i<=n;i++){
//            if(s[i] == s[i-1]) total_sum+=2;
//            else total_sum+=1;
//            }
//            while(k--){
//                int pos;
//                cin>>pos;
//                if(s[pos] == '0') s[pos] = '1';
//                else s[pos] = '0';
//                if(pos!=1){
//                    if(s[pos] == s[pos-1]) total_sum+=1;
//                    else total_sum-=1;
//                    }
//                    if(pos!=n){
//                        if(s[pos] == s[pos+1]) total_sum+=1;
//                        else total_sum-=1;
//                        }
//                        cout<<total_sum<<endl;
//                }
//        }
//        return 0;
//    }

//Total Components
//const int sizes = 100;
//vector<int> vec(sizes,0);
//int arr[10]={0};
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        for(int i = 2;i<=n;i++){
//            if(vec[i] == 0){
//                vec[i] = i;
//                for(int j = i*i;j<=n;j+=i){
//                    if(vec[j] == 0) vec[j] = i;
//                    }
//                }
//            }
//            for(int i = 2;i<=n;i++){
//                int indii = i;
//                while(indii!=1){
//                    int ele = arr[indii];
//                    arr[ele]+=1;
//                    indii = indii/ele;
//                    }
//                }
//                int count = 0;
//                for(int i=2;i<=n;i++){
//                    if(arr[i]>1) count++;
//                    }
//                    cout<<count<<endl;
//        }
//        return 0;
//    }

//
//int spf[1007];
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//         spf[1] = 1;
//    for (int i=2; i<=n; i++)
//        spf[i] = i;
//    for (int i=4; i<=n; i+=2)
//        spf[i] = 2;
// 
//    for (int i=3; i*i<=n; i++)
//    {
//        if (spf[i] == i)
//        {
//            for (int j=i*i; j<=n; j+=i)
//                if (spf[j]==j)
//                    spf[j] = i;
//        }
//    }
//        int arr[n+10]={0};
//        for(int i = 2;i<=n;i++){
//            int indii = i;
//            while(indii!=1){
//                int ele = arr[indii];
//                arr[ele]+=1;
//                indii = indii/ele;
//                }
//            }
//            int count=0;
//            for(int i = 1;i<=n;i++) if(arr[i]>1) count++;
//            cout<<count<<endl;
//    }
//    }


//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n+2]={0};
//        for(int i = 2;i<n;i++){
//            if(arr[i] == 0){
//                arr[i] = i;
//                for(int j = 2*i;j<n;j+=i){
//                    if(arr[j] == 0) arr[j] = i;
//                    }
//                }
//            }
//            int arr1[n+2]={0};
//            for(int i = 2;i<=n;i++){
//                int indii = i;
//                while(indii!=1){
//                    int ele=arr[indii];
//                    arr1[ele]+=1;
//                    indii = indii/ele;
//                    }
//                }
//                int count = 0;
//                for(int i = 1;i<=n;i++){
//                    if(arr[i]>1) count++;
//                    }
//                    cout<<count<<endl;
//        }
//        return 0;
//    }

//Total Components
//const int sizes = 10000007;
//long long int arr[sizes];
//long long int primii[sizes];
//int main(){
//    int count=  0;
//    for(long long int i = 2;i<=sizes;i++){
//        if(arr[i] == 0){
//            arr[i] = i;
//            for(long long int j=i*i;j<=sizes;j+=i){
//                if(arr[j] == 0) arr[j] = i;
//                }
//                }
//            }
//            for(int i = 2;i<=sizes;i++){
//                if(arr[i] == i){
//                    count++;
//                    primii[i] = count;
//                    }
//                    else primii[i] = count;
//                }
//            int t;
//            cin>>t;
//            while(t--){
//                int n;
//                cin>>n;
//                if(n == 2) cout<<1<<endl;
//                else if(n==3) cout<<2<<endl;
//                else{
//                int tot = primii[n];
//                int half = n/2;
//                int half_tot = primii[half];
//                int ans_1 = tot-half_tot;
//                cout<<ans_1+1<<endl;
//                }
//            }
//                return 0;
//    }

//Summer Heat
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,A,B;
//        cin>>a>>b>>A>>B;
//        A = A/a;
//        B = B/b;
//        cout<<A+B<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        long long int D,d,p,q,sum = 0;
//        cin>>D>>d>>p>>q;
//        long long int first = D/d;
//        long long int second = D%d;
//        while(first--){
//            sum = sum+p*d;
//            p+=q;
//            }
//                sum = sum+p*second;
//                cout<<sum<<endl;
//        }
//        return 0;
//    }

//Bella Ciao
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int D,d,p,q;
//        cin>>D>>d>>p>>q;
//        int first = D/d;
//        int second = D%d;
//        int ans1 = d*((first*p)+q*((first-1)*(first))/2);
//        int ans2 = ans1+((q*(first-1)+p)+q)*second;
//        cout<<ans2<<endl;
//        }
//        return 0;
//    }

//Remove 'X'
//void remove(char s[ ]){
//    if(s[0]='\0') return;
//    if(s[0] == 'X'){
//        int i = 1;
//        for(;s[i]!='\0';i++){
//            s[i-1] = s[i];
//            }
//            s[i-1] = s[i];
//            remove(s);
//        }
//       else remove(s+1);
//    }
//int main(){
    //char s[100];
    //cin>>s;
    //remove(s);
    //cout<<s<<endl;
    //cout<<str<<endl;
    //}
    
    //Replace pi with 3.14
//    void replace_str(char s[ ],int start){
//        if(s[start]=='\0' || s[start+1]=='\0') return;
//        replace_str(s,start+1);
//        
//        if(s[start] == 'p' && s[start+1] == 'i'){
//            int len=strlen(s);
//            for(int i = len;i>=start+2;i--){
//                s[i+2] = s[i];
//                }
//                s[start] = '3';
//                s[start+1] = '.';
//                s[start+2] = '1';
//                s[start+3] = '4';
//            }
//        }
//    int main(){
//        char s[1000];
//        cin>>s;
//        replace_str(s,0);
//        cout<<s<<endl;
//        }

//Remove 'X' from a string
//void remove_x(char s[ ],int start){
//    if(s[0] == '\0') return;
//    remove_x(s,start+1);
//    if(s[start]=='X'){
//        int len = strlen(s);
//        for(int i = start;s[i]!='\0';i++){
//            s[i] = s[i+1];
//            }
//        }
//    } 
//int main(){
//    char s[1000];
//    cin>>s;
//    remove_x(s,0);
//    cout<<s<<endl;
//    }

//Staircase
//int ways(int n){
//    if(n==1 || n == 2 || n == 3 || n == 0){
//        return n;
//        }
//        return ways(n-1)+ways(n-2)+ways(n-3);
//    }
//int main(){
//    int n;
//    cin>>n;
//    int counte=ways(n);
//    cout<<counte+1<<endl;
//    }

// C++ program to count number of
// ways to reach Nth stair
//#include <bits/stdc++.h>
//using namespace std;

// A simple recursive program to
// find N'th fibonacci number
//int fib(int n)
//{
//	if (n <= 1)
//		return n;
//	return fib(n - 1) + fib(n - 2);
//}

// Returns number of ways to
// reach s'th stair
//int countWays(int s)
//{
//	return fib(s + 1);
//}

// Driver C
//int main()
//{
//	int s = 4;
//
//	cout << "Number of ways = " << countWays(s);
//
//	return 0;
//}

// This code is contributed by shubhamsingh10

//The Wave
//int main(){
//    long long int n,q;
//    cin>>n>>q;
//    long long int arr[n];
//    for(int i = 0;i<n;i++) cin>>arr[i];
//    sort(arr,arr+n);
//    while(q--){
//        int query,negative = 0,positive = 0;
//        cin>>query;
//            int posii = lower_bound(arr,arr+n,query)-arr;
//            if(arr[posii] == query) cout<<0<<endl;
//            else{
//                negative = n-posii;
//                positive = posii;
//                if(negative%2 == 0) cout<<"POSITIVE"<<endl;
//                else cout<<"NEGATIVE"<<endl;
//            }
//        }
//        return 0;
//    }

//Richie Rich
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,x;
//        cin>>a>>b>>x;
//        int days = (b-a)/x;
//        cout<<days<<endl;
//        }
//        return 0;
//    }

//False Number
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,i=0;
//        cin>>a;
//        int fake = a;
//        while(fake!=0){
//            fake = fake/10;
//            i++;
//            }
//        int arr[i+1];
//        int j = i;
//        while(a!=0){
//            arr[j] = a%10;
//            a = a/10;
//            j--;
//            }
//            if(arr[1] == 1){
//                cout<<1<<0;
//                for(int a = 2;a<=i;a++) cout<<arr[a];
//                }
//                else{
//                    cout<<1;
//                    for(int a = 1;a<=i;a++) cout<<arr[a];
//                    }
//                    cout<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,i=-1;
//        cin>>a;
//        vector<int> vec;
//        while(a!=0){
//            int ele = a%10;
//            a = a/10;
//            vec.push_back(ele);
//            i++;
//            }
//            if(vec[i] == 1){
//                vec[i] = 0;
//                vec.push_back(1);
//                i++;
//                }
//                else{
//                    vec.push_back(1);
//                    i++;
//                    }
//                    for(;i>=0;i--) cout<<vec[i];
//                    cout<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int a,b,c,d;
//        cin>>a>>b>>c>>d;
//        bool flag = true;
//        if((a+c) != 180){
//            flag = false;
//            }
//            if((b+d) != 180) flag = false;
//            if(flag == false) cout<<"NO"<<endl;
//            else cout<<"YES"<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,a,b;
//        cin>>n>>a>>b;
//        int sum = 180+n;
//        int total = 2*sum;
//        cout<<(total-(a+b))<<endl;
//        }
//        return 0;
//    }

//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        unordered_map<string,long long int> mp1;
//        for(int i = 1;i<=3;i++){
//            int fake = n;
//            while(fake--){
//                string s;
//                cin>>s;
//                int times;
//                cin>>times;
//                if(mp1.find(s) == mp1.end()) mp1[s] = times;
//                else mp1[s]+=times;
//                }
//            }
//            vector<long long int> st;
//            for(auto it : mp1){
//                int ele = it.second;
//                st.push_back(ele);
//                }
//                sort(st.begin(),st.end());
//                for(auto it : st) cout<<it<<" ";
//                cout<<endl;
//        }
//        return 0;
//    }

//
//Sleep Cycle
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int l,h,prev_h,one=0;
//        cin>>l>>h;
//        string s;
//        cin>>s;
//        bool flag = false;
//        for(int i = 0;i<s.length();){
//            if(s[i] == '0'){
//                prev_h = h;
//                //h--;
//                while(s[i]=='0'){
//                    h--;
//                    i++;
//                    }
//                    //cout<<h<<endl;
//                    if(h<=0){
//                        flag = true;
//                        break;
//                        }
//                        else{
//                            int diff = prev_h-(prev_h-h);
//                            h = 2*diff;
//                            }
//                }
//                else{
//                    one++;
//                    i++;
//                    }
//            }
//            if(one == 0) cout<<"NO"<<endl;
//            else if(flag == true) cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//        }
//        return 0;
//    }

//Maximum Production
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int d,x,y,z;
//        cin>>d>>x>>y>>z;
//        int first = 7*x;
//        int second = ((d*y)+(7-d)*z);
//        int maxi = max(first,second);
//        cout<<maxi<<endl;
//        }
//        return 0;
//    }

//Relativity
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int g,c;
//        cin>>g>>c;
//        int ans=  ((c*c)/(2*g));
//        cout<<ans<<endl;
//        }
//        return 0;
//    }

