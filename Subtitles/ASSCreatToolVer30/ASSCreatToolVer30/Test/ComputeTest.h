#include "..\CommenHead.h"

/*static void ComputeTest()
{
	for(short OMG=0;OMG<26;OMG++)
	{
		EnglishWordWidthB[OMG]=11;
		EnglishWordWidthL[OMG]=11;
	}
	ChineseWordWidth=30;
	EdgeDistanceX=30;
	EdgeDistanceY=30;
	GetdataTest();
	Compute(11);
	short Count1,Count2;
	ass_temp<<endl;
	ass_temp<<"LineAmount:"<<endl;
	ass_temp<<LineAmount<<endl;
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"WordDetailJP"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountJP[Count1];Count2++)//JP
		{
			ass_temp<<"WordDetailJP["<<Count1<<"]["<<Count2<<"]="<<WordDetailJP[Count1][Count2]<<endl;
		}
		for(Count2=0;Count2<AmountCN[Count1];Count2++)//CN
		{
			ass_temp<<"WordDetailCN["<<Count1<<"]["<<Count2<<"]="<<WordDetailCN[Count1][Count2]<<endl;
		}
	}
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"AmountJP:"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		ass_temp<<"AmountJP["<<Count1<<"]="<<AmountJP[Count1]<<endl;
	}
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"AmountCN:"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		ass_temp<<"AmountCN["<<Count1<<"]="<<AmountCN[Count1]<<endl;
	}
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"TimeJP:"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountJP[Count1];Count2++)
		{
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][0]="<<itc(TimeJP[Count1][Count2][0])<<endl;
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][1]="<<itc(TimeJP[Count1][Count2][1])<<endl;
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][2]="<<itc(TimeJP[Count1][Count2][2])<<endl;
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][3]="<<itc(TimeJP[Count1][Count2][3])<<endl;
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][4]="<<itc(TimeJP[Count1][Count2][4])<<endl;
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][5]="<<itc(TimeJP[Count1][Count2][5])<<endl;
			ass_temp<<endl;
		}
	}
	ass_temp<<endl;
	ass_temp<<endl;	
	ass_temp<<"TimeCN:"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountCN[Count1];Count2++)
		{
			ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][0]="<<itc(TimeCN[Count1][Count2][0])<<endl;
			ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][1]="<<itc(TimeCN[Count1][Count2][1])<<endl;
			ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][2]="<<itc(TimeCN[Count1][Count2][2])<<endl;
			ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][3]="<<itc(TimeCN[Count1][Count2][3])<<endl;
			ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][4]="<<itc(TimeCN[Count1][Count2][4])<<endl;
			ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][5]="<<itc(TimeCN[Count1][Count2][5])<<endl;
			ass_temp<<endl;
		}
	}
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"LineLenthJP:"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		ass_temp<<"LineLenthJP["<<Count1<<"]="<<LineLenthJP[Count1]<<endl;
	}
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"LineLenthCN:"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		ass_temp<<"LineLenthCN["<<Count1<<"]="<<LineLenthCN[Count1]<<endl;
	}
	system("PAUSE");
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"WordLenthJP"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountJP[Count1];Count2++)
		{
			ass_temp<<"WordLenthJP["<<Count1<<"]["<<Count2<<"]="<<WordLenthJP[Count1][Count2]<<endl;
		}
	}
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"WordLenthCN"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountCN[Count1];Count2++)
		{
			ass_temp<<"WordLenthCN["<<Count1<<"]["<<Count2<<"]="<<WordLenthCN[Count1][Count2]<<endl;
		}
	}
	system("PAUSE");
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"PosJP"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountJP[Count1];Count2++)
		{
			ass_temp<<"PosJP["<<Count1<<"]["<<Count2<<"][0]="<<PosJP[Count1][Count2][0]<<endl;
			ass_temp<<"PosJP["<<Count1<<"]["<<Count2<<"][1]="<<PosJP[Count1][Count2][1]<<endl;
		}
		ass_temp<<endl;
	}
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"PosCN"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountCN[Count1];Count2++)
		{
			ass_temp<<"PosCN["<<Count1<<"]["<<Count2<<"][0]="<<PosCN[Count1][Count2][0]<<endl;
			ass_temp<<"PosCN["<<Count1<<"]["<<Count2<<"][1]="<<PosCN[Count1][Count2][1]<<endl;
		}
		ass_temp<<endl;
	}
}*/

static void ComputeTest()
{
	short Count1,Count2;
	ass_temp<<endl;
	ass_temp<<"LineAmount:"<<endl;
	ass_temp<<LineAmount<<endl;
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"WordDetailJP"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountJP[Count1];Count2++)//JP
		{
			ass_temp<<"WordDetailJP["<<Count1<<"]["<<Count2<<"]="<<WordDetailJP[Count1][Count2]<<endl;
		}
		if(FileMode==1||FileMode==3||FileMode==5||FileMode==7)
		{
			for(Count2=0;Count2<AmountCN[Count1];Count2++)//CN
			{
				ass_temp<<"WordDetailCN["<<Count1<<"]["<<Count2<<"]="<<WordDetailCN[Count1][Count2]<<endl;
			}
		}
	}
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"AmountJP:"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		ass_temp<<"AmountJP["<<Count1<<"]="<<AmountJP[Count1]<<endl;
	}
	if(FileMode==1||FileMode==3||FileMode==5||FileMode==7)
	{
		ass_temp<<endl;
		ass_temp<<endl;
		ass_temp<<"AmountCN:"<<endl;
		for(Count1=0;Count1<LineAmount;Count1++)
		{
			ass_temp<<"AmountCN["<<Count1<<"]="<<AmountCN[Count1]<<endl;
		}
	}
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"TimeJP:"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountJP[Count1];Count2++)
		{
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][0]="<<itc(TimeJP[Count1][Count2][0])<<endl;
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][1]="<<itc(TimeJP[Count1][Count2][1])<<endl;
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][2]="<<itc(TimeJP[Count1][Count2][2])<<endl;
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][3]="<<itc(TimeJP[Count1][Count2][3])<<endl;
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][4]="<<itc(TimeJP[Count1][Count2][4])<<endl;
			ass_temp<<"TimeJP["<<Count1<<"]["<<Count2<<"][5]="<<itc(TimeJP[Count1][Count2][5])<<endl;
			ass_temp<<endl;
		}
	}
	ass_temp<<endl;
	ass_temp<<endl;	
	if(FileMode==1||FileMode==3||FileMode==5||FileMode==7)
	{
		ass_temp<<"TimeCN:"<<endl;
		for(Count1=0;Count1<LineAmount;Count1++)
		{
			for(Count2=0;Count2<AmountCN[Count1];Count2++)
			{
				ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][0]="<<itc(TimeCN[Count1][Count2][0])<<endl;
				ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][1]="<<itc(TimeCN[Count1][Count2][1])<<endl;
				ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][2]="<<itc(TimeCN[Count1][Count2][2])<<endl;
				ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][3]="<<itc(TimeCN[Count1][Count2][3])<<endl;
				ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][4]="<<itc(TimeCN[Count1][Count2][4])<<endl;
				ass_temp<<"TimeCN["<<Count1<<"]["<<Count2<<"][5]="<<itc(TimeCN[Count1][Count2][5])<<endl;
				ass_temp<<endl;
			}
		}
	}
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"LineLenthJP:"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		ass_temp<<"LineLenthJP["<<Count1<<"]="<<LineLenthJP[Count1]<<endl;
	}
	if(FileMode==1||FileMode==3||FileMode==5||FileMode==7)
	{
		ass_temp<<endl;
		ass_temp<<endl;
		ass_temp<<"LineLenthCN:"<<endl;
		for(Count1=0;Count1<LineAmount;Count1++)
		{
			ass_temp<<"LineLenthCN["<<Count1<<"]="<<LineLenthCN[Count1]<<endl;
		}
	}
	system("PAUSE");
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"WordLenthJP"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountJP[Count1];Count2++)
		{
			ass_temp<<"WordLenthJP["<<Count1<<"]["<<Count2<<"]="<<WordLenthJP[Count1][Count2]<<endl;
		}
	}
	ass_temp<<endl;
	ass_temp<<endl;
	if(FileMode==1||FileMode==3||FileMode==5||FileMode==7)
	{
		ass_temp<<"WordLenthCN"<<endl;
		for(Count1=0;Count1<LineAmount;Count1++)
		{
			for(Count2=0;Count2<AmountCN[Count1];Count2++)
			{
				ass_temp<<"WordLenthCN["<<Count1<<"]["<<Count2<<"]="<<WordLenthCN[Count1][Count2]<<endl;
			}
		}
	}
	system("PAUSE");
	ass_temp<<endl;
	ass_temp<<endl;
	ass_temp<<"PosJP"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
		for(Count2=0;Count2<AmountJP[Count1];Count2++)
		{
			ass_temp<<"PosJP["<<Count1<<"]["<<Count2<<"][0]="<<PosJP[Count1][Count2][0]<<endl;
			ass_temp<<"PosJP["<<Count1<<"]["<<Count2<<"][1]="<<PosJP[Count1][Count2][1]<<endl;
		}
		ass_temp<<endl;
	}
	ass_temp<<endl;
	ass_temp<<endl;
	if(FileMode==1||FileMode==3||FileMode==5||FileMode==7)
	{
	ass_temp<<"PosCN"<<endl;
	for(Count1=0;Count1<LineAmount;Count1++)
	{
			for(Count2=0;Count2<AmountCN[Count1];Count2++)
			{
				ass_temp<<"PosCN["<<Count1<<"]["<<Count2<<"][0]="<<PosCN[Count1][Count2][0]<<endl;
				ass_temp<<"PosCN["<<Count1<<"]["<<Count2<<"][1]="<<PosCN[Count1][Count2][1]<<endl;
			}
			ass_temp<<endl;
		}
	}
}