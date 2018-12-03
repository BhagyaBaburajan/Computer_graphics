import java.io.*;

class filewordcount
{
	public static void main(String args[])throws Exception
	{
       	int count = 0;

		FileReader fr = new FileReader ("data.txt");
		BufferedReader r = new BufferedReader (fr);
		String s = r.readLine();

		System.out.println ("No  of Words are ");
		while (s != null)
		{
		       String ln[] = s.split(" ");
		       for( String w : ln)
		       {
				   //System.out.println(w);
				   count++;
		       }
		       s = r.readLine();
		}
		System.out.println(count);
	}
}
