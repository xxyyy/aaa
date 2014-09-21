#include<iostream>
using namespace std;
class node
{
public:	int id;
	int nextid;
	node *next;
};
int main()
{
	node *h=new(node),*p,*e;
	int a[10000],n;
	cin>>n;
	int i;
	int k;
	for(i=1;i<=n;++i)
	{
		p=new(node);
		p->id=i;
		cin>>k;
		if(i==1)
		{
			//h->id=1;
			p->next=0;
			p->nextid=-1;
			h=p;
			e=h;
		}
		else
		{
			if(k==0)
			{
			//	p=new(node);
			//	p->id=i;
				p->next=h;
				p->nextid=h->id;
				h=p;
			}
			if(k==1)
			{
			//	p=new(node);
			//	p->id=i;
				p->next=0;
				p->nextid=-1;
				e->next=p;
				e->nextid=p->id;
				e=p;
			}
		}
	}
	p=h;
	for(i=1;i<=n;++i)
	{
		/*cout<<p->id<<endl;
		p=p->next;*/
		a[p->id]=p->nextid;
		p=p->next;
	}
	for(i=1;i<=n;++i) cout<<a[i]<<endl;
	return 0;
}
