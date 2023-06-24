#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct soru
{
	int soru_ID[10] ;
	char soru_metni[10][250] ;
	char sik_A[10][250] ;
	char sik_B[10][250] ;
	char sik_C[10][250] ;
	char sik_D[10][250] ;
	char dogru_cevap[10][10] ;
};

main(void)
{
	int a=0,puanlar[10];
	FILE *mama;
	char isimler[10][50];
	
	struct soru soru;
	while(a!=6)
	{	
		char sorum[100],a_sikki[100],b_sikki[100],c_sikki[100],d_sikki[100],cevap[5],cevapplar[7][5],f,g,isim[50],gecici_isim[5][50];
		int x,i=6,k=0,s=2,id,idler[6],puan=0,h,gecici,z;
		char dizi[11]={'0','1','2','3','4','5','6','7','8','9','10'};
		printf("\n\nTest Oyunu Uygulamasi\n\n");
		printf("1.Soru Ekle\n2.Soru Sil\n3.Sorulari Goster Ve Guncelle\n4.Oyun Oyna\n5.En Yuksek Skorlari Goster\n6.Cik\n\nNumara Girin:\n");
		scanf("%d",&a);
		gets(sorum);
		
		switch(a)
		{
			case 1:
			{	
				//soru metni ekleme kýsmý
				printf("\nSoru metnini giriniz:\n");
				gets(sorum);
				for(x=1;x<=10;x++)
				{	
					if(soru.soru_metni[x][0] != 'S')
					{	
						soru.soru_metni[x][0]='S';
						soru.soru_metni[x][1]='O';
						soru.soru_metni[x][2]='R';
						soru.soru_metni[x][3]='U';
						soru.soru_metni[x][4]= dizi[x] ;
						soru.soru_metni[x][5]=':';
						while(sorum[i-6]!=NULL)
						{
							soru.soru_metni[x][i]= sorum[i-6] ;
							i++ ;
						}
						soru.soru_metni[x][i]='?' ;
						mama=fopen("C:/Users/Utku/Desktop/C_Kodlarým/Sorular.txt","a");
						fprintf(mama,"Soru%d:",x);
						fputs(sorum,mama);
						fprintf(mama,"?\n");
						fclose(mama);
						break ;
					}
				}
				
				//þýklarý ekleme kýsmý
				
				printf("\nA sikki:\n");
				gets(a_sikki);
				for(x=1;x<=10;x++)
				{
					if(soru.sik_A[x][0] != 'A')
					{
						soru.sik_A[x][0]='A';
						soru.sik_A[x][1]=')';
						while(a_sikki[s-2]!=NULL)
						{
							soru.sik_A[x][s]=a_sikki[s-2] ;
							s++;
						}
						soru.sik_A[x][s]='.' ;
						mama=fopen("C:/Users/Utku/Desktop/C_Kodlarým/Sorular.txt","a");
						fprintf(mama,"\nA)");
						fputs(a_sikki,mama);
						fprintf(mama,".\n");
						fclose(mama);
						s=2;
						break ;
					}
				}
				
				printf("\nB sikki:\n");
				gets(b_sikki);
				for(x=1;x<=10;x++)
				{
					if(soru.sik_B[x][0] != 'B')
					{
						soru.sik_B[x][0]='B';
						soru.sik_B[x][1]=')';
						while(b_sikki[s-2]!=NULL)
						{
							soru.sik_B[x][s]=b_sikki[s-2] ;
							s++;
						}
						soru.sik_B[x][s]='.' ;
						mama=fopen("C:/Users/Utku/Desktop/C_Kodlarým/Sorular.txt","a");
						fprintf(mama,"B)");
						fputs(b_sikki,mama);
						fprintf(mama,".\n");
						fclose(mama);
						s=2;
						break ;
					}
				}
				
				printf("\nC sikki:\n");
				gets(c_sikki);
				for(x=1;x<=10;x++)
				{
					if(soru.sik_C[x][0] != 'C')
					{
						soru.sik_C[x][0]='C';
						soru.sik_C[x][1]=')';
						while(c_sikki[s-2]!=NULL)
						{
							soru.sik_C[x][s]=c_sikki[s-2] ;
							s++;
						}
						soru.sik_C[x][s]='.' ;
						mama=fopen("C:/Users/Utku/Desktop/C_Kodlarým/Sorular.txt","a");
						fprintf(mama,"C)");
						fputs(c_sikki,mama);
						fprintf(mama,".\n");
						fclose(mama);
						s=2;
						break ;
					}
				}
				
				printf("\nD sikki:\n");
				gets(d_sikki);
				for(x=1;x<=10;x++)
				{
					if(soru.sik_D[x][0] != 'D')
					{
						soru.sik_D[x][0]='D';
						soru.sik_D[x][1]=')';
						while(d_sikki[s-2]!=NULL)
						{
							soru.sik_D[x][s]=d_sikki[s-2] ;
							s++;
						}
						soru.sik_D[x][s]='.' ;
						mama=fopen("C:/Users/Utku/Desktop/C_Kodlarým/Sorular.txt","a");
						fprintf(mama,"D)");
						fputs(d_sikki,mama);
						fprintf(mama,".\n\n");
						fclose(mama);
						s=2;
						break ;
					}
				}
				
				//sorunun cevabýný alma kýsmý
				soru.dogru_cevap[x][0]='C';
				soru.dogru_cevap[x][1]='e';
				soru.dogru_cevap[x][2]='v';
				soru.dogru_cevap[x][3]='a';
				soru.dogru_cevap[x][4]='p';
				soru.dogru_cevap[x][5]=':';
				printf("\nSorunun dogru cevap sikkini girin:\n");
				gets(cevap);
				k=6 ;
				while(cevap[k-6]!=NULL)
				{
					soru.dogru_cevap[x][k]=cevap[k-6] ;
					k++ ;
				}
				soru.dogru_cevap[x][k]='.';
				k=0;
				
				mama=fopen("C:/Users/Utku/Desktop/C_Kodlarým/Sorular.txt","a");
				fprintf(mama,"Cevap:");
				fputs(cevap,mama);
				fprintf(mama,".\n\n");
				fclose(mama);
				
				
				
				//sorulara ID verme kýsmý//
				for(x=1;x<=10;x++)
				{
					if(soru.soru_ID[x]!=x)
					{
						soru.soru_ID[x]=x ;
						printf("\nsoru.soru_ID[%d]\n\n",soru.soru_ID[x]) ;
						//yazýlanlarý ekranda gösterme kýsmý
						while(soru.soru_metni[x][k-1]!='?')
						{
							printf("%c",soru.soru_metni[x][k]);
							k++ ;
						}
						k=0;
						printf("\n");
						while(soru.sik_A[x][k-1]!='.')
						{
							printf("%c",soru.sik_A[x][k]);
							k++ ;
						}
						k=0;
						printf("\n");
						while(soru.sik_B[x][k-1]!='.')
						{
							printf("%c",soru.sik_B[x][k]);
							k++ ;
						}
						k=0;
						printf("\n");
						while(soru.sik_C[x][k-1]!='.')
						{
							printf("%c",soru.sik_C[x][k]);
							k++ ;
						}
						k=0;
						printf("\n");
						while(soru.sik_D[x][k-1]!='.')
						{
							printf("%c",soru.sik_D[x][k]);
							k++ ;
						}
						k=0;
						printf("\n");
						
						k=0;
						while(soru.dogru_cevap[x][k-1]!='.')
						{
							printf("%c",soru.dogru_cevap[x][k]);
							k++ ;
						}
						
						x=11;
						
					}
				}
				
				
				
				break ;
			}
		
		
			case 2:
			{
				k=0 ;
				printf("\nSuana kadar olusturdugunuz sorular asagida goruntulenmektedir.\n") ;
				for(x=1;x<=10;x++)
				{
					if(soru.soru_ID[x]==x)
					{
						printf("\nsoru ID %d\n",x);
						while(soru.soru_metni[x][k-1]!='?')
						{
							printf("%c",soru.soru_metni[x][k]) ;
							k++ ;
						}
						printf("\n");
					}
					k=0;
				}
				
				printf("\nSilmek istediginiz sorunun idsini girin:\n");
				scanf("%d",&id);
				//structlardan silme kýsmý
				
				//id silme kýsmý
				soru.soru_ID[id]=NULL;
				
				//metin silme kýsmý
				k=0;
				while(soru.soru_metni[id][k]!=NULL)
				{
					soru.soru_metni[id][k]=NULL;
					k++ ;
				}
				k=0;
				
				//þýklarý silme kýsmý
				while(soru.sik_A[id][k]!=NULL)
				{
					soru.sik_A[id][k]=NULL;
					k++;
				}
				k=0;
				
				while(soru.sik_B[id][k]!=NULL)
				{
					soru.sik_B[id][k]=NULL;
					k++;
				}
				k=0;
				
				while(soru.sik_C[id][k]!=NULL)
				{
					soru.sik_C[id][k]=NULL;
					k++;
				}
				k=0;
				
				while(soru.sik_D[id][k]!=NULL)
				{
					soru.sik_D[id][k]=NULL;
					k++;
				}
				k=0;
				
				//doðru cevabý silme kýsmý
				while(soru.dogru_cevap[id][k]!=NULL)
				{
					soru.dogru_cevap[id][k]=NULL;
					k++;
				}
				
				
				//txt den silme kýsmý
				
				mama=fopen("C:/Users/Utku/Desktop/C_Kodlarým/Sorular.txt","w");
				k=0;
				for(x=1;x<=10;x++)
				{
					if(soru.soru_ID[x]!=NULL)
					{
						
						while(soru.soru_metni[x][k-1]!='?')
						{
							fprintf(mama,"%c",soru.soru_metni[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n\n");
						
						while(soru.sik_A[x][k-1]!='.')
						{
							fprintf(mama,"%c",soru.sik_A[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n");
						
						while(soru.sik_B[x][k-1]!='.')
						{
							fprintf(mama,"%c",soru.sik_B[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n");
						
						while(soru.sik_C[x][k-1]!='.')
						{
							fprintf(mama,"%c",soru.sik_C[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n");
						
						while(soru.sik_D[x][k-1]!='.')
						{
							fprintf(mama,"%c",soru.sik_D[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n\n");
						
						while(soru.dogru_cevap[x][k-1]!='.')
						{
							fprintf(mama,"%c",soru.dogru_cevap[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n\n");
						
					}
				}
				fclose(mama);
				
				
				printf("\n%d id numarali soru silinmistir.\n",id);
				break ;
			}
			

			case 3:
			{
				//sorularý gösterme kýsmý
				printf("\nSu ana kadar olusturdugunuz sorular asagida goruntulenmektedir.\n\n") ;
				for(x=1;x<=10;x++)
				{
					if(soru.soru_ID[x]!=0)
					{
						k=0;
						while(soru.soru_metni[x][k-1]!='?')
						{
							printf("%c",soru.soru_metni[x][k]);
							k++ ;
						}
						k=0;
						printf("\n");
						while(soru.sik_A[x][k-1]!='.')
						{
							printf("%c",soru.sik_A[x][k]);
							k++ ;
						}
						k=0;
						printf("\n");
						while(soru.sik_B[x][k-1]!='.')
						{
							printf("%c",soru.sik_B[x][k]);
							k++ ;
						}
						k=0;
						printf("\n");
						while(soru.sik_C[x][k-1]!='.')
						{
							printf("%c",soru.sik_C[x][k]);
							k++ ;
						}
						k=0;
						printf("\n");
						while(soru.sik_D[x][k-1]!='.')
						{
							printf("%c",soru.sik_D[x][k]);
							k++ ;
						}
						k=0;
						printf("\n");
						
						k=0;
						while(soru.dogru_cevap[x][k-1]!='.')
						{
							printf("%c",soru.dogru_cevap[x][k]);
							k++ ;
						}
						k=0;
						printf("\n\n");
						
					}
				}
				
				printf("\nKacinci soruyu guncellemek istiyorsunuz?\n") ;
				scanf("%d",&id);
				
				//struckt güncelleme kýsmý
				
				//metin güncelleme kýsmý
				printf("\nSoru metnini giriniz:\n");
				gets(sorum);
				gets(sorum);
				
				k=6;
				while(soru.soru_metni[id][k]!=NULL)
				{
					soru.soru_metni[id][k]=NULL;
					k++ ;
				}
				k=0;
				
				i=6;
				while(sorum[i-6]!=NULL)
				{
					soru.soru_metni[id][i]= sorum[i-6] ;
					i++ ;
				}
				soru.soru_metni[id][i]='?' ;
				i=6;
				
				//þýklarý güncelleme kýsmý
				
				//a þýkký
				printf("\nA sikki:\n");
				gets(a_sikki);
				
				k=2;
				while(soru.sik_A[id][k]!=NULL)
				{
					soru.sik_A[id][k]=NULL;
					k++;
				}
				k=0;
				
				
				s=2;
				while(a_sikki[s-2]!=NULL)
				{
					soru.sik_A[id][s]=a_sikki[s-2] ;
					s++;
				}
				soru.sik_A[id][s]='.';
				s=2;
				
				//b þýkký
				printf("\nB sikki:\n");
				gets(b_sikki);
				
				k=2;
				while(soru.sik_B[id][k]!=NULL)
				{
					soru.sik_B[id][k]=NULL;
					k++;
				}
				k=0;
				
				
				s=2;
				while(b_sikki[s-2]!=NULL)
				{
					soru.sik_B[id][s]=b_sikki[s-2] ;
					s++;
				}
				soru.sik_B[id][s]='.';
				s=2;
				
				//c þýkký
				printf("\nC sikki:\n");
				gets(c_sikki);
				
				k=2;
				while(soru.sik_C[id][k]!=NULL)
				{
					soru.sik_C[id][k]=NULL;
					k++;
				}
				k=0;
				
				
				s=2;
				while(c_sikki[s-2]!=NULL)
				{
					soru.sik_C[id][s]=c_sikki[s-2] ;
					s++;
				}
				soru.sik_C[id][s]='.';
				s=2;
				
				
				//d þýkký
				printf("\nD sikki:\n");
				gets(d_sikki);
				
				k=2;
				while(soru.sik_D[id][k]!=NULL)
				{
					soru.sik_D[id][k]=NULL;
					k++;
				}
				k=0;
				
				
				s=2;
				while(d_sikki[s-2]!=NULL)
				{
					soru.sik_D[id][s]=d_sikki[s-2] ;
					s++;
				}
				soru.sik_D[id][s]='.';
				s=2;
				
				//doðru cevabýn güncellenmesi kýsmý
				printf("\nDogru cevap sikki:\n");
				gets(cevap);
				
				k=6;
				while(soru.dogru_cevap[id][k]!=NULL)
				{
					soru.dogru_cevap[id][k]=NULL;
					k++;
				}
				k=0;
				
				k=6 ;
				while(cevap[k-6]!=NULL)
				{
					soru.dogru_cevap[id][k]=cevap[k-6] ;
					k++ ;
				}
				soru.dogru_cevap[id][k]='.';
				k=0;
				
				// txt den güncelleme kýsmý
				
				mama=fopen("C:/Users/Utku/Desktop/C_Kodlarým/Sorular.txt","w");
				k=0;
				for(x=1;x<=10;x++)
				{
					if(soru.soru_ID[x]!=NULL)
					{
						
						while(soru.soru_metni[x][k-1]!='?')
						{
							fprintf(mama,"%c",soru.soru_metni[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n\n");
						
						while(soru.sik_A[x][k-1]!='.')
						{
							fprintf(mama,"%c",soru.sik_A[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n");
						
						while(soru.sik_B[x][k-1]!='.')
						{
							fprintf(mama,"%c",soru.sik_B[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n");
						
						while(soru.sik_C[x][k-1]!='.')
						{
							fprintf(mama,"%c",soru.sik_C[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n");
						
						while(soru.sik_D[x][k-1]!='.')
						{
							fprintf(mama,"%c",soru.sik_D[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n\n");
						
						while(soru.dogru_cevap[x][k-1]!='.')
						{
							fprintf(mama,"%c",soru.dogru_cevap[x][k]);
							k++ ;
						}
						k=0;
						fprintf(mama,"\n\n");
						
					}
				}
				fclose(mama);
				
				
				
				break ;
			}
			
			case 4:
			{
				puan=0;
				i=1;
				while(i!=6)
				{
					srand(time(NULL));
					id=1+(rand()%10) ;
					if(soru.soru_ID[id]!=NULL)
					{
						
						printf("\n\n");
						k=0;
						while(soru.soru_metni[id][k-1]!='?')
						{
							printf("%c",soru.soru_metni[id][k]);
							k++ ;
						}
						printf("\n\n");
						k=0;
						while(soru.sik_A[id][k-1]!='.')
						{
							printf("%c",soru.sik_A[id][k]);
							k++;
						}
						printf("\n");
						k=0;
						while(soru.sik_B[id][k-1]!='.')
						{
							printf("%c",soru.sik_B[id][k]);
							k++;
						}
						printf("\n");
						k=0;
						while(soru.sik_C[id][k-1]!='.')
						{
							printf("%c",soru.sik_C[id][k]);
							k++;
						}
						printf("\n");
						k=0;
						while(soru.sik_D[id][k-1]!='.')
						{
							printf("%c",soru.sik_D[id][k]);
							k++;
						}
						printf("\n\n");
						k=0;
						printf("Cevabiniz(sadece sik harfini girin):");
						gets(cevap);
						while(cevap[k]!=NULL)
						{
							cevapplar[i][k]=cevap[k];
							k++;
						}
						idler[i]=id;
						i++;
					}
				}
				k=1;
				while(cevapplar[k][0]!=NULL)
				{
					h=idler[k];
					f=cevapplar[k][0];
					g=soru.dogru_cevap[h][6];
					if(f==g)
					{
						puan++;
					}
					k++;
				}
				
				printf("\nPuaniniz:%d\n",puan);
				printf("\nIsminizi girin:");
				gets(isim);
				
				
				k=0;
				for(x=0;x<10;x++)
				{
					if(puanlar[x]==NULL)
					{
						puanlar[x]=puan;
						
						while(isim[k]!=NULL)
						{
							isimler[x][k]=isim[k];
							k++;
						}
						isimler[x][k]='.';
						x=11;
					}
					
					
				}
				
				
				
				break;
				
			}
			
			case 5:
			{
				z=0;
				for(x=0;x<10;x++)
				{
					if(puanlar[x]!=NULL)
					{
						z++;
					}
				}
				
				
				for(x=0;x<z;x++)
				{
					for(i=0;i<z;i++)
					{
						k=0;
						if(puanlar[i]<puanlar[i+1])
						{
							gecici=puanlar[i+1];
							puanlar[i+1]=puanlar[i];
							puanlar[i]=gecici;
							if(isimler[i+1][k]!=NULL)
							{
								k=0;
								while(isimler[i+1][k-1]!='.')
								{
									gecici_isim[0][k]=isimler[i+1][k];
									
									k++;
									
								}
								k=0;
								while(isimler[i+1][k]!=NULL)
								{
									isimler[i+1][k]=NULL ;
									k++;
								}
								k=0;
								while(isimler[i][k-1]!='.')
								{
								
									isimler[i+1][k]=isimler[i][k];
									
									k++;
								}
								k=0;
								while(isimler[i][k]!=NULL)
								{
									isimler[i][k]=NULL;
									k++;
								}
								k=0;
								while(gecici_isim[0][k-1]!='.')
								{
									isimler[i][k]=gecici_isim[0][k];
									
									k++;
								}
								k=0;
								while(gecici_isim[0][k]!=NULL)
								{
									gecici_isim[0][k]=NULL;
									k++;
								}
								k=0;
							}

						}
						
					}
					
				}
				
				printf("\nEn Yuksek Skorlar\n\n");
				
				for(x=0;x<10;x++)
				{
					
					if(isimler[x][k]!=NULL)
					{
						printf("\n%d.",x+1);
						k=0;
						
						while(isimler[x][k]!='.')
						{
							printf("%c",isimler[x][k]);
							k++;
						}
						k=0;
						printf(" ===> %d",puanlar[x]);
					}
				}
							
				break;
			}
			
			
		}
	
	}
	
	
	return 0 ;
}

