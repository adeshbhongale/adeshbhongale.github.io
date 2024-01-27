#include<stdio.h>
int main()
{
	int frame,window,ap,i,ack;
	printf("Enter the frame size:");
	scanf("%d",&frame);
	printf("Enter the window size:");
	scanf("%d",&window);
	ap=frame/window;
	
	for(i=0;i<window;i++)
	{
		printf("Frame %d sends\n",i);
	}
	
	printf("Ack is received or not(yes=1 or no=0):\nWaiting :");
	  scanf("%d",&ack);
    while(1){
 	 if(ack==0)
	  {
	  	printf("Resend:\n");
	  	for(i=ack;i<window;i++)
	  	{
	 	 	printf("Frame %d send\n",i);	
  		}
	  	Sleep(1000);
	  }
	  else if(ack==1)
	  {
	  	for(i=ack;i<window;i++){
	  	printf("Frame %d Sucessfully sent and received\n",ack);
	  	ack++;
	  }
	  printf("All frames are sucessful");
  	}
 return 0;

}}

