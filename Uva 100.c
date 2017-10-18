//Bismillahir Rahmanir Rahim
#include<stdio.h>
int arr[1000000];
int main()
{
	int x,y,z,i,t,n,temp;
	while(scanf("%d %d",&x,&y)!=EOF){
		if(x>y){
			for(i=x;i>=y;i--){
				arr[i]=0;
			}
			for(i=x;i>=y;i--){
				n=i;
				while(n!=1){
					if(n%2==1){
						n=3*n+1;
					}
					else{
						n=n/2;
					}
					arr[i]++;
				}
				arr[i]++;
			}
			temp=arr[x];
			for(i=x-1;i>=y;i--){
				if(arr[i]>temp){
					temp=arr[i];
				}
			}
		}
		else{
			for(i=x;i<=y;i++){
				arr[i]=0;
			}
			for(i=x;i<=y;i++){
				n=i;
				while(n!=1){
					if(n%2==1){
						n=3*n+1;
					}
					else{
						n=n/2;
					}
					arr[i]++;
				}
				arr[i]++;
			}
			temp=arr[x];
			for(i=x+1;i<=y;i++){
				if(arr[i]>temp){
					temp=arr[i];
				}
			}
		}
		printf("%d %d %d\n",x,y,temp);
	}
	return 0;
}
