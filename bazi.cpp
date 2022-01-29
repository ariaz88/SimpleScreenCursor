#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

 int n=10 ;
 int fillIndex=0;
 int ranNumber[3];
 bool gameBoardData[n*n];
 bool randCircle[n*n];
 bool gameOver=false;

 char key;

  if(2<= n <=15)

    {
   cin>>n;

    }


    for (int r=0; r<(n*n); r++)

        {
            gameBoardData[r]=false;
            randCircle[r]=false;
        }
    gameBoardData[fillIndex]=true;

    for (int a =0; a<3; a++)

        {

        ranNumber[a]=  rand() % ((n*n) -1) + 1;
         randCircle[ranNumber[a]]=true;


        }

    while(true)

        {


   for (int i=0; i<n ;i++)

        {

        for (int k=0 ; k<n ; k++)

            {
              if( !gameBoardData[(i*n)+k] && !randCircle[(i*n)+k])

                {
                cout<< "[ ]";

                } else

                { if(ranNumber[0]!=fillIndex &&ranNumber[1]!=fillIndex&&ranNumber[2]!=fillIndex )



                    {
                          if(  gameBoardData[(i*n)+k]== true )

                        {
                              cout<<"[x]";

                        }else if(randCircle[(i*n)+k] ==true)

                        {
                              cout<<"[o]";
                        }

                    }
                    else

                    {


                       if(randCircle[(i*n)+k]&& gameBoardData[(i*n)+k])

                       {
                            cout<<"[G]";
                            gameOver=true;

                       }else if(randCircle[(i*n)+k] && !gameBoardData[(i*n)+k])

                       {
                           cout<<"[o]";
                       }



                    }


                }







                /*else

                {
                      if(randCircle[(i*n)+k]&& gameBoardData[(i*n)+k])

                    {
                     cout<<"[G]";

                    }else if(randCircle[(i*n)+k] && !gameBoardData[(i*n)+k])

                    {
                      cout<<"[o]";
                    }
                    else


                    {
                     cout<< "[ ]";

                    }




               */
            }

            cout<<endl;
        }

        if(gameOver)

            {
            cout<< " Game Over! ";

             break;
            }
        cout<< "Press W/A/S/D : ";
        cin>>key;
        if ( key=='q')

            {
             cout<< " Get out of the game! ";
             break;

            }

        else if(key=='d')

            {
              if(fillIndex == (n*n)-1 )
                {
                gameBoardData[fillIndex] =false;
                fillIndex=0;
                gameBoardData[fillIndex] =true;

                }else
                {
                gameBoardData[fillIndex] =false;
                fillIndex++;
                gameBoardData[fillIndex] =true;


                }

            }else if(key=='a')

            {
                if(fillIndex == 0 )

                    {

                      gameBoardData[fillIndex] =false;
                      fillIndex=(n*n)-1;
                      gameBoardData[fillIndex] =true;


                    }else

                    {
                    gameBoardData[fillIndex] =false;
                    fillIndex--;
                    gameBoardData[fillIndex] =true;


                    }


            } else if(key=='s')

            { if(fillIndex+n >((n*n)-1))

            {
             gameBoardData[fillIndex] =false;
                fillIndex -= n*(n-1);
                gameBoardData[fillIndex] =true;

            }else

            { gameBoardData[fillIndex] =false;
              fillIndex +=n;
            } gameBoardData[fillIndex] =true;

            }
             else if(key=='w')

            { if(fillIndex < n)

            {
                gameBoardData[fillIndex] =false;
                fillIndex += n*(n-1);
                gameBoardData[fillIndex] =true;

            }else

            { gameBoardData[fillIndex] =false;
              fillIndex -=n;
            } gameBoardData[fillIndex] =true;

            }




         system("cls");
        }


return 0;


}
