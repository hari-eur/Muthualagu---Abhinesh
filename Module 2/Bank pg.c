#include<stdio.h>
#include<string.h>
int main(){
	int choice,sel;
	char bankname[30],accounttype[10];
	printf("******************************** \n");
	printf("1.Canara Bank\n");
	printf("2.Indian Bank\n");
	printf("3.Tamilnadu Mercantile Bank\n");
	printf("Please Choose a bank name from above available options\n");
	scanf("%d",&choice);
	if(choice==1)
	printf("You have chosen Canara Bank");
	else if(choice==2)
	printf("You have chosen Indian Bank");
	else if(choice==3)
	printf("You have chosen Tamilnadu Mercantile bank");
	else if(choice>3)
	printf("Please Enter valid option only");
    //Banking operations of respective banks
    switch(choice)
        {
                	case 1:
                		{	
                		printf("\n Average monthly balance of 2000/-for urban/metro cities ,1000/-for semi urban branches and 500/-for rural branches\n");
                		printf("\nOnline tax payment,\nPFMS through netbanking,\nApply for FasTag operation,\nDownload TDS certificate form 16A\n");	
						break;
					}
					case 2:
					{
						printf("\n Average monthly balance for a savings account stands 1000/-with checking facility\n");
						printf("\nDeposits and withdrawls,\ncurrency exchange,\nforex trading,\nwealth management\n");
						break;
					}
					case 3:
					{
						printf("\n Average monthly balance stands from 250/- to 500/- in rural and semiurban branches respectively\n");
						printf("Check cashing services,\nInsurance,\nBusiness Banking\n");
						break;
					}
					default:
						{
							printf("INVALID");
						}
					
				}
				printf("\n");
				
				//Account type
				int type;
				printf("\n");
				printf("1.Savings account\n");
				printf("2.Current account\n");
				printf("3.Demat\n");
				printf("Please select the account type from above options\n");
				scanf("%d",&type);
				printf("The benefits of account type you have chosen are");
				switch(type){
					case 1:
						{
						printf("\nSafety of funds,\nJoint account,\nConvenient fund transfers\n");
						printf("INTEREST RATES STARTS FROM 2.5% to 7% per annum ");
						break;
					}
					case 2:{
						printf("\nNo limit on withdrawls,\nNo limit on deposits in home branch,\nPrompt Business Transactions\n");
						printf("INTEREST RATES - NIL");
						break;
					}
					case 3:{
						printf("\nSafety from fraud,\nLoan facility,\nFaster settlement\n");
						printf("INTEREST RATES INCLUDES 12.5% pa");
						break;
					}
					default:{
						printf("Please enter a valid option");\
						break;
					}
					
				}
				printf("\n");
				printf("THANK YOU FOR USING OUR SYSTEM,\n HOPE YOU WOULD BE HAPPY WITH OUR SERVICE,\n***************************************************");
			return 0;
		}
