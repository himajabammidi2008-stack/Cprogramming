/*marks of 5 subjects in integers 
  total in integer
  average in float*/
  #include<stdio.h>
  int main()
  {
  	int s1,s2,s3,s4,s5,total;
  	float avg; 
  	printf("enter five subjects marks");
  	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
  	total=s1+s2+s3+s4+s5;
  	avg=total/5;
  	printf("total of five subjects is=%d",total);
  	printf("average of five subjects=%f",avg);
  	return 0;
  }
  
