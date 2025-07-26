import java.util.*;
class ArmStrong{
public static void main(String...args){
Scanner s=new Scanner(System.in);
int n=s.nextInt();
int dup=n;
int temp=n;int r=0;
int count=0,sum=0;
while(n>0)
{
count++;
n=n/10;
}
while(temp>0){
r=temp%10;
sum+=Math.pow(r,count);
temp=temp/10;
}
if(dup==sum){
System.out.println("true");
}
else{
System.out.println("false");
}
}
}



