#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int islem,devam,islem2,islem3,islem4,islem5;
	float sayi,bakiye,kredi,yurt,uniharc,ehliyet,yks,msu,bursluluk,gelir,kurumsal,tasit,emlak,gumruk;
	kredi=86000;
	yks=345;
	gumruk=45000;
	gelir=18800;
	kurumsal=10500;
	tasit=2392;
	emlak=14952;
	bursluluk=295;
	msu=285;
	yurt=510;
	uniharc=577.50;
	ehliyet=4250;
	bakiye=3156.37;
	bas:
	printf("\n");	
	printf("Garanti BBVA'ya hosgeldiniz...\n\n");
	printf("1-Bakiye sorgulama\n");
	printf("2-Para cekme\n");
	printf("3-Hesaba para yatirma\n");
	printf("4-Odeme islemleri\n\n");
	printf("Islem yapmak istemiyorsaniz kartinizi almak icin lutfen 0'i tuslayiniz.\n");
	printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
	scanf("%d",&islem);
	printf("\n");
	
	switch(islem)
	{
		case 0:
			printf("Kartinizi almayi unutmayiniz."); break;
		case 1:
			case1:
			printf("Mevcut bakiyeniz: %.2f\n\n",bakiye);
			printf("Islemi iptal etmek ve kartinizi almak icin lutfen 9'u tuslayiniz.\n");
			printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
			scanf("%f",&sayi);
			if(sayi==0)
			{
				goto bas;
			}
			break;
		case 2: 
			printf("Islemi iptal etmek ve kartinizi almak icin lutfen 9'u tuslayiniz.\n");
			printf("Isleme devam etmek icin lutfen 2'yi tuslayiniz.\n");
			scanf("%d",&devam);
			if(devam==9)
			{
				printf("Lutfen kartinizi almayi unutmayiniz."); break;
			}
			else if(devam==2)
			{
			bas1:
			printf("Mevcut bakiyeniz: %.2f\n",bakiye);
			printf("- 20 TL										- 50 TL\n\n");
			printf("- 100 TL									- 200 TL\n\n");
			printf("- 500 TL									-1000 TL\n\n");
			printf("Farkli bir tutar cek: ");
			scanf("%f",&sayi);
			printf("\n");
			if(sayi>bakiye)
			{
				printf("Bu islem icin bakiyeniz yetersiz.\n");
				printf("Lutfen bakiyenize uygun bir sekilde islemi gerceklestiriniz.\n");
				goto bas1;
			}
			else if(sayi<=bakiye)
			{
			printf("Para cekme isleminiz basariyla gerceklesmistir.\n\n");
			bakiye-=sayi;
			printf("Kalan bakiyeniz: %.2f\n",bakiye);	
			}
			printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
			printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
			scanf("%f",&sayi);
			if(sayi==0)
			{
				goto bas;
			}
			else if(sayi==5)
			{
				printf("Kartinizi almayi unutmayiniz.");
			}
			default: printf("Hatali tuslama yaptiniz!\n"); printf("Ana menuye yonlendiriliyorsunuz...\n");
			goto bas;
			}
			break;
		case 3:
			printf("Islemi iptal etmek ve kartinizi almak icin lutfen 9'u tuslayiniz.\n");
			printf("Isleme devam etmek icin lutfen 3'u tuslayiniz.\n");
			scanf("%d",&devam);
			if(devam==9)
			{
				printf("Lutfen kartinizi almayi unutmayiniz."); break;
			}
			else if(devam==3)
			{
				printf("Lutfen yatirmak istediginiz tutari giriniz: ");
				scanf("%f",&sayi);
				printf("\n");
				printf("Para yatirma isleminiz basariyla gerceklesmistir.\n\n");
				bakiye+=sayi;
				printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
				printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
				scanf("%f",&sayi);
				if(sayi==0)
				{
					goto bas;
				}
				else if(sayi==5)
				{
					printf("Kartinizi almayi unutmayiniz.");
				}
			}
			break;
			case 4:
				printf("1-Meb odemeleri\n");
				printf("2-Sinav harc odemeleri\n");
				printf("3-Vergi odemeleri\n\n");
				printf("Islem yapmak istemiyorsaniz kartinizi almak icin lutfen 0'i tuslayiniz.\n");
				printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
				scanf("%d",&islem2);
	            printf("\n");
	            if(islem2==0)
	            {
	            	printf("Lutfen kartinizi almayi unutmayiniz."); break;
				}
				switch(islem2)
				{
					case 1:
						printf("1-KYK kredi odemeleri\n");
						printf("2-KYK yurt odemeleri\n");
						printf("3-Universite harc odemeleri\n\n");
						printf("Islem yapmak istemiyorsaniz kartinizi almak icin lutfen 0'i tuslayiniz.\n");
						printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
						scanf("%d",&islem3);
	            		printf("\n");
	            		if(islem3==0)
	            		{
	            			printf("Lutfen kartinizi almayi unutmayiniz."); break;
						}
	            		switch(islem3)
	            		{
	            			case 1:
	            				case3:
	            				printf("KYK kredi borcunuz: %.2f\n",kredi);
	            				printf("Odemek istediginiz tutari giriniz: ");
	            				scanf("%f",&sayi);
	            				if(bakiye<sayi)
	            				{
	            					printf("Bu islem icin bakiyeniz yetersiz.\n");
	            					printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
	            					goto case1;
								}
								else if(bakiye>sayi)
								{
									if(sayi>kredi)
									{
										printf("%.2f TL'den fazla odeme yapamazsiniz.\n",kredi);
										goto case3;
									}
									else if(sayi<=kredi)
									{
									printf("KYK kredi borcu odemeniz basariyla gerceklesmistir.\n\n");
									bakiye-=sayi;
									kredi-=sayi;
									printf("Kalan KYK kredi borcunuz: %.2f\n",kredi);
								    }
									printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
									printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
									scanf("%d",&devam);
									if(devam==0)
									{
										goto bas;
									}
									else if(devam==5)
									{
										printf("Kartinizi almayi unutmayiniz.");
									}
									default: printf("Hatali tuslama yaptiniz!\n"); printf("Ana menuye yonlendiriliyorsunuz...\n");
									goto bas;
								}
								break;
							case 2:
								case2:
								printf("KYK yurt borcunuz: %.2f\n",yurt);
								printf("Odemek istediginiz tutari giriniz: ");
								scanf("%f",&sayi);
								if(bakiye<sayi)
								{
									printf("Bu islem icin bakiyeniz yetersiz.\n");
									printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
									goto case1;
								}
								else if(bakiye>sayi)
								{
									if(sayi>yurt)
									{
										printf("%.2f TL'den fazla odeme yapamazsiniz.",yurt);
										goto case2;
									}
									else if(sayi<=yurt)
									{
										printf("KYK yurt borcu odemeniz basariyla gerceklesmistir.\n\n");
									    bakiye-=sayi;
									    yurt-=sayi;
									    printf("Kalan KYK yurt borcunuz: %.2f\n",yurt);
									}
									printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
									printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
									scanf("%d",&devam);
									if(devam==0)
									{
										goto bas;
									}
									else if(devam==5)
									{
										printf("Lutfen kartinizi almayi unutmayiniz.");
									}
								}
								break;
							case 3:
								case4:
								printf("Universite harc borcunuz: %.2f\n",uniharc);
								printf("Odemek istediginiz tutari giriniz: ");
								scanf("%f",&sayi);
								if(bakiye<sayi)
								{
									printf("Bu islem icin bakiyeniz yetersiz.\n");
									printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
									goto case1;
								}
								else if(bakiye>sayi)
								{
									if(sayi>uniharc)
									{
										printf("%.2f TL'den fazla odeme yapamazsiniz.",uniharc);
										goto case4;
									}
									else if(sayi<=uniharc)
									{
										printf("Universite harc odemeniz basariyla gerceklesmistir.\n\n");
										bakiye-=sayi;
										uniharc-=sayi;
										printf("Kalan universite harc borcunuz: %.2f\n",uniharc);
									}
									printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
									printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
									scanf("%d",&devam);
									if(devam==0)
									{
										goto bas;
									}
									else if(devam==5)
									{
										printf("Kartinizi almayi unutmayiniz.");
									}
									break;								
								}																				
						}
					break;
					case 2:
						printf("Ehliyet sinav harc odemeleri\n");
						printf("YKS harc odemeleri\n");
						printf("Bursluluk sinavi harc odemeleri\n");
						printf("MSU harc odemeleri\n\n");
						printf("Islem yapmak istemiyorsaniz kartinizi almak icin lutfen 0'i tuslayiniz.\n");
						printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
						scanf("%d",&islem4);
						printf("\n");
						if(islem4==0)
						{
							printf("Lutfen kartinizi almayi unutmayiniz."); break;
						}
						switch(islem4)
						{
							case 1:
								case5:
								printf("Ehliyet sinavi harc borcunuz: %.2f\n",ehliyet);
								printf("Odemek istediginiz tutari giriniz: ");
								scanf("%f",&sayi);
						
						if(bakiye<sayi)
						{
							printf("Bu islem icin bakiyeniz yetersiz.\n");
							printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
							goto case1;
						}
						else if(bakiye>sayi)
						{
							if(sayi>ehliyet)
							{
								printf("%.2f TL'den fazla odeme yapamazsiniz.",ehliyet);
								goto case5;
							}
							else if(sayi<=ehliyet)
							{
								printf("Ehliyet harc odemeniz basariyla gerceklesmistir.\n\n");
								bakiye-=sayi;
								ehliyet-=sayi;
								printf("Kalan ehliyet harc borcunuz: %.2f\n",ehliyet);
							}
						}
							printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
									printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
									scanf("%d",&devam);
									if(devam==0)
									{
										goto bas;
									}
									else if(devam==5)
									{
										printf("Kartinizi almayi unutmayiniz.");
									}
									break;
								case 2:
									case6:
										printf("YKS sinavi harc borcunuz: %.2f\n",yks);
										printf("Odemek istediginiz tutari giriniz: ");
										scanf("%f",&sayi);
										if(bakiye<sayi)
										{
											printf("Bu islem icin bakiyeniz yetersiz.\n");
											printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
											goto case1;
										}
										else if(bakiye>sayi)
										{
											if(sayi>yks)
											{
												printf("%.2f TL'den fazla odeme yapamazsiniz.\n",yks);
												goto case6;
											}
											else if(sayi<=yks)
											{
												printf("YKS sinavi harc odemeniz basariyla gerceklesmistir.\n\n");
												bakiye-=sayi;
												yks-=sayi;
												printf("Kalan YKS sinavi harc borcunuz: %.2f\n",yks);
											}
											printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
											printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
											scanf("%d",&devam);
											if(devam==0)
											{
												goto bas;
											}
											else if(devam==5)
											{
												printf("Lutfen kartinizi almayi unutmayiniz.");
											}
											break;
										case 3:
											case7:
												printf("Bursluluk sinavi harc borcunuz: %.2f\n",bursluluk);
												printf("Odemek istediginiz tutari giriniz: ");
												scanf("%f",&sayi);
												if(bakiye<sayi)
												{
													printf("Bu islem icin bakiyeniz yetersiz.\n");
													printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
													goto case1;
												}
												else if(bakiye>sayi)
												{
													if(sayi>bursluluk)
													{
														printf("%.2f TL'den fazla odeme yapamazsiniz.",bursluluk);
														goto case7;
													}
													else if(sayi<=bursluluk)
													{
														printf("Bursluluk sinavi harc odemeniz basariyla gerceklesmistir.\n\n");
														bakiye-=sayi;
														bursluluk-=sayi;
														printf("Kalan bursluluk sinavi harc borcunuz: %.2f\n",bursluluk);
													}
													printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
													printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
													scanf("%d",&devam);
													if(devam==0)
													{
														goto bas;
													}
													else if(devam==5)
													{
														printf("Lutfen kartinizi almayi unutmayiniz.");
													}
													break;
												case 4:
													case8:
													printf("MSU sinavi harc borcunuz: %.2f\n",msu);
													printf("Odemek istediginiz tutari giriniz: ");
													scanf("%f",&sayi);
													if(bakiye<sayi)
													{
														printf("Bu islem icin bakiyeniz yetersiz.\n");
														printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
														goto case1;
													}
													else if(bakiye>sayi)
													{
														if(sayi>msu)
														{
															printf("%.2f TL'den fazla odeme yapamazsiniz.\n",msu);
															goto case8;
														}
														else if(sayi<=msu)
														{
															printf("MSU sinavi harc odemeniz basariyla gerceklesmistir.\n\n");
															bakiye-=sayi;
															msu-=sayi;
															printf("Kalan MSU sinavi harc borcunuz: %.2f\n",msu);
														}
														printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
														printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
														scanf("%d",&devam);
														if(devam==0)
														{
															goto bas;
														}
														else if(devam==5)
														{
															printf("Lutfen kartinizi almayi unutmayiniz.");
														}
														break;
													}
												}
										}
					}
					break;
					case 3:
						printf("1-Gelir vergisi odemeleri\n");
						printf("2-Kurumsal vergi odemeleri\n");
						printf("3-Motorlu tasitlar vergisi odemeleri\n");
						printf("4-Emlak vergisi odemeleri\n");
						printf("5-Gumruk vergisi odemeleri\n\n");
						printf("Islem yapmak istemiyorsaniz kartinizi almak icin lutfen 0'i tuslayiniz.\n");
						printf("Lutfen yapmak istediginiz islemi tuslayiniz: ");
						scanf("%d",&islem5);
						printf("\n");
						if(islem5==0)
						{
							printf("Lutfen kartinizi almayi unutmayiniz."); break;
						}
						switch(islem5)
						{
							case 1:
								bas8:
								printf("Gelir vergisi borcunuz: %.2f\n",gelir);
								printf("Odemek istediginiz tutari giriniz: ");
								scanf("%f",&sayi);
								if(bakiye<sayi)
								{
									printf("Bu islem icin bakiyeniz yetersiz.\n");
									printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
									goto case1;
								}
								else if(bakiye>sayi)
								{
									if(sayi>gelir)
									{
										printf("%.2f TL'den fazla odeme yapamazsiniz.\n",gelir);
										goto bas8;
									}
									else if(sayi<=gelir)
									{
										printf("Gelir vergisi odemeniz basariyla gerceklesmistir.\n\n");
										bakiye-=sayi;
										gelir-=sayi;
										printf("Kalan gelir vergisi borcunuz: %.2f\n",gelir);
									}
									printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
									printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
									scanf("%d",&devam);
									if(devam==0)
									{
										goto bas;
									}
									else if(devam==5)
									{
										printf("Lutfen kartinizi almayi unutmayiniz.");
									}
									break;
								case 2:
									case9:
									printf("Kurumsal vergi borcunuz: %.2f\n",kurumsal);
									printf("Odemek istediginiz tutari giriniz: ");
									scanf("%f",&sayi);
									if(bakiye<sayi)
									{
										printf("Bu islem icin bakiyeniz yetersiz.\n");
										printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
										goto case1;
									}
									else if(bakiye>sayi)
									{
										if(sayi>kurumsal)
										{
											printf("%.2f TL'den fazla odeme yapamazsiniz.\n",kurumsal);
											goto case9;
										}
										else if(sayi<=kurumsal)
										{
											printf("Kurumsal vergi odemeniz basariyla gerceklesmistir.\n\n");
											bakiye-=sayi;
											kurumsal-=sayi;
											printf("Kalan kurumsal vergi borcunuz: %.2f\n",kurumsal);
										}
										printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
										printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
										scanf("%d",&devam);
										if(devam==0)
										{
											goto bas;
										}
										else if(devam==5)
										{
											printf("Lutfen kartinizi almayi unutmayiniz.");
										}
										break;
									case 3:
										bas2:
										printf("Motorlu tasitlar vergi borcunuz: %.2f\n",tasit);
										printf("Odemek istediginiz tutari giriniz: ");
										scanf("%f",&sayi);
										if(bakiye<sayi)
										{
											printf("Bu islem icin bakiyeniz yetersiz.\n");
											printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
											goto case1;
										}
										else if(bakiye>sayi)
										{
											if(sayi>tasit)
											{
												printf("%.2f TL'den fazla odeme yapamazsiniz.\n");
												goto bas2;
											}
											else if(sayi<=tasit)
											{
												printf("Motorlu tasitlar vergi odemeniz basariyla gerceklesmistir.\n\n");
												bakiye-=sayi;
												tasit-=sayi;
												printf("Kalan motorlu tasitlar vergi borcunuz: %.2f\n",tasit);
											}
											printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
											printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
											scanf("%d",&devam);
											if(devam==0)
											{
												goto bas;
											}
											else if(devam==5)
											{
												printf("Lutfen kartinizi almayi unutmayiniz.");
											}
											break;
										case 4:
											bas3:
											printf("Emlak vergisi borcunuz: %.2f\n",emlak);
											printf("Odemek istediginiz tutari giriniz: ");
											scanf("%f",&sayi);
											if(bakiye<sayi)
											{
												printf("Bu islem icin bakiyeniz yetersiz.\n");
												printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
												goto case1;
											}
											else if(bakiye>sayi)
											{
												if(sayi>emlak)
												{
													printf("%.2f TL'den fazla odeme yapamazsiniz.\n");
													goto bas3;
												}
												else if(sayi<=emlak)
												{
													printf("Emlak vergisi odemeniz basariyla gerceklesmistir.\n\n");
													bakiye-=sayi;
													emlak-=sayi;
													printf("Kalan emlak vergisi borcunuz: %.2f\n",emlak);
												}
												printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
												printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
												scanf("%d",&devam);
												if(devam==0)
												{
													goto bas;
												}
												else if(devam==5)
												{
													printf("Lutfen kartinizi almayi unutmayiniz.");
												}
												break;
											case 5:
												bas4:
												printf("Gumruk vergisi borcunuz: %.2f\n",gumruk);
												printf("Odemek istediginiz tutari giriniz: ");
												scanf("%f",&sayi);
												if(bakiye<sayi)
												{
													printf("Bu islem icin bakiyeniz yetersiz.\n");
													printf("Lutfen bakiyenizi kontrol edip odeme yapiniz.\n");
													goto case1;
												}
												else if(bakiye>sayi)
												{
													if(sayi>gumruk)
													{
														printf("%.2f TL'den fazla odeme yapamazsiniz.\n");
														goto bas4;
													}
													else if(sayi<=gumruk)
													{
														printf("Gumruk vergisi odemeniz basariyla gerceklesmistir.\n\n");
														bakiye-=sayi;
														gumruk-=sayi;
														printf("Kalan gumruk vergisi borcunuz: %.2f\n",gumruk);
													}
													printf("Ana menuye donmek icin lutfen 0'i tuslayiniz.\n");
													printf("Kartinizi almak icin lutfen 5'i tuslayiniz.\n");
													scanf("%d",&devam);
													if(devam==0)
													{
														goto bas;
													}
													else if(devam==5)
													{
														printf("Lutfen kartinizi almayi unutmayiniz.");
													}
													break;
												}
											}
										}
									}
								}
						}
						
						
						
						
				}
				
					
			
							
		
		
	}
		
	
	
	
	return 0;
}
