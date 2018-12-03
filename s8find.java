import java.applet.*;
import java.awt.*;
import java.util.*;
import java.awt.event.*;
/* <applet code=s8find width=500 height=500>
   </applet>
*/
public class s8find extends Applet implements ActionListener
{
	Button b1;
	TextField t2,t3;
	TextArea t1;
	Label l1,l2,l3;
	int c;
	public void init()
	{
		setBackground(Color.green);
		setForeground(Color.blue);
		l1=new Label("TEXT");
		l2=new Label("FIND");
		l3=new Label("REPLACE");
		add(l1);add(l2);add(l3);
		t1=new TextArea();
		t2=new TextField();
		t3=new TextField();
		add(t1);add(t2);add(t3);

		b1=new Button("OK");

		add(b1);

		setLayout(null);
		l1.setBounds(10,10,50,40);
		l2.setBounds(10,60,50,40);
		l3.setBounds(10,120,50,40);
		t1.setBounds(200,10,400,40);
		t2.setBounds(200,60,400,40);
		t3.setBounds(200,120,400,40);

		b1.setBounds(150,200,100,50);

		b1.addActionListener(this);

	}

	public void actionPerformed(ActionEvent ae)
	{
		int i,l1,l2;
		String s1,s2,s3,t;
		s1=t1.getText();
		s2=t2.getText();
		s3=t3.getText();
		l1=s1.length();
		l2=s2.length();
	/*	for(i=0;i<(l1-l2+1);i++)
		{
			t=s1.substring(i,i+l2);
			if(s2.equalsIgnoreCase(t))
			{
				t1.replaceRange(s3,i,i+l2);
			}
		}*/


		 i=s1.indexOf(s2);
	//	 if((s1.substring(i,i+l2)).equals('\0'))
	//	 {
	//	 }
	//	 else
		 {
			t1.replaceRange(s3,i,i+l2);
		}


	}
}
