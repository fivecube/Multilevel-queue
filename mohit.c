#include<stdio.h>
#include<conio.h>
void main()
{
    int sp[10],pi[10],iep[10],stp[10],bp[10];
    int ps[10],ip[10],pei[10],pts[10],pb[10];
    int s=0,i=0,p=0,st=0,b=0;
    int j,k,l,m,n,tatsp=0,tatpi=0,tatiep=0,flag=1; //loop counter j,m


    while(flag!=0)
    {
    printf("choose:1)sp 2)pi 3)iep 4)stp 5)bp 6)Exit");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            printf("type id");
            scanf("%d",&k);
            sp[s]=k;
            printf("exe time");
            scanf("%d",&l);
            ps[s]=l;
            s++;
            tatsp+=l;
            break;

        }
    case 2:
        {
            printf("type id");
            scanf("%d",&k);
            pi[i]=k;
            printf("exe time");
            scanf("%d",&l);
            ip[i]=l;
            i++;
            tatpi+=l;
            break;

        }
   case 3:
        {
            printf("type id");
            scanf("%d",&k);
            iep[p]=k;
            printf("exe time");
            scanf("%d",&l);
            pei[p]=l;
            p++;
            tatiep+=l;
            break;

        }
    case 4:
        {
            printf("type id");
            scanf("%d",&k);
            stp[st]=k;
            printf("exe time");
            scanf("%d",&l);
            pts[st]=l;
            st++;
            break;
        }
    case 5:
        {
            printf("type id");
            scanf("%d",&k);
            bp[b]=k;
            printf("exe time");
            scanf("%d",&l);
            pb[b]=l;
            b++;
            break;
        }
    case 6:
        {
            flag=0;
            break;
        }
    default:
        {printf("wrong entry");
        break;}
    }
    }
/*for(j=0;j<p;j++)
{
    printf("IEP%d",iep[j]);
}*/
    //main
while(tatsp!=0)
    {for(j=0;j<s;j++)
        {if(ps[j]<3)
        {
        while(ps[j]!=0)
           {
            printf("-SP%d",sp[j]);
            ps[j]--;
            tatsp--;
           }
        }
        else
        {
            for(m=0;m<3;m++)
           {
           printf("-SP%d",sp[j]);
            tatsp--;
           } ps[j]-=3;
        }

        }

    }printf("\n");
while(tatpi!=0)
{
    {for(j=0;j<i;j++)
        {if(ip[j]<3)
        {
        while(ip[j]!=0)
           {
            printf("-PI%d",pi[j]);
            ip[j]--;
            tatpi--;
           }
        }
        else
        {
            for(m=0;m<3;m++)
           {
           printf("-PI%d",pi[j]);
            tatpi--;
           } ip[j]-=3;
        }
        }
    }

}printf("\n");
while(tatiep!=0)
{
    {for(j=0;j<p;j++)
        {if(pei[j]<3)
        {
        while(pei[j]!=0)
           {
            printf("-IEP%d",iep[j]);
            pei[j]--;
            tatiep--;
           }
        }
        else
        {
            for(m=0;m<3;m++)
           {
           printf("-IEP%d",iep[j]);
            tatiep--;
           } pei[j]-=3;
        }
        }
    }

}printf("\n");

for(j=0;j<st;j++)
{ for(m=0;m<pts[j];m++)
    {
        printf("-STP%d",stp[j]);
    }
}
printf("\n");

for(j=0;j<b;j++)
{ for(m=0;m<pb[j];m++)
    {
        printf("-BP%d",bp[j]);
    }
}
}
