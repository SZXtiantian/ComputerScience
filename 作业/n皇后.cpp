#include<stdio.h>
#include<math.h>
int rank[15];//pos��i�� 
bool vis[15];//��ǵ�i���Ƿ��߹�
int n,cnt=0;
void dfs(int pos){
 if(pos==n+1){
  bool flag=true;
  for(int i=1;i<=n;i++){
   bool flag2=true;
   for(int j=i+1;j<=n;j++){//ö�����������ʺ� 
    if(abs(i-j)==abs(rank[i]-rank[j])){//�����ʺ���һ���Խ��� 
     flag=false;
     flag2=false;
     break;
    }
   }
   if(flag2==false) break;//���һ����������Խ��������������ϣ���ֱ������ѭ�� 
  }
  if(flag) cnt++;
  return;
 }
 for(int i=1;i<=n;i++){//ö��ÿһ�� 
  if(vis[i]==false){//��i��û�߹� 
   rank[pos]=i;//pos����i�� 
   vis[i]=true;
   dfs(pos+1);//�ݹ���һ�� 
   vis[i]=false;
  }
 }
}
int main(){
	printf("������ʺ������\n");
	scanf("%d",&n);
 	dfs(1);//�ӵ�һ�п�ʼö�� 
 	printf("����%d�ʺ�İڷ���%d�֡�\n",n,cnt);
 	//printf("%d",cnt);
	return 0;
}



