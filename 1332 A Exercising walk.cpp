/*Alice has a cute cat. To keep her cat fit, Alice wants to design an exercising walk for her cat!

Initially, Alice's cat is located in a cell  of an infinite grid. According to Alice's theory, cat needs to move:

exactly  steps left: from  to ;
exactly  steps right: from  to ;
exactly  steps down: from  to ;
exactly  steps up: from  to .
Note that the moves can be performed in an arbitrary order. For example, if the cat has to move  step left,  steps right and  steps down, then the walk right, down, left, right, right, down is valid.

Alice, however, is worrying that her cat might get lost if it moves far away from her. So she hopes that her cat is always in the area , i.e. for every cat's position  of a walk  and  holds.

Also, note that the cat can visit the same cell multiple times.

Can you help Alice find out if there exists a walk satisfying her wishes?

Formally, the walk should contain exactly  unit moves ( to the left,  to the right,  to the down,  to the up). Alice can do the moves in any order. Her current position  should always satisfy the constraints: , . The staring point is .

You are required to answer  test cases independently.

Input
The first line contains a single integer  () — the number of testcases.

The first line of each test case contains four integers , , ,  (, ).

The second line of the test case contains six integers , , , , ,  (, ).

Output
For each test case, output "YES" in a separate line, if there exists a walk satisfying her wishes. Otherwise, output "NO" in a separate line.

You can print each letter in any case (upper or lower).

Example
inputCopy
6
3 2 2 2
0 0 -2 -2 2 2
3 1 4 1
0 0 -1 -1 1 1
1 1 1 1
1 1 1 1 1 1
0 0 0 1
0 0 0 0 0 1
5 1 1 1
0 0 -100 -100 0 100
1 1 5 1
0 0 -100 -100 100 0
outputCopy
Yes
No
No
Yes
Yes
Yes
*/

#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while (t--){
         int a,b,c,d,x,y,x1,y1,x2,y2,xx,yy;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        xx=x,yy=y;
        x+=-a+b, y+=-c+d;
        if (x>=x1&&x<=x2&&y>=y1&&y<=y2&&(x2>x1||a+b==0)&&(y2>y1||c+d==0)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}