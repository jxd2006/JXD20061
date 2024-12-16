int main()
{
    int arr[50]={0};
    int i =0,a=0,b=0,c=0;
    for(i=0;i<50;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<50;i++)
    {
      if(arr[i]==1)
      {
       a++;
      }
      if(arr[i]==2)
      {
       b++;
      }
      if(arr[i]==3)
      {
       c++;
      }
    }
    int sum =1000*a+500*b+200*c+(a/3)*1000+(b/6)*500+(c/10)*200;
    printf("%d",sum);
    return 0;
}

