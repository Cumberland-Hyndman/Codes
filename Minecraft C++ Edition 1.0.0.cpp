#include<bits/stdc++.h>
#include<vector>
#include<time.h>
#include<conio.h>
#include<windows.h>
using namespace std;
struct user
{
	int blocks_walk;
	int mine_coin;
	int friends;
	int nitu;
	int tiekuang;
}a;
int i,j;
char ch;
char make[9];
char zuo='a',you='d',tiao='w',dun='s',shouchi1='1',shouchi2='2',shouchi3='3',beibao='e',tuichu='p',wa='k',fang='j',gongzuo='g';

int health=20;
int tot=0;
int dir;
bool gongzuotai;
char blocks[7]={'#','$','=','^','!','%','|'};

struct resources
{
	int muban;
	int mugun;
	int mugao;
	int muchan;
	int mujian;
}c;


struct user_blocks
{
	int nitu;
	int tiekuang;
	int lvbaoshikuang;
	int shuye;
	int zuanshikuang;
	int hongshikuang;
	int mutou;
}b;


/*char bb[100][100]={"                                    Your bb                                       ",
				"  ________________________________________________________________________________",
				"  |nt:    |tk:    |       |       |       |       |       |       |       |      |",
				"  --------------------------------------------------------------------------------",
				"  |       |       |       |       |       |       |       |       |       |      |",
				"  --------------------------------------------------------------------------------",
				"  |       |       |       |       |       |       |       |       |       |      |",
				"  --------------------------------------------------------------------------------",
				"  |       |       |       |       |       |       |       |       |       |      |",
				"  --------------------------------------------------------------------------------",
				"  |       |       |       |       |       |       |       |       |       |      |",
				"  --------------------------------------------------------------------------------"};*/




char welcome[100]={'w','e','l','c','o','m','e',' ','t','o',' ','M','i','n','e','c','r','a','f','t',' ','c','+','+',' ','E','d','i','t','i','o','n','!'};
char choose[100]={'N','o','w',',','p','l','e','a','s','e',' ','c','h','o','o','s','e',' ','w','h','a','t',' ','d','o',' ','y','o','u',' ','w','a','n','t',' ','t','o',' ','d','o',':'};

char mapp[1500][1500]={
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ",
"                                                                                                                                                                                              ###                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         D                                                                                                                                                                                          ",
"                                                                                                                                                                                            **##%#                                                                                                                                                                                                                      &&                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               &;&                                                                                                                                                                              ",
"                                                                                                                                                &             &                        ############%##***                                                                                                             &                                                               &     &                          &&&&               &&                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            &&;&&                                                                                                                                                                                              ",
"                                                                                                         ############$$$$$$                    &&&           &&&              &     ####%%###%#%###%%%#%######                                                                                                       &!&   &                                                         &&&   &&&              &         &&!!&&             &&&&                                                                                                                    &&&                                         &&                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        &::;::&                                                                                                                                                                                                        ",
"                                                                                                         ##################$$$$$$$$           &&!&&         &&!&&            &!&   #####%######%###%###############################################                                                                   !   &!&                                                       &&!&& &&!&&            &&&        &&!!&&            &&!!&&             &     &                          &             &           &        &                    &           &!!!&                                       &&&&                                                                                                                                                                                            &&                                                                                                                                                                                                                                                                                                                                                        &&;;;;;&&                                                                                                                                                                                         ",    
"                                                                                                         #####****#################$$$$$$$$     !             !               !  $#################%%%%%%%%%%%##################*##############%%################+++++######################                          !    !                                                          !     !             &&!&&         !!              &&!!&&            &&&   &&&                        &&&           &&&         &&&      &&&                  &&&         &&!!!&&                   &         &       &&!!&&          &       &              &                            &              &                   &              &                                                                         &&&&                                                                                                                                                                                                                                                                                                                                                      &&::!;!::&&                                                                                                                                                                 ",
"                                                                                                         ##################################$$   !             !               ! $$$#################***################%%%%############################################################################%%$$$#$####$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   !     !               !           !!                !!             &&!&& &&!&&                      &&!&&         &&!&&       &&!&&    &&!&&                &&!&&       &&&!!!&&&                 &&&       &&&      &&!!&&         &&&     &&&            &&&                          &&&            &&&                 &&&            &&&           &          &                  &           &                 &&!!&&            &           &           &           &           &           &       &       &       &               &                                                                                                                                                                                                                                   &&&&!!;!!&&&&                                                                                                                                                                                                        ",
"                                                                                                         ##########################################   ###################################*****##########################################***#############%%%%%%%%######*****#########################################################################################################$$$$$$$$$$$$            !           !!                !!               !     !                          !             !           !        !                    !            !!!                   &&!&&     &&!&&       !!          &&!&&   &&!&&          &&!&&                        &&!&&          &&!&&               &&!&&          &&!&&         &&&        &&&                &&&         &&&                &&!!&&           &&&         &&&         &&&         &&&         &&&         &&&     &&&     &&&     &&&             &&&                                                  &                                                     &                                                                                                                        &&&&&!!!!!&&&&&                                                                                                                                                                                                                                                          ",
"                                                                                                         #####**##########*******####################          #####################################***#################**######################################################***########################################################%%####################################################$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     !!               !     !                          !             !           !        !                    !            !!!                     !         !         !!            !       !              !                            !              !                   !              !          &&!&&      &&!&&              &&!&&       &&!&&                 !!            &&!&&       &&!&&       &&!&&       &&!&&       &&!&&       &&!&&   &&!&&   &&!&&   &&!&&           &&!&&                                                &&&                                                   &&&                                                                                                                            !!!!!                                                                                                                                                                                                                            ",
"                                                                                                         ################################################         ###############################****########################################%%%####                                        #####%%%%#############%%%%%%############################################################################################################$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$+++++++++++++++++++$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$             !         !         !!            !       !              !                            !              !                   !              !            !          !                  !           !                   !!              !           !           !           !           !           !       !       !       !               !                                                 &&!&&                                                 &&!&&                                                                                                                           !!!!!                                                                                                                                                                                        ",
"                                                                                                         ######################################################        #########################################*************#############################                                  ###################################################################################################################################################################%%%######################%%%##########################################%#%#%%%%%%%########################$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$              $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     !          !                  !           !                   !!              !           !           !           !           !           !       !       !       !               !                                                   !                                                     !                                                                                                                             !!!!!                                                                                                                                                                                ",
"                                                                                                         ##############################################         ####        #################################################################################***                            #############################################################%%#########%############%%%#########%###############################################################################################################################################################################################################################################################    #######################################################################$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$+++++++++++++++++$$$$$$$$$$$$$$$$  !                                                     !                                                                                                                             !!!!!                                                                                                                                                                           ",
"                                                                                                         ##############          %%########%#####          ##############       ##################%##%#%#%#%##############%%%########################%#############***############%%#####%% ###########$%%%#%%#############%$$$$$$$$$$$$$$############################%%%%%%%%###########$$$$$###########################################%%#########################%###########$$$############################################$##############%######%#%#########################################################################%%%%%#########################        ######################################################################################################################################################%%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#%#############################++++++++++###############$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$+++++++++++++$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$                                                                        !!!!!                                                                                                                                                                                ",
"                                                                                                         ##%%%%######                 ####%###          ############%%#####       ####%%###########################%%#####################%%##################################%%%%########################################%%#$$$##%%##$$$$##%%%%######################################################################%%%###%%##############%%%%%%########################%%###########%%%%############%%##########################%%%##################%%%%%$$$$$$$$$###################################%%%%%%%%%%#########%%#######%%%#######################%%%         ##########%%%##################%%%%###################%%%%###############################%%%%#####################################%%%#########################%%#####%#%##########################################%%################################%%########################%%###############################%%%#####%%%###############++++++#################%%#################################################$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$                                                                                                                                                 ",
"                                                                                                         ######%%%%#                    ##%##        ##%####%%#%############%%##     #############################################%%##################%###################################%%%%%########%%%########################%%%%############################################%%%#################################%%#%##################%%%#########################################%%%%%#################%%#########%##########%%%#%####################%%%%%%%%%%##########################%%#%#%#%%#####################################################%%#####        ######%%%############%%%%############%%##########################%%###################%%#%######################################%%#%#%######################%%%#%%############%%#%########################%%%#%#########################%%%%##########################%%#%#%%##################################%%#%#%##########%%#%###############%%##%##########################%%#%######################%%#%##############################################%%#%#%###################################################################$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$                                             ",
"                                                                                                         #####%%%%#                       #        #############################%##      ##########%%##%##########%%#####%%##########%%#####%%#%#########**%%*%*%****#############**%%#########*%########################%************###############################################***%*%%%######*%*%################*%*%#**%################%**%##%*#*%#%*#%*#%########::%#######$$$$%#%#%#%#%#%**%*%***:::#######:######################################%%%#########%#%#####%%#%#%################%#%###########################################################%%*%%          **%###############################**%*%######################################%%*%*%############################################%%*%#############%*%#%*#%############*%%#*#%*################################*%*%#%#############%**%#*##############################*%*###*%*#%*#*#%*#*%#*%#*#%*##*%*###################################*%*%*#####%*%*#*#*####*%##*#%#%###*%*###%*%#*#%*#*##*########################%*%#*###########*%*%#**%#**%*#*%#*%#%*%#*%*##############################%%*%*#####################################*%*###########################################################################                                                ",
"                                                                                                         #*%*%*#%#*#++--                       #################*$*#*%*#*#*#*##*#%#####     ######*%*#%*#*#%*%#*%#*%#*%*%#*#%*#*%#*%#*#**#####%*%#*%*%#*#*%#%*%#%*%#%*%#%*%#%*%#%*%#%*%#%*%#%*%#%*%#%*%###################%*%*%###########%*%###################################*%*%*#%*#%*%#*%##########################*%%%##############################################%*%#%*%*%*%%#%*%#%*:::%#*%#*::#%*#%:*:#%*%#*%#:*:%#*:%#*::#*:%#:*#:%%:#:*#:%#:*%#:*#:%*:#%:*%#:*#:*:#%:#%*:#:%*:#*:#%:*#:*#:%*:#%*:#%:*#:%*:%#:*#%*#%####################:#%*#%:*%:*%#%#*:#########          #############%**%:*%#*:%#:*:#*:%#*:######################################*:%:*#%:*#:##########################%*:%:*%#*:%######################################*:%:*#:*:%#*:#############%:*#:%*:####################*%:*:%########################%:*:%###################################%%%#####%*%*#%########################################################################%*%*#*%#*%#*#%*#%%%#################################################*%*%#%#%##########%**%############################################%*%*#*%#*%###############################################################################                                                   ",
"                                                                                                         #########**:::|-----               #######*%*%*#%:*#%:*:#*:%#*:%#:*:#:*%:######*      #%*%:*:#%:#*:###############%*%*#*%*:%#*#%*#*%#***:#%:*:#:*:%*:#%:*:#%*::%#*:#:*%#:*:#%:*:%#:*:#%*:%:*%#:*:%:*%#*#####################%*:%:*%*:#:%############################:%*:%:*%#:*%#:*:##################:###########*%:*:%*:::::#%*#%*#*%%#*#%*#%*%##############################%:*%:*%:#*:############%:*%:#*:%:*%#:*:%#*:%#*:%:%#:*#:%:*:%:##:#%################################%*:%:*%:*%#:##############%*:%:*:#######################*%:*%:*::########################          :#:*%:%:*##########################################*%*:%:*%#:*#####################################:%*:%:*#:*%:*%:#*:#%*#######################################################:*%:*:%#*:#%######################:*%:*:##############%*:%*:#%:###################################%*%*%#*%%#%###################%%%%%%%%%%######################**********###############################%#****###########################::::#%*##########################%*%*#############################%**%#*%###########%*%::*:%#%::%*%*::#%########################%*::*%:*%:*%:*%*:%*::%*#:%::######################                                                           ",
"                                                                                                         ##**%%*%###########|--------   #########%*%*#*%#*#%###############%*%*%############       ##########%*%*%*%#%%*%#*######################################%*%*%#*############################%**%*%#*###################################%**#*#*%#*#################################%***%*%#######################################%*%*%###############%*%*%*#*#%*#%*%#*##################################%*%#*%#*#%*%#*#%##############################################*%*#%*%#*#*##################################%*%*#*%#*#*############################%*%*#%#*#%*##############        ######%*#%*#*%#*#%*#%*#%*#%*#%*#*%#*#%##########################%*%#*#%#*%*#*###################%*%*#*%#*%#%####################################%*%#*%#*%#*#%*%*#*#%*#%*%#########################%*%#*%#*%#**#%*%#*#%*#%*%*#*%%#*#%**%#%*%*#########################%*%*#%**%#*#*%*##############################%*%*#%#*%#*#%###############%*%*#*%*#%#%*#%*###################################%#**%#*#*%%#*########%#*%#*#################################################%*#%*%*#%*#%*%#%*%#*#####################%*%#*%*%#*%#*#*%#*%#*#%##########################################%*#%*#%*%#*%#**                                                          ",
"                                                                                                         #####%%**%%############::**%%**###########################%*%*%######################%*        %%*%*%####%*%###############################################################################################################################################################################################%*%*###################################%*%*#*#############################################################################################################################################################################################################%*%*##############       ##########%*#*#######################################%*##########################################%*#*%######################################################################%*#*%#*########################################################################%*#*#################################################%*%*###################################%*#%*%#*#*%*################################################%*#*%#######################################################################################%*%**#############################################################################                                                      ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ",
"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "};
 

void launch()
{
	for(i=0;i<100;i++)
	{
		cout<<"                                                                                                   Minecraft C++ Edition"<<endl<<endl;
		
		cout<<"                                                                                                launching please wait......"<<endl<<endl;
		//cout<<"                                                                                                         launching please wait......"<<endl<<endl;
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"|   launching:";
		
		for(j=0;j<i/2;j++) cout<<"■■";
		
		cout<<i<<"%";
		cout<<endl;
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		Sleep(100);
		
		if(i==95) Sleep(1017);
		
		if(i==83) Sleep(1000);

		if(i==57) Sleep(1003);		
		system("cls");
	}
}
void loading()
{
	for(i=0;i<100;i++)
	{
		cout<<"                                                                                                    Minecraft C++ Edition"<<endl<<endl;
		
		cout<<"                                                                                                 loading please wait......"<<endl<<endl;
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"|   loading:";
		
		for(j=0;j<i/2;j++) cout<<"■■";
		
		cout<<i<<"%";
		cout<<endl;
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		Sleep(100);
		
		if(i==95) Sleep(1017);
		
		if(i==83) Sleep(1000);

		if(i==57) Sleep(1003);		
		system("cls");
	}
}
void set_up()
{
	for(i=0;i<100;i++)
	{
		cout<<"                                                                                                    Minecraft C++ Edition"<<endl<<endl;
		
		cout<<"                                                                                                  loading please wait......"<<endl<<endl;
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"|   seting up";
		
		for(j=0;j<i/2;j++) cout<<"■■";
		
		cout<<i<<"%";
		cout<<endl;
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		Sleep(100);
		
		if(i==95) Sleep(1017);
		
		if(i==83) Sleep(1000);

		if(i==57) Sleep(1003);		
		system("cls");
	}
}


int main()
{
	//launch();
	for(i=0;i<33;i++) 
	{
		cout<<welcome[i];
		Sleep(100);
	}
	cout<<endl<<endl;
	for(i=0;i<41;i++)
	{
		cout<<choose[i];
		Sleep(100);
	}
	cout<<endl<<endl;
	while(1)
	{
		Sleep(200);
		system("cls");
		cout<<"1. change language"<<endl<<endl;
		cout<<"2. Redefine keys"<<endl<<endl;
		cout<<"3. Search friends"<<endl<<endl;
		cout<<"4. shop"<<endl<<endl;
		cout<<"5. Start"<<endl<<endl;
		ch=getch();
		//if(ch>'5'||ch<'1') MessageBox(,"We don't have this button!","Caption",MB_OK);
		/*if(ch=='1')
		{
			Sleep(200);
			system("cls");
			cout<<endl<<"Which language?"<<endl<<endl;
			cout<<"1. 简体中文"<<endl<<endl;
			cout<<"2. 日本語の表記"<<endl<<endl;
			char os=getch();
			if(ch=='1') chinese_main_manu();
			if(ch=='2') Japan_main_manu();
		}*/
		if(ch=='2')
		{
			system("cls");
			cout<<zuo<<": go left"<<endl<<endl;
			cout<<you<<": go right"<<endl<<endl;
			cout<<tiao<<": jump"<<endl<<endl;
			cout<<dun<<": Squat down"<<endl<<endl;
			cout<<shouchi1<<": Hold1"<<endl<<endl;
			cout<<shouchi2<<": Hold2"<<endl<<endl;
			cout<<shouchi3<<": Hold3"<<endl<<endl;
			cout<<beibao<<": open pack"<<endl<<endl;
			cout<<tuichu<<": exit"<<endl<<endl;
			cout<<"back: o"<<endl<<endl;
			char os=getch();
			if(os=='1')
			{
				cout<<"which do you want to change?";
				cin>>zuo;
				system("cls");
				cout<<zuo<<": go left"<<endl<<endl;
				cout<<you<<": go right"<<endl<<endl;
				cout<<tiao<<": jump"<<endl<<endl;
				cout<<dun<<": Squat down"<<endl<<endl;
				cout<<shouchi1<<": Hold1"<<endl<<endl;
				cout<<shouchi2<<": Hold2"<<endl<<endl;
				cout<<shouchi3<<": Hold3"<<endl<<endl;
				cout<<beibao<<": open pack"<<endl<<endl;
				cout<<tuichu<<": exit"<<endl<<endl; 
			}
			if(os=='2')
			{
				cout<<"which do you want to change?";
				cin>>you;
				system("cls");
				cout<<zuo<<": go left"<<endl<<endl;
				cout<<you<<": go right"<<endl<<endl;
				cout<<tiao<<": jump"<<endl<<endl;
				cout<<dun<<": Squat down"<<endl<<endl;
				cout<<shouchi1<<": Hold1"<<endl<<endl;
				cout<<shouchi2<<": Hold2"<<endl<<endl;
				cout<<shouchi3<<": Hold3"<<endl<<endl;
				cout<<beibao<<": open pack"<<endl<<endl;
				cout<<tuichu<<": exit"<<endl<<endl; 
			}
				if(os=='3')
			{
				cout<<"which do you want to change?";
				cin>>tiao;
				system("cls");
				cout<<zuo<<": go left"<<endl<<endl;
				cout<<you<<": go right"<<endl<<endl;
				cout<<tiao<<": jump"<<endl<<endl;
				cout<<dun<<": Squat down"<<endl<<endl;
				cout<<shouchi1<<": Hold1"<<endl<<endl;
				cout<<shouchi2<<": Hold2"<<endl<<endl;
				cout<<shouchi3<<": Hold3"<<endl<<endl;
				cout<<beibao<<": open pack"<<endl<<endl;
				cout<<tuichu<<": exit"<<endl<<endl; 
			}	
			
				if(os=='4')
			{
				cout<<"which do you want to change?";
				cin>>dun;
				system("cls");
				cout<<zuo<<": go left"<<endl<<endl;
				cout<<you<<": go right"<<endl<<endl;
				cout<<tiao<<": jump"<<endl<<endl;
				cout<<dun<<": Squat down"<<endl<<endl;
				cout<<shouchi1<<": Hold1"<<endl<<endl;
				cout<<shouchi2<<": Hold2"<<endl<<endl;
				cout<<shouchi3<<": Hold3"<<endl<<endl;
				cout<<beibao<<": open pack"<<endl<<endl;
				cout<<tuichu<<": exit"<<endl<<endl; 
			}	
		
			if(os=='5')
			{
				cout<<"which do you want to change?";
				cin>>shouchi1;
				system("cls");
				cout<<zuo<<": go left"<<endl<<endl;
				cout<<you<<": go right"<<endl<<endl;
				cout<<tiao<<": jump"<<endl<<endl;
				cout<<dun<<": Squat down"<<endl<<endl;
				cout<<shouchi1<<": Hold1"<<endl<<endl;
				cout<<shouchi2<<": Hold2"<<endl<<endl;
				cout<<shouchi3<<": Hold3"<<endl<<endl;
				cout<<beibao<<": open pack"<<endl<<endl;
				cout<<tuichu<<": exit"<<endl<<endl; 
			}	
		
			if(os=='6')
			{
				cout<<"which do you want to change?";
				cin>>shouchi2;
				system("cls");
				cout<<zuo<<": go left"<<endl<<endl;
				cout<<you<<": go right"<<endl<<endl;
				cout<<tiao<<": jump"<<endl<<endl;
				cout<<dun<<": Squat down"<<endl<<endl;
				cout<<shouchi1<<": Hold1"<<endl<<endl;
				cout<<shouchi2<<": Hold2"<<endl<<endl;
				cout<<shouchi3<<": Hold3"<<endl<<endl;
				cout<<beibao<<": open pack"<<endl<<endl;
				cout<<tuichu<<": exit"<<endl<<endl; 
			}	
				if(os=='7')
			{
				cout<<"which do you want to change?";
				cin>>shouchi3;
				system("cls");
				cout<<zuo<<": go left"<<endl<<endl;
				cout<<you<<": go right"<<endl<<endl;
				cout<<tiao<<": jump"<<endl<<endl;
				cout<<dun<<": Squat down"<<endl<<endl;
				cout<<shouchi1<<": Hold1"<<endl<<endl;
				cout<<shouchi2<<": Hold2"<<endl<<endl;
				cout<<shouchi3<<": Hold3"<<endl<<endl;
				cout<<beibao<<": open pack"<<endl<<endl;
				cout<<tuichu<<": exit"<<endl<<endl; 
			}	
			if(os=='8')
			{
				cout<<"which do you want to change?";
				cin>>beibao;
				system("cls");
				cout<<zuo<<": go left"<<endl<<endl;
				cout<<you<<": go right"<<endl<<endl;
				cout<<tiao<<": jump"<<endl<<endl;
				cout<<dun<<": Squat down"<<endl<<endl;
				cout<<shouchi1<<": Hold1"<<endl<<endl;
				cout<<shouchi2<<": Hold2"<<endl<<endl;
				cout<<shouchi3<<": Hold3"<<endl<<endl;
				cout<<beibao<<": open pack"<<endl<<endl;
				cout<<tuichu<<": exit"<<endl<<endl; 
			}	
			if(os=='9')
			{
				cout<<"which do you want to change?";
				cin>>tuichu;
				system("cls");
				cout<<zuo<<": go left"<<endl<<endl;
				cout<<you<<": go right"<<endl<<endl;
				cout<<tiao<<": jump"<<endl<<endl;
				cout<<dun<<": Squat down"<<endl<<endl;
				cout<<shouchi1<<": Hold1"<<endl<<endl;
				cout<<shouchi2<<": Hold2"<<endl<<endl;
				cout<<shouchi3<<": Hold3"<<endl<<endl;
				cout<<beibao<<": open pack"<<endl<<endl;
				cout<<tuichu<<": exit"<<endl<<endl; 
			}	
				
		}
		if(ch=='5')
		{
			int dx=111,dy=28;
			//set_up();
			
			while(1)
			{
				if(health<=0)
				
				{
					system("color cf");
					cout<<"        You died!"<<endl<<endl;
					Sleep(1000);
					system("color 0f");
					break; 
				}
				system("cls");
				if(mapp[dx][dy]=='E')
				{
					cout<<"are you sure you want to leave the game? You won't get a game experience without the game."<<endl<<endl;
					char ext[100];
					cin>>ext;
					if(strcmp(ext,"yes")==1) break; 
					break;	
				} 
				for(i=dy-8;i<=dy+8;i++)
				{
					for(j=dx-20;j<=dx+20;j++)
					{
						if(i==dy && j==dx)
						{
							cout<<"Y";
							continue;
						}
						else cout<<mapp[i][j];
					}
					cout<<endl;
				}
				cout<<health<<"/"<<"20";
				ch=getch();
				if(ch==zuo)
				{
					dir=0;
					if(mapp[dy][dx-1]==' ')
					{
						dx--;
						dir=0;	
					} 
				}
				if(ch==you)
				{
					dir=1;
					if(mapp[dy][dx+1]==' ')
					{
						dx++;
						dir=1;	
					} 	
				}
				while(1)
				{
					tot=0;
					system("cls");
					if(mapp[dy+1][dx]==' '||mapp[dy+1][dx]=='+')
					{
						tot++;
						if(tot>=4)
						{
							health-=tot/2;
							system("color cf");
							Sleep(100);
							system("color 0f");
						}
						dy++;
						for(i=dy-8;i<=dy+8;i++)
						{
							for(j=dx-20;j<=dx+20;j++)
							{
								if(i==dy && j==dx)
								{
									cout<<"Y";
									continue;
								}
								else cout<<mapp[i][j];
							}
							cout<<endl;
						}
						cout<<health<<"/"<<"20";
					}
					else break;		
				}
				if(ch==tiao)
				{
					if(mapp[dy-1][dx]==' ')
					{
						system("cls");
						dy--;
						for(i=dy-8;i<=dy+8;i++)
							{
								for(j=dx-20;j<=dx+20;j++)
								{
									if(i==dy && j==dx)
									{
										cout<<"Y";
										continue;
									}
									else cout<<mapp[i][j];
								}
								cout<<endl;
							}
							cout<<health<<"/"<<"20";	
						char so=getch();
						if(so==you)
						{
							
							dir=1;
							if(mapp[dy][dx+1]==' ')
							{
								dx++;	
							} 
							system("cls");
							for(i=dy-8;i<=dy+8;i++)
							{
								for(j=dx-20;j<=dx+20;j++)
								{
									if(i==dy && j==dx)
									{
										cout<<"Y";
										continue;
									}
									else cout<<mapp[i][j];
								}
								cout<<endl;
							}	
							cout<<health<<"/"<<"20";
						}	
						if(so==zuo)
						{
							dir=0;
							if(mapp[dy][dx-1]==' ') dx--;
							system("cls");
							for(i=dy-8;i<=dy+8;i++)
							{
								for(j=dx-20;j<=dx+20;j++)
								{
									if(i==dy && j==dx)
									{
										cout<<"Y";
										continue;
									}
									else cout<<mapp[i][j];
								}
								cout<<endl;
							}
							cout<<health<<"/"<<"20";	
					} 
					
						}
						dy--;
						
				}
				if(ch=='s') dir=2; 
				if(ch==wa)
				{
					if(dir==0)
					{
						if(mapp[dy][dx-1]!=' ') 
						{
							if(mapp[dy][dx-1]=='#') b.nitu++;
							if(mapp[dy][dx-1]=='$') b.tiekuang++;
							if(mapp[dy][dx-1]=='=') b.lvbaoshikuang++;
							if(mapp[dy][dx-1]=='^') b.shuye++;
							if(mapp[dy][dx-1]==';') b.zuanshikuang++;
							if(mapp[dy][dx-1]=='%') b.hongshikuang++;
							if(mapp[dy][dx-1]=='!') b.mutou++;
							dx--;
							mapp[dy][dx]=' ';
							for(i=dy-8;i<=dy+8;i++)
							{
								for(j=dx-20;j<=dx+20;j++)
								{
									if(i==dy && j==dx)
									{
										cout<<"Y";
										continue;
									}
									else cout<<mapp[i][j];
								}
								cout<<endl;
							}
							cout<<health<<"/"<<"20";
						}
					}
					if(dir==1)
					{
						if(mapp[dy][dx+1]!=' ') 
						{
							if(mapp[dy][dx+1]=='#') b.nitu++;
							if(mapp[dy][dx+1]=='$') b.tiekuang++;
							if(mapp[dy][dx+1]=='=') b.lvbaoshikuang++;
							if(mapp[dy][dx+1]=='^') b.shuye++;
							if(mapp[dy][dx+1]==';') b.zuanshikuang++;
							if(mapp[dy][dx+1]=='%') b.hongshikuang++;
							if(mapp[dy][dx+1]=='!') b.mutou++;
							dx++;
							mapp[dy][dx]=' ';
							for(i=dy-8;i<=dy+8;i++)
							{
								for(j=dx-20;j<=dx+20;j++)
								{
									if(i==dy && j==dx)
									{
										cout<<"Y";
										continue;
									}
									else cout<<mapp[i][j];
								}
								cout<<endl;
							}
							cout<<health<<"/"<<"20";
						}
					}
					if(dir==2)
					{
						if(mapp[dy+1][dx]!=' ') 
						{
							if(mapp[dy+1][dx]=='#') b.nitu++;
							if(mapp[dy+1][dx]=='$') b.tiekuang++;
							if(mapp[dy+1][dx]=='=') b.lvbaoshikuang++;
							if(mapp[dy+1][dx]=='^') b.shuye++;
							if(mapp[dy+1][dx]=='!') b.zuanshikuang++;
							if(mapp[dy+1][dx]=='%') b.hongshikuang++;
							if(mapp[dy+1][dx]=='|') b.mutou++;
							dy++;
							mapp[dy][dx]=' ';
							for(i=dy-8;i<=dy+8;i++)
							{
								for(j=dx-20;j<=dx+20;j++)
								{
									if(i==dy && j==dx)
									{
										cout<<"Y";
										continue;
									}
									else cout<<mapp[i][j];
								}
								cout<<endl;
							}
							cout<<health<<"/"<<"20";
						}
					}
				}
				if(ch==fang)
				{
					if(mapp[dy][dx+1]==' ')
					{
						for(i=dy-8;i<=dy+8;i++)
							{
								for(j=dx-20;j<=dx+20;j++)
								{
									if(i==dy && j==dx)
									{
										cout<<"Y";
										continue;
									}
									else cout<<mapp[i][j];
								}
								cout<<endl;
							}
							cout<<health<<"/"<<"20";
						char so=getch();
							mapp[dy][dx+1]=so;
							for(i=dy-8;i<=dy+8;i++)
							{
								for(j=dx-20;j<=dx+20;j++)
								{
									if(i==dy && j==dx)
									{
										cout<<"Y";
										continue;
									}
									else cout<<mapp[i][j];
								}
								cout<<endl;
							}
							cout<<health<<"/"<<"20"; 	
					}
				}
				if(ch==beibao)
				{
					system("cls");
					cout<<blocks[0]<<": "<<b.nitu<<endl<<endl;
					cout<<blocks[1]<<": "<<b.tiekuang<<endl<<endl;
					cout<<blocks[2]<<": "<<b.lvbaoshikuang<<endl<<endl;
					cout<<blocks[3]<<": "<<b.shuye<<endl<<endl;
					cout<<blocks[4]<<": "<<b.zuanshikuang<<endl<<endl;
					cout<<blocks[5]<<": "<<b.hongshikuang<<endl<<endl;
					cout<<blocks[6]<<": "<<b.mutou<<endl<<endl;
					char os=getch();
				}
				if(ch==gongzuo)
				{panduan:
					if(b.mutou>0)
					{
						cout<<"you can make "<<b.mutou*4<<" Board!"<<endl<<endl;
						char os=getch();
						if(os=='b')
						{
							b.mutou--;
							c.muban+=4;	
						}
						goto panduan; 	
					}
					if(c.muban>=4)
					{
						cout<<"you can make "<<c.muban/4<<" Workbench!"<<endl<<endl;
						char os=getch();
						if(os=='b')
						{
							c.muban-=4;
							gongzuotai=true;	
						}	
					} 
				}
				if(ch==' ')
				{
					if(gongzuotai==true)
					{
						if(dir==0)
						{
							if(mapp[dy][dx-1]==' ')
							{
								mapp[dy][dx-1]='>';
							}
						}
						if(dir==1)
						{
							if(mapp[dy][dx+1]==' ')
							{
								mapp[dy][dx+1]='>';
							}
						}
						if(dir==2)
						{
							if(mapp[dy+1][dx]==' ')
							{
								mapp[dy+1][dx]='>';
							}
						}
					}
				}
				if(ch=='l')
				{
					if(mapp[dy][dx-1]=='>')
					{
						//int ck=clock();
						/*if(ck>=2)
						{
							cout<<"what do you want to make?"<<endl<<endl; 
						}*/
						cout<<"what do you want to make?"<<endl<<endl;
						char os=getch();
						int tot=0;
						cout<<"-----------------------"<<endl;
						cout<<"|   1   |  2   |  3   |"<<endl;
						cout<<"-----------------------"<<endl;
						cout<<"|   4   |  5   |  6   |"<<endl;
						cout<<"-----------------------"<<endl;
						cout<<"|   7   |  8   |  9   |"<<endl;
						cout<<"-----------------------"<<endl;
						for(i=0;i<9;i++)
						{
							cin>>make[i];
							if(make[i]=='|') tot++;
						}
						cout<<"do you want to make "<<tot<<" sticks?"<<endl<<endl;
					}
				}
			}
		}
	}
}
