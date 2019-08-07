#include<bits/stdc++.h>
using namespace std;
const int LEN=362880;//ʹ�ú㶨�����������ֵ 
struct node//��������ݽṹ���ã�������ǰ״̬�Ͳ��� 
{
	int state[9];
	int dis;
};
int dir[4][2]={{-1,0},{0,-1},{1,0},{0,1}};//���巽�����飬Ҳ�����ϡ��¡����ң�BFS��ʱ��ʹ��
int visited[LEN]={0};//ʹ�����ֵLEN�������飬�ӱ��������ܿ������Ǳ����û���߹���
int start[9];//��ʼ״̬
int goal[9];//Ŀ��״̬
long int factory[]={1,1,2,6,24,120,720,5040,40320,362880};
bool Cantor(int str[],int n)//����ʵ�ֿ���չ���ĺ���
{
	long result=0;//����չ���Ǽ���cantorֵ�ģ�����Ҫ�д𰸱���
	for(int i=0;i<n;i++)
	{
		int counted=0;//ÿ��ѭ������counted��������
		for(int j=i+1;j<n;j++)//��һ�µ�ǰ״̬ǰ���״̬�����������ڱȽ���ɺ����
		{
			if(str[i]>str[j])
			{
				++counted;
			}
		}	
		result+=counted*factory[n-i-1];//����result 
	} 
	if(!visited[result])//�����һ��û���߹� 
	{
		visited[result]=1;//�Ͱ������Ϊ�߹� 
		return 1;
	}
	else return 0;
}
int bfs()//bfs���� 
{
	node head;//����ṹ�壺head 
	memcpy(head.state,start,sizeof(head.state));//ʹ��memcpy������start����copy��head�� 
	head.dis=0;//��ʼֵ 
	queue<node> q;
	Cantor(head.state,9);
	q.push(head);
	while(!q.empty())//�����в�Ϊ��ʱ�� 
	{
		head=q.front();//ȡ���еĶ���һ�� 
		q.pop();
		int z;
		for(z=0;z<9;z++)
		{
			if(head.state[z]==0)
			{
				break;
			}
		}
		int x=z%3;
		int y=z/3;
		for(int i=0;i<4;i++)
		{
			int newx=x+dir[i][0];
			int newy=y+dir[i][1];
			int nz=newx+3*newy;
			if(newx>=0 && newx<3 && newy>=0 &&newy<3)
			{
				node newnode;
				memcpy(&newnode,&head,sizeof(struct node));
				swap(newnode.state[z],newnode.state[nz]);
				newnode.dis++;
				if(memcmp(newnode.state,goal,sizeof(goal))==0) return newnode.dis;
				if(Cantor(newnode.state,9)) q.push(newnode);
			}
		}
	}
	return -1;
} 
int main()
{
	for(int i=0;i<9;i++) cin>>start[i];//������ʼ״̬ 
	for(int i=0;i<9;i++) cin>>goal[i];//�����ص㡢Ŀ��״̬ 
	int num=bfs();//����bfs���� 
	if(num!=-1) cout<<num<<endl;//���������Ч����������� 
	else cout<<"Impossible"<<endl;//������ж�Ϊimpossible 
	return 0;
}
