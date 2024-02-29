#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include "AsciiArt.c"
//#include "BattleSystem.c"

void printMenuScreen(int *nTitleDecision){
    int nInputDecision;

    system("cls");
    printf("=================================================================================================================  \n\n");
    printZeroDeathArt();
    printf("\n\n");
    printf("                                                       Title Menu                                                  \n\n");
    printf("                                                Input 1 To Start The Game                                            \n");
    printf("                                                Input 0 To Leave The Game                                            \n");
    printf("                                                                                                                     \n");
    printf("=================================================================================================================  \n\n");
    

    do{
    printf("                                                        Input: ");
    scanf("%d", &nInputDecision);

    *nTitleDecision = nInputDecision;

		if(*nTitleDecision > 1){
			printf("                                             [SYSTEM MESSAGE]: INVALID INPUT\n\n");
		}
	}while(*nTitleDecision > 1);

    if(*nTitleDecision == 0){
        printf("You Have Left The Game.");
    }

}

void printIntroductionScreen(char *cName[10]){
    char cNameOfPlayer[10];


    printSkullArt();
    printf("\n\n");
    printf("                            Welcome to Zero Death.\n\n");
    printf("                       Please enter your First Name: ");
    scanf(" %s", &cNameOfPlayer);

    *cName = cNameOfPlayer;

}

void decisionMenu(int *nMenuDecision, char cName[10], int *nDayCounter, int *x){
    int nDecide = 0;

    system("cls");
    printf("\n");
    printValleyArt();

    //printf("\n\n           Hello  %s, You have arrived to Innerdalen Valley!\n", cName);
    printf("\n\n           Hello Traveller, You have arrived to Innerdalen Valley!\n");
    printf("           Here is everything you could do in Innerdalen Valley:\n");
    printf("         ___________________________________________________________\n");
    printf("\n           Day: %d\n", *nDayCounter);

    printf("                            [1] Character Profile\n");
    printf("                            [2] Explore\n");
    printf("                            [3] Rest or Sleep\n");
    printf("                            [4] Shop\n");
    printf("                            [5] Exit Game\n\n");

    do{
    printf("                            What would you like to do?\n");
    printf("                            Decide: ");
    scanf("%d", &nDecide);

    *nMenuDecision = nDecide;

		if(*nMenuDecision > 5 || *nMenuDecision == 0){
			printf("                            INVALID INPUT!\n\n");
		}
	}while(*nMenuDecision > 5 || *nMenuDecision == 0);

}

void characterProfile(int *nHealth, int *nCoins, int *x, int *nEquippedWeapon, int *nPotion1, int *nPotion2, int *nPotion3, int *nIronSword, int *nEbonDagger, int *nLongBlade, int *nRapier, int *nElucidator, int *nHolyExcalibur, int *nBlueChestKey, int *nRedChestKey, int *nBlackChestKey, int *nBlueChest, int *nRedChest, int *nBlackChest, int *y){
    int nProfileDecision = 0;
    int nEquip;
    int nOpenChest;

    do{
        system("cls");
        printf("\n");
        printf("                    Welcome To Your Characters Stats!\n");
        printf("\n");
        printCharacterDesign();

        printf("\n");
        printf("     __________________________________________________________\n");
        printf("\n");

        printf("        Health: %d\n", *nHealth);
        printf("        Coins: %d\n", *nCoins);
        printf("\n");

        printf("        Inventory:\n");
        printf("\n");

        printf("        Potion : %d\n", *nPotion1);
        printf("        Potion II : %d\n", *nPotion2);
        printf("        Potion III : %d\n", *nPotion3);
        printf("\n");

        printf("        [1] Iron Sword: %d  [FREE]\n", *nIronSword);
        printf("        [2] Ebon Dagger : %d\n", *nEbonDagger);
        printf("        [3] Long Blade: %d\n", *nLongBlade);
        printf("        [4] Rapier: %d\n", *nRapier);
        printf("        [5] Elucidator: %d\n", *nElucidator);
        printf("        [6] Holy Excalibur: %d\n", *nHolyExcalibur);
        printf("\n");

        printf("        Blue Chest Key: %d\n", *nBlueChestKey);
        printf("        Red Chest Key: %d\n", *nRedChestKey);
        printf("        Black Chest Key: %d\n", *nBlackChestKey);
        printf("\n");

        printf("        [1] Blue Chest: %d\n", *nBlueChest);
        printf("        [2] Red Chest: %d\n", *nRedChest);
        printf("        [3] Black Chest: %d\n", *nBlackChest);
        printf("\n");

        printf("        Equip Weapon: ");
        scanf("%d", &nEquip);

        *nEquippedWeapon = nEquip;

        if(*nEquippedWeapon == 1){
           if(*nIronSword >= 1){
                *nEquippedWeapon = 1;
            }
            else{
                printf("        You Do Not Have This Item Yet!!\n");
                *nEquippedWeapon = 0;
            }
        }else if(*nEquippedWeapon == 2){
            if(*nEbonDagger >= 1){
                *nEquippedWeapon = 2;
            }
            else{
                printf("        You Do Not Have This Item Yet!!\n");
                *nEquippedWeapon = 0;
            }
        }else if(*nEquippedWeapon == 3){
            if(*nLongBlade >= 1){
                *nEquippedWeapon = 3;
            }
            else{
                printf("        You Do Not Have This Item Yet!!\n");
                *nEquippedWeapon = 0;
            }
        }else if(*nEquippedWeapon == 4){
            if(*nRapier >= 1){
                *nEquippedWeapon = 4;
            }
            else{
                printf("        You Do Not Have This Item Yet!!\n");
                *nEquippedWeapon = 0;
            }
        }else if(*nEquippedWeapon == 5){
            if(*nElucidator >= 1){
                *nEquippedWeapon = 5;
            }
            else{
                printf("        You Do Not Have This Item Yet!!\n");
                *nEquippedWeapon = 0;
            }
        }else if(*nEquippedWeapon == 6){
            if(*nHolyExcalibur >= 1){
                *nEquippedWeapon = 6;
            }
            else{
                printf("        You Do Not Have This Item Yet!!\n");
                *nEquippedWeapon = 0;
            }
        }

        printf("\n");
        printf("        Equipped Weapon: %d\n", *nEquippedWeapon);
        printf("\n");
        printf("        Do You Want To Open A Chest?\n");
        printf("        Input The Number Beside The Chest You Would Like To Open Or Input 0 To Open None. \n");
        printf("\n");
        printf("        Choice: ");
        scanf("%d", &nOpenChest);
        printf("\n");

        if(nOpenChest == 1){
            if(*nBlueChestKey >= 1 && *nBlueChest >= 1){
                printf("        You Opened The Blue Chest And Received 300 Coins!\n");
                *nCoins += 300;
                if(*nBlueChestKey > 1){
                    *nBlueChestKey -= 1;
                }else{
                    *nBlueChestKey = 0;
                }
            }else{
                printf("        You Do Not Have Both The Key And The Chest!!\n");
                nOpenChest = 0;
            }
        }else if(nOpenChest == 2){
            if(*nRedChestKey >= 1 && *nRedChest >= 1){
                printf("        You Opened The Red Chest And Received 500 Coins!\n");
                *nCoins += 500;
                if(*nRedChestKey > 1){
                    *nRedChestKey -= 1;
                }else{
                    *nRedChestKey = 0;
                }
            }else{
                printf("        You Do Not Have Both The Key And The Chest!!\n");
                nOpenChest = 0;
            }
        }else if(nOpenChest == 3){
            if(*nBlackChestKey >= 1 && *nBlackChest >= 1){
                printf("        You Opened The Black Chest And Received 1000 Coins!\n");
                printf("        You Also Received The Holy Excalibur Which Deals A Damage of 100!\n");
                *nCoins += 1000;
                *nHolyExcalibur += 1;
                if(*nBlackChestKey > 1){
                    *nBlackChestKey -= 1;
                }else{
                    *nBlackChest = 0;
                }
            }else{
                printf("        You Do Not Have Both The Key And The Chest!!\n");
                nOpenChest = 0;
            }
        }

        printf("\n");
        printf("        Enter 0 If You Want to Return To The Decision Menu Or Input Any Number To Check Inventory Again: ");
        scanf("%d", &nProfileDecision);

    }while(nProfileDecision != 0);
}
    
void printHealthBar(int *nHealth){
	printf("    HP: "); 

    if(*nHealth == 0){
        printf("----- -----");
    }else if(*nHealth <= 10){
        printf("|---- -----");
    }else if(*nHealth > 10 && *nHealth <= 20){
        printf("||--- -----");
    }else if(*nHealth > 20 && *nHealth <= 30){
        printf("|||-- -----");
    }else if(*nHealth > 30 && *nHealth <= 40){
        printf("||||- -----");
    }else if(*nHealth > 40 && *nHealth <= 50){
        printf("||||| -----");
    }else if(*nHealth > 50 && *nHealth <= 60){
        printf("||||| |----");
    }else if(*nHealth > 60 && *nHealth <= 70){
        printf("||||| ||---");
    }else if(*nHealth > 70 && *nHealth <= 80){
        printf("||||| |||--");
    }else if(*nHealth > 80 && *nHealth <= 90){
        printf("||||| ||||-");
    }else if(*nHealth > 90 && *nHealth <= 100){
        printf("||||| |||||");
    }

	printf(" [%d]\n", *nHealth);
}

void printEnemyHealthBar(int *nEnemyHealth){
    printf("\n");
	printf("                   Enemy HP: ");

    if(*nEnemyHealth == 0){
        printf("----- ----- ----- -----");
    }else if(*nEnemyHealth <= 10){
        printf("|---- ----- ----- -----");
    }else if(*nEnemyHealth > 10 && *nEnemyHealth <= 20){
        printf("||--- ----- ----- -----");
    }else if(*nEnemyHealth > 20 && *nEnemyHealth <= 30){
        printf("|||-- ----- ----- -----");
    }else if(*nEnemyHealth > 30 && *nEnemyHealth <= 40){
        printf("||||- ----- ----- -----");
    }else if(*nEnemyHealth > 40 && *nEnemyHealth <= 50){
        printf("||||| ----- ----- -----");
    }else if(*nEnemyHealth > 50 && *nEnemyHealth <= 60){
        printf("||||| |---- ----- -----");
    }else if(*nEnemyHealth > 60 && *nEnemyHealth <= 70){
        printf("||||| ||--- ----- -----");
    }else if(*nEnemyHealth > 70 && *nEnemyHealth <= 80){
        printf("||||| |||-- ----- -----");
    }else if(*nEnemyHealth > 80 && *nEnemyHealth <= 90){
        printf("||||| ||||- ----- -----");
    }else if(*nEnemyHealth > 90 && *nEnemyHealth <= 100){
        printf("||||| ||||| ----- -----");
    }else if(*nEnemyHealth > 100 && *nEnemyHealth <= 110){
        printf("||||| ||||| |---- -----");
    }else if(*nEnemyHealth > 110 && *nEnemyHealth <= 120){
        printf("||||| ||||| ||--- -----");
    }else if(*nEnemyHealth > 120 && *nEnemyHealth <= 130){
        printf("||||| ||||| |||-- -----");
    }else if(*nEnemyHealth > 130 && *nEnemyHealth <= 140){
        printf("||||| ||||| ||||- -----");
    }else if(*nEnemyHealth > 140 && *nEnemyHealth <= 150){
        printf("||||| ||||| ||||| -----");
    }else if(*nEnemyHealth > 150 && *nEnemyHealth <= 160){
        printf("||||| ||||| ||||| |----");
    }else if(*nEnemyHealth > 160 && *nEnemyHealth <= 170){
        printf("||||| ||||| ||||| ||---");
    }else if(*nEnemyHealth > 170 && *nEnemyHealth <= 180){
        printf("||||| ||||| ||||| |||--");
    }else if(*nEnemyHealth > 180 && *nEnemyHealth <= 190){
        printf("||||| ||||| ||||| ||||-");
    }else if(*nEnemyHealth > 190 && *nEnemyHealth <= 200){
        printf("||||| ||||| ||||| |||||");
    }

    if(*nEnemyHealth < 0){
        printf(" [0] \n");
        printf("\n\n");
    }else{
        printf(" [%d]\n", *nEnemyHealth);
        printf("\n\n");
    }    
    

}

void exploreMap(int *nCoins, int *nGameOver, int *nEquippedWeapon,  int *nCharacterFloor, int *nHealth, int *nEnemyHealth, int *nPotion1, int *nPotion2, int *nPotion3, int *nIronSword, int *nEbonDagger, int *nLongBlade, int *nRapier, int *nElucidator, int *nHolyExcalibur, int *nBlueChest, int *nRedChest, int *nBlackChest){
    int number;
    int nPickChoice = 0;
    int nPlayerChoice = 0;
    int nChooseWeapon = 0;
    int nChoosePotion = 0;

    int nDamage = 0;
    int nFullHealth = 100;

    int nEmberWordHealth = 100;
    int nPikefleshHealth = 110;
    int nWispclawHealth = 120;
    int nNightthingHealth = 130;
    int nAbyssfaceHealth = 140;
    int nFubsyhogHealth = 150;
    int nRazormeraHealth = 160;
    int nRottingfreaksHealth = 170;
    int nSmogfangHealth = 180;
    int nVaportalonHealth = 190;
    int nAbysstalonHealth = 200;

    *nGameOver = 2;

    srand(time(NULL));

    do{
        system("cls");

        //dialogue
        printf("\n\n\n"); // 4 spaces

        printCastleArt(); //Castle ASCII Art
        printf("\n");

        //dialogue
        printf("    Hello Traveller! You Are Now Exiting The Village of Innerdalen.\n");
        printf("    You Are Now Entering The Deastle. Short for The Dead Castle. \n");
        printf("    A King Once Lived In This Castle And It Was Full Of Life! \n");
        printf("    Everything Changed When A Witch Appeared And Cursed The Entire Castle. \n");
        printf("    It Is Said That There Are 10 Floors In The Deastle. \n");
        printf("    Each Floor Is Guarded By A Flonster (Floor Monster). \n");
        printf("    There Are Treasure Chests Located At Floors 3, 6, And 10 That Will Help You To Defeat The Flonsters. \n");
        printf("    Be Careful, Traveller. The Higher Floors You Go, The Stronger The Flonster (Floor Monster) Gets. \n");
        printf("    And Once You Die, The Game Ends. \n");
        printf("    Goodluck! \n");
        
        printf("\n");
        printf("    Press Enter To Go Inside The Deastle. ");
        getch();
        system("cls");

        if(*nCharacterFloor == 1){

             *nEnemyHealth = nEmberWordHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered Floor 1. \n");
                printf("    The Flonster Emberword Has Appeared! \n");
                printf("\n");
                printEmberwordArt();  
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Emberword!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Emberword!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Emberword!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Emberword!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Emberword! \n", nDamage);
                    }
                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 11; //damage of enemy can range up to 10
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("You Have Entered Floor 1. \n");
            printf("The Flonster Emberword Has Appeared! \n");
            printf("\n");
            printEmberwordArt();  
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Defeated The Enemy!\n");
            printf("            You Received 100 Coins For Defeating The Enemy!\n");
            printf("            You Have Unlocked The Next Floor! ");
            *nCharacterFloor += 1;
            *nCoins += 100;
            getch();

        }else if(*nCharacterFloor == 2){
             
             *nEnemyHealth = nPikefleshHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered Floor 2. \n");
                printf("    The Flonster Pikeflesh Has Appeared! \n");
                printf("\n");
                printPikefleshArt();  
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Pikeflesh!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Pikeflesh!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Pikeflesh!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Pikeflesh!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Pikeflesh! \n", nDamage);
                    }
                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 16; //damage of enemy can range up to 15
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("You Have Entered Floor 2. \n");
            printf("The Flonster PikeFlesh Has Appeared! \n");
            printf("\n");
            printPikefleshArt();  
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Defeated The Enemy!\n");
            printf("            You Received 200 Coins For Defeating The Enemy!\n");
            printf("            You Have Unlocked The Next Floor! ");
            *nCharacterFloor += 1;
            *nCoins += 200;
            getch();

        }else if(*nCharacterFloor == 3){

             *nEnemyHealth = nWispclawHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered Floor 3. \n");
                printf("    The Flonster Wispclaw Has Appeared! \n");
                printf("\n");
                printWispclawArt(); 
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Wispclaw!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Wispclaw!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Wispclaw!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Wispclaw!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Wispclaw! \n", nDamage);
                    }
                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 21; //damage of enemy can range up to 20
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("You Have Entered Floor 3. \n");
            printf("The Flonster Wispclaw Has Appeared! \n");
            printf("\n");
            printWispclawArt();  
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Defeated The Enemy!\n");
            printf("            You Received 300 Coins For Defeating The Enemy!\n");
            printf("            You Also Received A Blue Chest For Clearing This Floor!\n");
            printf("            You Have Unlocked The Next Floor! ");
            *nCharacterFloor += 1;
            *nCoins += 300;
            *nBlueChest += 1;
            getch();

        }else if(*nCharacterFloor == 4){

            *nEnemyHealth = nNightthingHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered Floor 4. \n");
                printf("    The Flonster Nightthing Has Appeared! \n");
                printf("\n");
                printNightthingArt();
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Nightthing!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Nightthing!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Nightthing!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Nightthing!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Nightthing! \n", nDamage);
                    }

                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 26; //damage of enemy can range up to 25
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("You Have Entered Floor 4. \n");
            printf("The Flonster Nightthing Has Appeared! \n");
            printf("\n");
            printNightthingArt();  
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Defeated The Enemy!\n");
            printf("            You Received 400 Coins For Defeating The Enemy!\n");
            printf("            You Have Unlocked The Next Floor! ");
            *nCharacterFloor += 1;
            *nCoins += 400;
            getch();

        }else if(*nCharacterFloor == 5){
            
            *nEnemyHealth = nAbyssfaceHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered Floor 5. \n");
                printf("    The Flonster Abyssface Has Appeared! \n");
                printf("\n");
                printAbyssfaceArt();
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abyssface!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abyssface!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abyssface!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abyssface!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abyssface! \n", nDamage);
                    }

                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 31; //damage of enemy can range up to 30
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("You Have Entered Floor 5. \n");
            printf("The Flonster Nightthing Has Appeared! \n");
            printf("\n");
            printAbyssfaceArt();
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Defeated The Enemy!\n");
            printf("            You Received 500 Coins For Defeating The Enemy!\n");
            printf("            You Have Unlocked The Next Floor! ");
            *nCharacterFloor += 1;
            *nCoins += 500;
            getch();

        }else if(*nCharacterFloor == 6){
                        
            *nEnemyHealth = nFubsyhogHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered Floor 6. \n");
                printf("    The Flonster Fubsyhog Has Appeared! \n");
                printf("\n");
                printFubsyhogArt();
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Fubsyhog!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Fubsyhog!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Fubsyhog!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Fubsyhog!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Fubsyhog! \n", nDamage);
                    }

                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 36; //damage of enemy can range up to 35
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("You Have Entered Floor 6. \n");
            printf("The Flonster Fubsyhog Has Appeared! \n");
            printf("\n");
            printFubsyhogArt();
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Defeated The Enemy!\n");
            printf("            You Received 600 Coins For Defeating The Enemy!\n");
            printf("            You Also Received A Red Chest For Clearing This Floor!\n");
            printf("            You Have Unlocked The Next Floor! ");
            *nCharacterFloor += 1;
            *nCoins += 600;
            *nRedChest += 1;
            getch();

        }else if(*nCharacterFloor == 7){
         
            *nEnemyHealth = nRazormeraHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered Floor 7. \n");
                printf("    The Flonster Razormera Has Appeared! \n");
                printf("\n");
                printRazormeraArt();
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Razormera!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Razormera!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Razormera!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Razormera!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Razormera! \n", nDamage);
                    }

                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 41; //damage of enemy can range up to 40
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("You Have Entered Floor 7. \n");
            printf("The Flonster Razormera Has Appeared! \n");
            printf("\n");
            printRazormeraArt();
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Defeated The Enemy!\n");
            printf("            You Received 700 Coins For Defeating The Enemy!\n");
            printf("            You Have Unlocked The Next Floor! ");
            *nCharacterFloor += 1;
            *nCoins += 700;
            getch();

        }else if(*nCharacterFloor == 8){
                     
            *nEnemyHealth = nRottingfreaksHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered Floor 8. \n");
                printf("    The Flonster Rottingfreaks Has Appeared! \n");
                printf("\n");
                printRottingfreaksArt();
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Rottingfreaks!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Rottingfreaks!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Rottingfreaks!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Rottingfreaks!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Rottingfreaks! \n", nDamage);
                    }

                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 46; //damage of enemy can range up to 45
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("You Have Entered Floor 8. \n");
            printf("The Flonster Rottingfreaks Has Appeared! \n");
            printf("\n");
            printRottingfreaksArt();
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Defeated The Enemy!\n");
            printf("            You Received 800 Coins For Defeating The Enemy!\n");
            printf("            You Have Unlocked The Next Floor! ");
            *nCharacterFloor += 1;
            *nCoins += 800;
            getch();

        }else if(*nCharacterFloor == 9){
                                 
            *nEnemyHealth = nSmogfangHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered Floor 9. \n");
                printf("    The Flonster Smogfang Has Appeared! \n");
                printf("\n");
                printSmogfangArt();
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Smogfang!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Smogfang!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Smogfang!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Smogfang!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Smogfang! \n", nDamage);
                    }

                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 51; //damage of enemy can range up to 50
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("You Have Entered Floor 9. \n");
            printf("The Flonster Smogfang Has Appeared! \n");
            printf("\n");
            printSmogfangArt();
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Defeated The Enemy!\n");
            printf("            You Received 900 Coins For Defeating The Enemy!\n");
            printf("            You Have Unlocked The Next Floor! ");
            *nCharacterFloor += 1;
            *nCoins += 900;
            getch();

        }else if(*nCharacterFloor == 10){
                                 
            *nEnemyHealth = nVaportalonHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered Floor 10. \n");
                printf("    The Flonster Vaportalon Has Appeared! \n");
                printf("\n");
                printVaportalonArt();
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Vaportalon!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Vaportalon!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Vaportalon!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Vaportalon!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Vaportalon! \n", nDamage);
                    }

                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 56; //damage of enemy can range up to 55
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("You Have Entered Floor 10. \n");
            printf("The Flonster Vaportalon Has Appeared! \n");
            printf("\n");
            printVaportalonArt();
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Defeated The Enemy!\n");
            printf("            You Received 1000 Coins For Defeating The Enemy!\n");
            printf("            You Also Received A Black Chest For Clearing This Floor!\n");
            printf("\n");
            printf("                            ...                     \n");
            printf("                            ...                     \n");
            printf("\n");
            printf("            Celebrating After Defeating The Last Floor Enemy...\n");
            printf("            You Suddenly Discovered A Secret Door That Went Towards Another Floor. \n");
            printf("            A Voice Suddenly Emmitted.\n");
            printf("\n");
            printf("    Unknown Final Boss: What Are You Celebrating For, Mere Mortal. \n");
            printf("                        You Still Can't Escape This Game. \n");
            printf("                        You Still Have To Defeat Me. \n");
            printf("\n");
            printf("            You Ran Out Of The Castle Because of Fear.\n");
            printf("                            ...                     \n");
            printf("\n");
            printf("            Prepare For Your Final Boss. ");
            *nCharacterFloor += 1;
            *nCoins += 1000;
            *nBlackChest += 1;
            getch();

        }else if(*nCharacterFloor == 11){
                                             
            *nEnemyHealth = nAbysstalonHealth;

            while(*nEnemyHealth > 0)
            {   
                system("cls");
                printf("\n");
                printf("    You Have Entered The Secret Floor. \n");
                printf("    The Final Boss Flonster Abysstalon Has Appeared! \n");
                printf("\n");
                printAbysstalonArt();
                printEnemyHealthBar(nEnemyHealth);
                printHealthBar(nHealth);
                printf("\n");
                
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        [1] Attack\n");
                printf("                        [2] Equip\n");
                printf("                        [3] Potion\n");
                printf("    ______________________________________________________\n");
                printf("\n");
                printf("                        Choice: ");
                scanf("%d", &nPickChoice);
                
                nPlayerChoice = nPickChoice;

                if(nPlayerChoice == 1){
                    if(*nEquippedWeapon == 1){
                        *nEnemyHealth -= 10;
                        nDamage = 10;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abysstalon!\n", nDamage);
                        //getch();
                    }else if(*nEquippedWeapon == 2){
                        *nEnemyHealth -= 20;
                        nDamage = 20;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abysstalon!\n", nDamage);
                    }else if(*nEquippedWeapon == 3){
                        *nEnemyHealth -= 30; 
                        nDamage = 30;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abysstalon!\n", nDamage);
                    }else if(*nEquippedWeapon == 4){
                        *nEnemyHealth -= 40;
                        nDamage = 40;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abysstalon!\n", nDamage);
                    }else if(*nEquippedWeapon == 5){
                        *nEnemyHealth -= 60; 
                        nDamage = 60;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abysstalon! \n", nDamage);
                    }else if(*nEquippedWeapon == 6){
                        *nEnemyHealth -= 100; 
                        nDamage = 100;
                        printf("\n");
                        printf("    Status: You Dealt %d Damage To Abysstalon! \n", nDamage);
                    }

                }else if(nPlayerChoice == 2){
                    printf("\n");
                    printf("                        [1] Iron Sword\n");
                    printf("                        [2] Ebon Dagger\n");
                    printf("                        [3] Long Blade\n");
                    printf("                        [4] Rapier\n");
                    printf("                        [5] Elucidator\n");
                    printf("                        [6] Holy Excalibur\n");
                    printf("\n");
                    printf("                        Choose A Weapon: ");
                    scanf("%d", &nChooseWeapon);
                    printf("\n");

                    *nEquippedWeapon = nChooseWeapon;

                    if(*nEquippedWeapon == 1){
                        if(*nIronSword >= 1){
                        *nEquippedWeapon = 1;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 2){
                        if(*nEbonDagger >= 1){
                            *nEquippedWeapon = 2;
                        }
                        else{
                            printf("    You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 3){
                        if(*nLongBlade >= 1){
                            *nEquippedWeapon = 3;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 4){
                        if(*nRapier >= 1){
                            *nEquippedWeapon = 4;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 5){
                        if(*nElucidator >= 1){
                            *nEquippedWeapon = 5;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }else if(*nEquippedWeapon == 6){
                        if(*nHolyExcalibur >= 1){
                            *nEquippedWeapon = 6;
                        }
                        else{
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            *nEquippedWeapon = 0;
                        }
                    }

                }else if(nPlayerChoice == 3){
                    printf("\n");
                    printf("                        [1] Potion\n");
                    printf("                        [2] Potion II\n");
                    printf("                        [3] Potion III\n");
                    printf("\n");
                    printf("                        Choose Health Potion: ");
                    scanf("%d", &nChoosePotion);
                    printf("\n");

                    if(nChoosePotion == 1){
                        if(*nPotion1 >= 1){
                            if(*nHealth >= 80){
                                *nHealth = nFullHealth;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }else{
                                *nHealth += 20;
                                *nPotion1 -= 1;
                                printf("    Status: You Restored 20 Health To Your HP!\n");
                            }
                        }else if(*nPotion1 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }

                    }else if(nChoosePotion == 2){
                        if(*nPotion2 >= 1){
                            if(*nHealth >= 50){
                                *nHealth = nFullHealth;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }else{
                                *nHealth += 50;
                                *nPotion2 -= 1;
                                printf("    Status: You Restored 50 Health To Your HP!\n");
                            }
                        }else if(*nPotion2 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }else if(nChoosePotion == 3){
                        if(*nPotion3 >= 1){
                            *nHealth = nFullHealth;
                            *nPotion3 -= 1;
                            printf("    Status: You Restored 100 Health To Your HP!\n");
                        }else if(*nPotion3 == 0){
                            printf("    Status: You Do Not Have This Item Yet!!\n");
                            nChoosePotion = 0;
                        }
                    }

                }else{
                    printf("    Status: Wrong Input! You Lost Your Turn\n");
                }
                
                if(*nEnemyHealth > 0){
                    number = rand() % 101; //damage of enemy can range up to 100
                    *nHealth -= number;
                    printf("\n    Enemy Status: The Enemy Dealt %d Damage\n", number);
                }else{
                    printf("\n    The Enemy Died!\n");
                }

                if(*nHealth <= 0){
                    printf("\n");
                    printf("    You Died! \n");
                    printf("    You Are Eternally Banished.\n");
                    printf("    Pathetic.");
                    getch();
                    exit(1); // Terminate The Game Once You Die
                }
                else{
                    printf("\n");
                    printf("    Press Enter To Choose Again: ");
                    getch();
                }
               
                  
            }
            system("cls");
            printf("    You Have Entered The Secret Floor. \n");
            printf("    The Final Boss Flonster Abysstalon Has Appeared! \n");
            printf("\n");
            printAbysstalonArt();
            printEnemyHealthBar(nEnemyHealth);
            printHealthBar(nHealth);
            printf("\n");

            printf("    ______________________________________________________\n");
            printf("\n");
            printf("                        [1] Attack\n");
            printf("                        [2] Equip\n");
            printf("                        [3] Potion\n");
            printf("    ______________________________________________________\n");
            printf("\n");
            printf("\n");
            printf("    Status: Congratulations! You Have Finally Defeated The Final Boss!\n");
            printf("            You Have Defeated The Game!\n");
            printf("            You May Now Go Back To Your Real World!\n");
            getch();
            exit(1);

        }
    }while(*nEnemyHealth > 0);

}

void sleepAction(int *nHealth, int *nCoins, int *nDayCounter, int *x){
    int nSleepLocationChoice = 0, nInnSleepChoice = 0, nStopInnSleepChoiceLoop;
    char cSeeInsufficientFundText;
    //int nSleepWhereDecide;

    do{

    system("cls");

    printStreetArt();
    

    printf("\n");
    printf("    Health: %d\n", *nHealth);
    printf("    Coins: %d \n\n", *nCoins);
    printf("    Day: %d \n\n", *nDayCounter);
    //printf("    x: %d\n", *x);
    printf("                 Sleep at an Inn or the Streets?                    \n");
    printf("     You Can Regain Your Full Health If You Slept at an Inn.  \n\n");
    printf("                            [1] Inn - Costs 50 Coins                \n");
    printf("                            [2] Streets - Free                      \n");
    printf("                            [3] Exit                                \n");
    
    //do{
        
    printf("                            Choice: ");
    scanf("%d", &nSleepLocationChoice);


        switch(nSleepLocationChoice){
        case 1:
            if(*nCoins >= 50){
                *nHealth = 100;
                *nCoins -= 50;
                *nDayCounter += 1;
            }else{
                printf("    Insufficient Funds!\n");
                printf("    Press Enter To Try Again!\n");
                cSeeInsufficientFundText = getch();
                //*nHealth += 100;
            }
            
        break;
        case 2:
        *nDayCounter += 1;
        break;
        }
    
    }while(nSleepLocationChoice != 3);

}

void shopMenu(int *nCoins, int *nPotion1, int *nPotion2, int *nPotion3, int *nEbonDagger, int *nLongBlade, int *nRapier, int *nElucidator, int *nBlueChestKey, int *nRedChestKey, int *nBlackChestKey, int *y){
    int nExitOrItemDecision = 1;

    do{
        system("cls");
        printShopArt();
        printf("\n");
        printf("\n                You are in the Shop!\n");
        printf("\n");
        printf("                Coins: %d\n", *nCoins);
        printf("\n");
        printf("                What Item Would You Like to Buy?\n");
        printf("                Input Item Number or Input 0 to Leave the Shop\n");
        printf("                Input: ");
        scanf("%d", &nExitOrItemDecision);
        printf("\n");

        if(nExitOrItemDecision == 1){
            *nPotion1 += 1;
            *nCoins -= 100;
            printf("                You Purchased 1 Potion! \n");
            printf("                Your Have Been Deducted 100 Coins!");
            getch();
        }else if(nExitOrItemDecision == 2){
            *nPotion2 += 1;
            *nCoins -= 200;
            printf("                You Purchased 1 Potion II! \n");
            printf("                Your Have Been Deducted 200 Coins!");
            getch();
        }else if(nExitOrItemDecision == 3){
            *nPotion3 += 1;
            *nCoins -= 300;
            printf("                You Purchased 1 Potion III! \n");
            printf("                Your Have Been Deducted 300 Coins!");
            getch();
        }else if(nExitOrItemDecision == 4){
            *nEbonDagger += 1;
            *nCoins -= 500;
            printf("                You Purchased 1 EbonDagger! \n");
            printf("                Your Have Been Deducted 500 Coins!");
            getch();
        }else if(nExitOrItemDecision == 5){
            *nLongBlade += 1;
            *nCoins -= 650;   
            printf("                You Purchased 1 Long Blade! \n");
            printf("                Your Have Been Deducted 650 Coins!");
            getch(); 
        }else if(nExitOrItemDecision == 6){
            *nRapier += 1;
            *nCoins -= 700;
            printf("                You Purchased 1 Rapier! \n");
            printf("                Your Have Been Deducted 800 Coins!");
            getch(); 
        }else if(nExitOrItemDecision == 7){
            *nElucidator += 1;
            *nCoins -= 1000;   
            printf("                You Purchased 1 Elucidator! \n");
            printf("                Your Have Been Deducted 1000 Coins!");
            getch();
        }else if(nExitOrItemDecision == 8){
            *nBlueChestKey += 1;
            *nCoins -= 200;
            printf("                You Purchased 1 Blue Chest Key! \n");
            printf("                Your Have Been Deducted 200 Coins!");
            getch();    
        }else if(nExitOrItemDecision == 9){
            *nRedChestKey += 1;
            *nCoins -= 500;
            printf("                You Purchased 1 Red Chest Key! \n");
            printf("                Your Have Been Deducted 500 Coins!");
            getch();   
        }else if(nExitOrItemDecision == 10){
            *nBlackChestKey += 1;
            *nCoins -= 1000;
            printf("                You Purchased 1 Black Chest Key! \n");
            printf("                Your Have Been Deducted 1000 Coins!");
            getch();
        }else if(nExitOrItemDecision > 10){
            printf("                Invalid Input!\n");
            printf("                Press Enter To Try Again!\n");
            getch();
        }

    
    }while(nExitOrItemDecision != 0);
    
}

int main(){
    int nTitleDecision = 0;
    int nMenuDecision = 0;
    int nGameOver = 0;

    int nHealth = 100;
    int nEnemyHealth = 0;
    int nCoins = 500;
    int nDayCounter = 1;
    int nCharacterFloor = 1;
    int x = 1;

    int nEquippedWeapon = 1;
    int nPotion1 = 0;
    int nPotion2 = 0;
    int nPotion3 = 0;
    int nIronSword = 1;
    int nEbonDagger = 0;
    int nLongBlade = 0;
    int nRapier = 0;
    int nElucidator = 0;
    int nHolyExcalibur = 0;
    int nBlueChestKey = 0;
    int nRedChestKey = 0;
    int nBlackChestKey = 0;
    int nBlueChest = 0;
    int nRedChest = 0;
    int nBlackChest = 0;
    int y = 0;
    

    char *cName[10];

    while(nGameOver == 0){

        printMenuScreen(&nTitleDecision);
    
        
        if(nTitleDecision == 1){
            system("cls");

            printIntroductionScreen(&cName[10]);
            
            do{
                decisionMenu(&nMenuDecision, cName[10], &nDayCounter, &x);

                switch(nMenuDecision){
                case 1:
                characterProfile(&nHealth, &nCoins, &x, &nEquippedWeapon, &nPotion1, &nPotion2, &nPotion3, &nIronSword, &nEbonDagger, &nLongBlade, &nRapier, &nElucidator, &nHolyExcalibur, &nBlueChestKey, &nRedChestKey, &nBlackChestKey, &nBlueChest, &nRedChest, &nBlackChest, &y);
                break;
                case 2:
                exploreMap(&nCoins, &nGameOver, &nEquippedWeapon, &nCharacterFloor, &nHealth, &nEnemyHealth, &nPotion1, &nPotion2, &nPotion3, &nIronSword, &nEbonDagger, &nLongBlade, &nRapier, &nElucidator, &nHolyExcalibur, &nBlueChest, &nRedChest, &nBlackChest);
                break;
                case 3:
                sleepAction(&nHealth, &nCoins, &nDayCounter, &x);
                break;
                case 4:
                shopMenu(&nCoins, &nPotion1, &nPotion2, &nPotion3, &nEbonDagger, &nLongBlade, &nRapier, &nElucidator, &nBlueChestKey, &nRedChestKey, &nBlackChestKey, &y);
                break;
                case 5:
                return 0;
                }


            }while(nGameOver != 1);

            printHealthBar(&nHealth);
            printEnemyHealthBar(&nEnemyHealth);
            
                
        }

        else{

        return 0;

        }

    }

return 0;
}
