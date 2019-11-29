#include<stdio.h>
int a[100000];
int z = -1;
int empty() {
return (z == -1);
}
void push(int x) {
a[++z] = x;
}
int peek() {
return a[z];
}
int pop() {
return a[z--];
}
int main() {
int x;
scanf("%d",&x);
while(x--) {
int n,k;
scanf("%d %d",&n,&k);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",a+i);
z = -1;
int c=0;
for(int i=0;i<n;i++) {
while(!empty() && (a[i] > peek()) && (c < k)){
pop();
c++;
}
push(a[i]);
}
while(!empty() && c<k){
pop();
c++;
}
int b[n-k],i=n-k-1;
while(!empty()) {
b[i--]=peek();
pop();
}
for(int i=0;i<n-k;i++)
printf("%d ",b[i]);
printf("\n");
}
return 0;
}
