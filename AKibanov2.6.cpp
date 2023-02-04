#include <stdio.h>

int main()
{
	int day, month, year;
	printf("Enter your birthday: DD/MM/YYYY\n");
	printf("Day: ");
	scanf("%i",&day);
	printf("Month: ");
	scanf("%i",&month);
	printf("Year: ");
	scanf("%i",&year);
	
	if (year % 4 == 0)
	{
		printf("You were born on a leap year.\n");
	}
	else
	{
		printf("You were born on a non-leap year.\n");
	}
	
	int eastern_calendar = year % 12;
	switch (eastern_calendar)
	{ 
		case 0:
		{
			printf("Your year according to the eastern calendar is Monkey.\n");
		}
			break;
		case 1:
		{
			printf("Your year according to the eastern calendar is Rooster.\n");
		}
			break;
		case 2:
		{
			printf("Your year according to the eastern calendar is Dog.\n");
		}
			break;
		case 3:
		{
			printf("Your year according to the eastern calendar is Pig.\n");
		}
			break;
		case 4:
		{
			printf("Your year according to the eastern calendar is Rat.\n");
		}
			break;
		case 5:
		{
			printf("Your year according to the eastern calendar is Ox.\n");
		}
			break;
		case 6:
		{
			printf("Your year according to the eastern calendar is Tiger.\n");
		}
			break;
		case 7:
		{
			printf("Your year according to the eastern calendar is Rabit.\n");
		}
			break;
		case 8:
		{
			printf("Your year according to the eastern calendar is Dragon.\n");
		}
			break;
		case 9:
		{
			printf("Your year according to the eastern calendar is Snake.\n");
		}
			break;
		case 10:
		{
			printf("Your year according to the eastern calendar is Horse.\n");
		}
			break;
		case 11:
		{
			printf("Your year according to the eastern calendar is Goat.\n");
		}
			break;
		default:
		{
			printf("Error in year.\n");
		}
	}
	
	if (((month==1)&&(day>20))||((month==2)&&(day<19)))
	{
		printf("Your zodiac sign is a Aquarius.\n");
	}
	else
	{
		if (((month==2)&&(day>18))||((month==3)&&(day<21)))
		{
			printf("Your zodiac sign is a Pisces.\n");
		}
		else
		{
			if (((month==3)&&(day>20))||((month==4)&&(day<21)))
			{
				printf("Your zodiac sign is a Aries.\n");
			}
			else
			{
				if (((month==4)&&(day>20))||((month==5)&&(day<22)))
				{
					printf("Your zodiac sign is a Taurus.\n");
				}
				else
				{
					if (((month==5)&&(day>21))||((month==6)&&(day<22)))
					{
						printf("Your zodiac sign is a Gemini.\n");
					}
					else
					{
						if (((month==6)&&(day>21))||((month==7)&&(day<23)))
						{
							printf("Your zodiac sign is a Cancer.\n");
						}
						else
						{
							if (((month==7)&&(day>22))||((month==8)&&(day<24)))
							{
								printf("Your zodiac sign is a Leo.\n");
							}
							else
							{
								if (((month==8)&&(day>23))||((month==9)&&(day<23)))
								{
									printf("Your zodiac sign is a Virgo.\n");
								}
								else
								{
									if (((month==9)&&(day>22))||((month==10)&&(day<24)))
									{
										printf("Your zodiac sign is a Libra.\n");
									}
									else
									{
										if (((month==10)&&(day>23))||((month==11)&&(day<23)))
										{
											printf("Your zodiac sign is a Scorpion.\n");
										}
										else
										{
											if (((month==11)&&(day>22))||((month==12)&&(day<22)))
											{
												printf("Your zodiac sign is a Sagittarius.\n");
											}
											else
											{
												if (((month==12)&&(day>21))||((month==1)&&(day<21)))
												{
													printf("Your zodiac sign is a Capricorn.\n");
												}
												else
												{
													printf("Error in month.\n");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
