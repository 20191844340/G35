// riqi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int y,m,d,m2;
	printf("输入年月日\n");
	scanf("%d%d%d",&y,&m,&d);
	if(y%4==0&&y%100!=0||y%400==0)
		m2=29;
	else
		m2=28;
	switch(m){
		case 1:printf("%d\n",d);break;
			case 2:printf("%d\n",d+31);break;
				case 3:printf("%d\n",d+31+m2);break;
					case 4:printf("%d\n",d+31+m2+31);break;
						case 5:printf("%d\n",d+31+m2+31+30);break;
							case 6:printf("%d\n",d+31+m2+31+30+31);break;
								case 7:printf("%d\n",d+31+m2+31+30+31+30);break;
									case 8:printf("%d\n",d+31+m2+31+30+31+30+31);break;
										case 9:printf("%d\n",d+31+m2+31+30+31+30+31+31);break;
											case 10:printf("%d\n",d+31+m2+31+30+31+30+31+31+30);break;
												case 11:printf("%d\n",d+31+m2+31+30+31+30+31+31+30+31);break;
													case 12:printf("%d\n",d+31+m2+31+30+31+30+31+31+30+31+30);break;
													default:printf("重新输入\n");}

	

	return 0;
}

