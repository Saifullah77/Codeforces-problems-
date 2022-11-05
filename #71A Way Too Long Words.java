import java.util.Scanner;
public class a {
    public static void main(String[] args)  {
 Scanner scan = new Scanner(System.in);
 int n=scan.nextInt();String q;for(int i=0;i<n;i++)
 {
    q = scan.next();
    int l=q.length();
    System.out.println((l>10)?q.charAt(0)+""+(l-2)+""+q.charAt(l-1):q);
}
}
}