#include<iostream>
#include<utility> /* To work with pairs we need to include this header file*/
using namespace std;
int main(){
    /* Pairs of integers */
    pair<int,int>p = {1,2};
    cout<<p.first<<endl; /* output = 1 */
    cout<<p.second<<endl; /* output = 2 */
   
    /* paris of  int and char*/
    pair<int,char> t = {1,'c'};
    cout<<t.first<<endl; /* output = 1 */
    cout<<t.second<<endl; /* output = c */

   /* Nested pairs */
   pair<int, pair<int,int>> x = {1,{2,3}};
   cout<<x.first<<endl; /* output = 1 */
   cout<<x.second.first<<endl; /* output = 2 */
   cout<<x.second.second<<endl; /* output = 3 */

   /* storing pairs in array */
   pair<int ,int> g[] = {{1,5},{2,3},{8,9}};
   cout<<g[1].first<<endl; /* output = 2 */
   cout<<g[1].second<<endl; /* output = 3 */

   return 0;
}

