int binarysearch(int a[],int l,int u,int x)
{
if(n==0)
{
return 0;
}

int mid=(l+u)/2;
if(a[mid]==x)
{
return 1;
}
if(a[mid]>x)
{
return binarysearch(a,l,mid-1,x);
}
else if(a[mid]<x)
{
return binarysearch(a,mid+1,u,x)
}

return -1;
}
