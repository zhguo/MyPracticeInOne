#include "..\CommenHead.h"

static void TOMOYOafterDEMO()
{
	ScriptInfo TOMOYOafterDEMO;
	strcpy_s(TOMOYOafterDEMO.GETopenfileCN,"--");
	strcpy_s(TOMOYOafterDEMO.GETopenfileJP,"TOMOYOafterDEMO_k.txt");
	strcpy_s(TOMOYOafterDEMO.GETopenfileJPrm,"--");
	strcpy_s(TOMOYOafterDEMO.GETopenfileROCK,"--");
	strcpy_s(TOMOYOafterDEMO.GETsavefile,"TOMOYOafterDEMO.ass");
	strcpy_s(TOMOYOafterDEMO.GETkaraokefile,"TOMOYO_DEMO.ass");
	strcpy_s(TOMOYOafterDEMO.GETtempfile,"TOMOYOafterDEMOTemp.txt");
	strcpy_s(TOMOYOafterDEMO.Title,"TOMOYOafter_DEMO");
	TOMOYOafterDEMO.PlayResX=640;
	TOMOYOafterDEMO.PlayResY=480;
	TOMOYOafterDEMO.SynchPoint=0;
	TOMOYOafterDEMO.FontAmount=1;
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].Name,"JP1");
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].Fontname,"�Ķ�������");
	TOMOYOafterDEMO.FontInfo[0].Fontsize=22;
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].PrimaryColour,"E49B08");
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].SecondaryColour,"000000");
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].OutlineColour,"FDFFFB");
	strcpy_s(TOMOYOafterDEMO.FontInfo[0].BackColour,"666666");
	TOMOYOafterDEMO.FontInfo[0].Bold=0;
	TOMOYOafterDEMO.FontInfo[0].Italic=0;
	TOMOYOafterDEMO.FontInfo[0].Underline=0;
	TOMOYOafterDEMO.FontInfo[0].StrikeOut=0;
	TOMOYOafterDEMO.FontInfo[0].ScaleX=120;
	TOMOYOafterDEMO.FontInfo[0].ScaleY=100;
	TOMOYOafterDEMO.FontInfo[0].Spacing=0;                      //���
	TOMOYOafterDEMO.FontInfo[0].Angle=0;                        //��б��
	TOMOYOafterDEMO.FontInfo[0].BorderStyle=1;                  //�߿���ʽ:ȡֵ1,����;ȡֵ3,��һ��������
	TOMOYOafterDEMO.FontInfo[0].Outline=2;                      //�߿����:ȡֵ��Χ1-4,����Խ��߿�Խ��
	TOMOYOafterDEMO.FontInfo[0].Shadow=2;                       //��Ӱ����:ȡֵ��Χ0-4,����Խ����ӰԽ��
	TOMOYOafterDEMO.FontInfo[0].Alignment=5;                    //���뷽ʽ1-11
	TOMOYOafterDEMO.FontInfo[0].MarginL=30;
	TOMOYOafterDEMO.FontInfo[0].MarginR=30;
	TOMOYOafterDEMO.FontInfo[0].MarginV=30;
	TOMOYOafterDEMO.FontInfo[0].Encoding=1;

	ChineseWordWidth=24;
	EdgeDistanceX=15;
	EdgeDistanceY=40;

	Start(TOMOYOafterDEMO,21);//��18��
	system("PAUSE");

	/*��ΰ���*/
	/*
	����:3000-3999(�ְ�:3000-3499;3500-3999)
	ǿ��:4000-4999(�ְ�:4000-4499;4500-4999)
	����:2000-2999(�ְ�:2000-2499;2500-2999)
	�˳�:1000-1999(�ְ�:1000-1499;1500-1999)
	����:1-999
	*/
	short Count0=0,Count1=0,Count2=0,Count3=0,Count4=0,Count5=0,Count6=0,Count7=0,Count8=0,Count9=0;
	long Count10=10,Count11=0;

	//JP
	for(Count0=0;Count0<18;Count0++)//(0-9)����ѭ��Part1(blur+Alpha+fsc)
	{
		Count3=4999;
		for(Count1=0;Count1<AmountJP[Count0];Count1++)//��ѭ��
		{
			Count2=3000+Count1;//��¼�������
			/*����*/
			LineBegin(Count2,itc(TimeJP[Count0][Count1][0]-50),itc(TimeJP[Count0][Count1][1]-50),TOMOYOafterDEMO.FontInfo[0].Name);
			{
				StyleBegin();
				pos(PosJP[Count0][Count1][0],PosJP[Count0][Count1][1]);
				Na(1,255);Na(2,255);Na(3,255);Na(4,255);
				blur(20);
				tBegin();
				{
					blur(2);
					Na(3,0);
					Na(4,0);
				}tEnd();
				StyleEnd();
			}LineEnd(WordDetailJP[Count0][Count1]);//blur����
			Count2=3500+Count1;//��¼�������
			LineBegin(Count2,itc(TimeJP[Count0][Count1][0]),itc(TimeJP[Count0][Count1][1]),TOMOYOafterDEMO.FontInfo[0].Name);
			{
				StyleBegin();
				pos(PosJP[Count0][Count1][0],PosJP[Count0][Count1][1]);
				Na(1,255);Na(2,255);Na(3,255);Na(4,255);
				blur(2);
				tBegin();
				{
					Na(1,0);
				}tEnd();
				StyleEnd();
			}LineEnd(WordDetailJP[Count0][Count1]);//���Ĳ���
			/*�˳�*/
			Count2=1000+Count1;
			LineBegin(Count2,itc(TimeJP[Count0][Count1][4]-50),itc(TimeJP[Count0][Count1][5]-50),TOMOYOafterDEMO.FontInfo[0].Name);
			{
				StyleBegin();
				pos(PosJP[Count0][Count1][0],PosJP[Count0][Count1][1]);
				Na(1,255);Na(2,255);Na(3,0);Na(4,0);
				blur(2);
				tBegin();
				{
					blur(20);
					Na(3,255);Na(4,255);
				}tEnd();
				StyleEnd();
			}LineEnd(WordDetailJP[Count0][Count1]);//blur����
			Count2=1500+Count1;//��¼�������
			LineBegin(Count2,itc(TimeJP[Count0][Count1][4]),itc(TimeJP[Count0][Count1][5]),TOMOYOafterDEMO.FontInfo[0].Name);
			{
				StyleBegin();
				pos(PosJP[Count0][Count1][0],PosJP[Count0][Count1][1]);
				Na(1,0);Na(2,255);Na(3,255);Na(4,255);
				Nc(1,"B32197");
				tBegin();
				{
					Na(1,255);
				}tEnd();
				StyleEnd();
			}LineEnd(WordDetailJP[Count0][Count1]);//���Ĳ���
			/*ǿ��&����*/
			Count2=4000+Count2;
			LineBegin(Count2,itc(TimeJP[Count0][Count1][1]-50),itc(TimeJP[Count0][Count1][4]-50),TOMOYOafterDEMO.FontInfo[0].Name);
			{
				StyleBegin();
				pos(PosJP[Count0][Count1][0],PosJP[Count0][Count1][1]);
				Na(1,255);Na(2,255);
				blur(2);
				StyleEnd();
			}LineEnd(WordDetailJP[Count0][Count1]);//blur���ֱ���
			Count2=2000+Count1;//��¼�������
			LineBegin(Count2,itc(TimeJP[Count0][Count1][1]),itc(TimeJP[Count0][Count1][2]),TOMOYOafterDEMO.FontInfo[0].Name);
			{
				StyleBegin();
				pos(PosJP[Count0][Count1][0],PosJP[Count0][Count1][1]);
				Na(3,255);Na(4,255);
				StyleEnd();
			}LineEnd(WordDetailJP[Count0][Count1]);//���Ĳ��ֱ���Part1
			LineBegin(Count2,itc(TimeJP[Count0][Count1][3]),itc(TimeJP[Count0][Count1][4]),TOMOYOafterDEMO.FontInfo[0].Name);
			{
				StyleBegin();
				pos(PosJP[Count0][Count1][0],PosJP[Count0][Count1][1]);
				Nc(1,"B32197");
				Na(3,255);Na(4,255);
				StyleEnd();
			}LineEnd(WordDetailJP[Count0][Count1]);//���Ĳ��ֱ���Part2
			LineBegin((5500+Count1),itc(TimeJP[Count0][Count1][2]),itc(TimeJP[Count0][Count1][3]),TOMOYOafterDEMO.FontInfo[0].Name);
			{
				StyleBegin();
				pos(PosJP[Count0][Count1][0],PosJP[Count0][Count1][1]);
				Na(3,255);Na(4,255);
				tBegin();
				{
					fsc(200);
					Nc(1,"B32197");
					Na(1,150);
				}tEnd();
				fad(0,10);
				StyleEnd();
			}LineEnd(WordDetailJP[Count0][Count1]);//���Ĳ���ǿ��Part1
			//Count4=(short)TimeJP[Count0][Count1][3]-(short)TimeJP[Count0][Count1][2];//����ǿ��ʱ��Ĳ�ֵ
			LineBegin((4000+Count1),itc(TimeJP[Count0][Count1][3]-10),itc(TimeJP[Count0][Count1][3]),TOMOYOafterDEMO.FontInfo[0].Name);
			{
				StyleBegin();
				pos(PosJP[Count0][Count1][0],PosJP[Count0][Count1][1]);
				Nc(1,"B32197");Na(1,255);Na(3,255);Na(4,255);
				tBegin();
				{
					Na(1,0);
				}tEnd();
				StyleEnd();
			}LineEnd(WordDetailJP[Count0][Count1]);//���Ĳ���ǿ��Part1
		}
	}
}