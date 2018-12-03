public class strsort 
{
public static void main(String args[])
{
	int n=args.length;	
int i,j;
	String name[]=new String[n];
	String temp;
	for(i=0;i<n;i++)
		name[i]=args[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{	if(name[i].compareToIgnoreCase(name[j])>0)
			{
temp=name[i];
name[i]=name[j];
name[j]=temp;		
}
			for(i=0;i<n;i++)
				System.out.println(name[i]);
}
}
