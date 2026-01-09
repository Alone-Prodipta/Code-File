 int i=0,x=10,sum=1,t=1;;
    for(int i=2;i<=10;i+=2)
    {
        int p= pow(x,i);
        int fact=1;
        for(int j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        int div= p/fact;
        div= div*t;
        sum+= div;
        t=(-1)*t;
    }
    printf("%d",sum);