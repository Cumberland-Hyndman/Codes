priority_queue<pair<int,int>> q;
//����ѣ����ȶ��У���pair�ĵڶ���Ϊ�ڵ���
//pair�ĵ�һ��Ϊdist���෴���������෴�����С���ѣ� 
void dijkstra()
{
	memset(d,ox3f,sizeof(d));//dist���� 
	memset(v,0,sizeof(v));//�ڵ���  
	d[1]=0;
	q.push(make_pair(0,1));
	while(q.size())
	{
		int x=q.top().second;
		q.pop;//ȡ���Ѷ� 
		if(v[x]) continue;
		v[x]=1;
		for(int i=head[x];i;i=Next[i])//ɨ�����г��� 
		{
			int y=ver[i],z=edge[i];
		}
		if(d[y]>d[x]+z)
		{
			d[y]=d[x]+z;
			q.push(make_pair(-d[y],y));//Ԫ�ز���� 
		}
	} 
}
