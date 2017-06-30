#include<string.h>
#include<stdio.h>
#include<process.h>
main()
{
	  char ch;
	  int choice1, choice2, choice3;
	  int n1,n2,n3,n4,n5,n6,n7,n8;
	  float p1=0.21,p2=0.16,p3=0.13,p4=0.08,p5=0.05;
	  float x1,x2=0,x3;
	  int r,i,j,c=0;
	  float A[10],B[10];
	  float a1=0.19,a2=0.14,a3=0.05;
	  float b1=0.25,b2=0.20,b3=0.15,b4=0.10,b5=0.05,b6=0.075;
	  printf("\n\n\t\t\t\t\tSEMESTER  PERFORMANCE  INDEX  CALCULATOR  (SPIC)");
	  JUMP:
	  printf("\n\n\n  What do you wish to calculate?");
	  printf("\n\n 1. SPI (Semester Performance Index)");
	  printf("\n\n 2. CPI (Cumulative Performance Index)");
	  printf("\n\n 3. Exit");
	  printf("\n\n  Enter your choice : ");
	  scanf("%d",&choice1);
	    if(choice1==1)
	      {
	      	  printf("\n\n   Enter your branch :");
	      	  printf("\n\n  1. CE");
	      	  printf("\n  2. CSE");
	      	  printf("\n  3. EE");
	      	  printf("\n  4. ECE");
	      	  printf("\n  5. E&I");
	      	  printf("\n  6. ME");
	      	  printf("\n\n  Enter your choice : ");
	      	  scanf("%d",&choice2);
	      	  printf("\n\n  Enter your semster : ");
	      	  printf("\n\n  1. 1st");
	      	  printf("\n  2. 2nd");
	      	  printf("\n  3. 3rd");
	      	  printf("\n  4. 4th");
	      	  printf("\n  5. 5th");
	      	  printf("\n  6. 6th");
	      	  printf("\n  7. 7th");
	      	  printf("\n  8. 8th");
	      	  printf("\n\n Enter your choice : ");
	      	  scanf("%d",&choice3);
	      	    if((choice2==1||2||3||4||5||6)&&(choice3==1))
	      	      {
	      	      	  printf("\n\n  Enter your expected pointer in the following subjects :  ");
	      	      	  printf("\n\n 1. Physics/Chemistry : ");
	      	      	  scanf("%d",&n1);
	      	      	  printf("\n 2. Basic Electrical Engineering : ");
	      	      	  scanf("%d",&n2);
					  printf("\n 3. Engineering Graphics : ");
					  scanf("%d",&n3);
	      	      	  printf("\n 4. Mathematics I : ");
	      	      	  scanf("%d",&n4);
	      	      	  printf("\n 5. Communication Skills : ");
	      	      	  scanf("%d",&n5);
	      	      	  printf("\n 6. Physics/Chemistry Laboratory : ");
	      	      	  scanf("%d",&n6);
	      	      	  printf("\n 7. Workshop : ");
	      	      	  scanf("%d",&n7);
	      	      	    float x1=(n1*p1)+(n2*p2)+(n3*p3)+(n4*p1)+(n5*p2)+(n6*p5)+(n7*p4);
							printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
	            else if((choice2==1||2||3||4||5||6)&&(choice3==2))
			      {  
			          printf("\n\n  Enter your expected pointer in the following subjects : ");
			          printf("\n\n 1. Engineering Mechanics : ");
			          scanf("%d",&n1);
			          printf("\n 2. Mathematics - II : ");
			          scanf("%d",&n2);
			          printf("\n 3. Physics/Chemistry : ");
			          scanf("%d",&n3);
			          printf("\n 4. Basic Electronics : ");
			          scanf("%d",&n4);
			          printf("\n 5. Introduction to Computing : ");
			          scanf("%d",&n5);
			          printf("\n 6. Physics/Chemistry Laboratory : ");
			          scanf("%d",&n6);
			          printf("\n 7. Electrical Science Laboratory : ");
			          scanf("%d",&n7);
			          printf("\n 8. Computing Laboratory : ");
			          scanf("%d",&n8);
			          x1=(n1*a1)+(n2*a1)+(n3*a1)+(n4*a2)+(n5*a2)+(n6*a3)+(n7*a3)+(n8*a3);
			            printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
	            else if((choice2==1)&&(choice3==3))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Strength of Materials : ");
                           scanf("%d",&n1);
                           printf("\n 2. Surveying : ");
                           scanf("%d",&n2);
                           printf("\n 3. Building Materials and Construction : ");
                           scanf("%d",&n3);
                           printf("\n 4. Mathematics - III : ");
                           scanf("%d",&n4);
                           printf("\n 5. Engineering Geology : ");
                           scanf("%d",&n5);
                           printf("\n 6. Surveying Laboratory : ");
                           scanf("%d",&n6);
                           x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b2)+(n5*b3)+(n6*b5);
                            printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
                else if((choice2==1)&&(choice3==4))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Structural Analysis - I : ");
                           scanf("%d",&n1);
                           printf("\n 2. Hydraulics : ");
                           scanf("%d",&n2);
                           printf("\n 3. Structural Design - I : ");
                           scanf("%d",&n3);
                           printf("\n 4. Environmental Engineering - I : ");
                           scanf("%d",&n4);
                           printf("\n 5. Managerial Economics : ");
                           scanf("%d",&n5);
                           printf("\n 6. Engineering Geology Laboratory : ");
                           scanf("%d",&n6);
                           printf("\n 7. Hydraulics Laboratory : ");
                           scanf("%d",&n7);
                           x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5);
                            printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
                else if((choice2==1)&&(choice3==5))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Structural Analysis - II : ");
                           scanf("%d",&n1);
                           printf("\n 2. Geotechnical Engineering : ");
                           scanf("%d",&n2);
                           printf("\n 3. Transportation Engineering - I : ");
                           scanf("%d",&n3);
                           printf("\n 4. Environmental Engineering - II : ");
                           scanf("%d",&n4);
                           printf("\n 5. Business Management : ");
                           scanf("%d",&n5);
                           printf("\n 6. Environmental Engineering Laboratory : ");
                           scanf("%d",&n6);
                           printf("\n 7. Geotechnical Engineering Laboratory : ");
                           scanf("%d",&n7);
                           printf("\n 8. Transportation Engineering Laboratory : ");
                           scanf("%d",&n8);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5)+(n8*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
				else if((choice2==1)&&(choice3==7))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - I : ");
                           scanf("%d",&n1);
                           printf("\n 2. Civil Engineering Estimation : ");
                           scanf("%d",&n2);
                           printf("\n 3. Irrigation Engineering : ");
                           scanf("%d",&n3);
                           printf("\n 4. Dept. Elective - I : ");
                           scanf("%d",&n4);
                           printf("\n 5. Dept. Elective - II : ");
                           scanf("%d",&n5);
                           printf("\n 6. Open Elective - I : ");
                           scanf("%d",&n6);
                           printf("\n 7. Foundation Engineering Laboratory : ");
                           scanf("%d",&n7);
                           x1=(n1*b2)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3)+(n7*b5);
                            printf("\n  Your expected pointer is %f.",x1);
					 printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
				else if((choice2==1)&&(choice3==8))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - II : ");
                           scanf("%d",&n1);
                           printf("\n 2. Structural Design - III : ");
                           scanf("%d",&n2);
                           printf("\n 3. Elements of Earthquake Engineering : ");
                           scanf("%d",&n3);
                           printf("\n 4. Dept. Elective - III : ");
                           scanf("%d",&n4);
                           printf("\n 5. Dept. Elective - IV : ");
                           scanf("%d",&n5);
                           printf("\n 6. Open Elective - II : ");
                           scanf("%d",&n6);
                           x1=(n1*b1)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3);
                            printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
                else if((choice2==2)&&(choice3==3))
                         {
                            printf("\n\n Enter your expected pointer in the following subjects : ");
                            printf("\n\n 1. Data Structures : ");
                            scanf("%d",&n1);
                            printf("\n 2. Discrete Structures : ");
                            scanf("%d",&n2);
                            printf("\n 3. Mathematics - III : ");
                            scanf("%d",&n3);
                            printf("\n 4. Circuits and Switching : ");
                            scanf("%d",&n4);
                            printf("\n 5. Object Oriented Design : ");
                            scanf("%d",&n5);
                            printf("\n 6. Data Structures Laboratory : ");
                            scanf("%d",&n6);
                            printf("\n 7. Circuits and Switching Laboratory : ");
                            scanf("%d",&n7);
                            x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5);
                              printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
			    else if((choice2==2)&&(choice3==4))
                         {
                            printf("\n\n Enter your expected pointer in the following subjects : ");
                            printf("\n\n 1. Formal Language and Automata Theory : ");
                            scanf("%d",&n1);
                            printf("\n 2. Signals and Data Communication : ");
                            scanf("%d",&n2);
                            printf("\n 3. Mathematics - IV : ");
                            scanf("%d",&n3);
                            printf("\n 4. Computer Graphics : ");
                            scanf("%d",&n4);
                            printf("\n 5. Mannagerial Economics : ");
                            scanf("%d",&n5);
                            printf("\n 6. Signals and Data Communication Laboratory : ");
                            scanf("%d",&n6);
                            printf("\n 7. Computer Graphics Laboratory : ");
                            scanf("%d",&n7);
                            x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5);
                              printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
                else if((choice2==2)&&(choice3==5))
                         {
                            printf("\n\n Enter your expected pointer in the following subjects : ");
                            printf("\n\n 1. Computer Architecture : ");
                            scanf("%d",&n1);
                            printf("\n 2. Microprocessor and System Programming : ");
                            scanf("%d",&n2);
                            printf("\n 3. Mathematics - V : ");
                            scanf("%d",&n3);
                            printf("\n 4. Computer Network : ");
                            scanf("%d",&n4);
                            printf("\n 5. Business Management : ");
                            scanf("%d",&n5);
                            printf("\n 6. Microprocessor and System Programming Laboratory : ");
                            scanf("%d",&n6);
                            printf("\n 7. Computer Network Laboratory : ");
                            scanf("%d",&n7);
                            x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5);
                              printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }	
				else if((choice2==2)&&(choice3==6))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Design and Analysis of Algorithm : ");
                           scanf("%d",&n1);
                           printf("\n 2. Software Engineering : ");
                           scanf("%d",&n2);
                           printf("\n 3. Operating System : ");
                           scanf("%d",&n3);
                           printf("\n 4. Compiler Design : ");
                           scanf("%d",&n4);
                           printf("\n 5. Database Management System : ");
                           scanf("%d",&n5);
                           printf("\n 6. Database Management System Laboratory : ");
                           scanf("%d",&n6);
                           printf("\n 7. Compiler Laboratory : ");
                           scanf("%d",&n7);
                           printf("\n 8. Operating System Laboratory : ");
                           scanf("%d",&n8);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5)+(n8*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
				else if((choice2==2)&&(choice3==7))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Theory of Computation : ");
                           scanf("%d",&n1);
                           printf("\n 2. Project - I : ");
                           scanf("%d",&n2);
                           printf("\n 3. VLSI Design : ");
                           scanf("%d",&n3);
                           printf("\n 4. Dept. Elective - I : ");
                           scanf("%d",&n4);
                           printf("\n 5. Dept. Elective - II : ");
                           scanf("%d",&n5);
                           printf("\n 6. Open Elective - I : ");
                           scanf("%d",&n6);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
                else if((choice2==2)&&(choice3==8))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - II : ");
                           scanf("%d",&n1);
                           printf("\n 2. Advanced Computer Architecture : ");
                           scanf("%d",&n2);
                           printf("\n 3. Machine Learning : ");
                           scanf("%d",&n3);
                           printf("\n 4. Dept. Elective - III : ");
                           scanf("%d",&n4);
                           printf("\n 5. Dept. Elective - IV : ");
                           scanf("%d",&n5);
                           printf("\n 6. Open Elective - II : ");
                           scanf("%d",&n6);
                           x1=(n1*b1)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }	
				else if((choice2==3)&&(choice3==3))
                         {
                            printf("\n\n Enter your expected pointer in the following subjects : ");
                            printf("\n\n 1. Circuits and Networks : ");
                            scanf("%d",&n1);
                            printf("\n 2. Analog Electronics : ");
                            scanf("%d",&n2);
                            printf("\n 3. Mathematics - III : ");
                            scanf("%d",&n3);
                            printf("\n 4. Electromagnetic Field Theory : ");
                            scanf("%d",&n4);
                            printf("\n 5. Electrical Measurement and Measuring Instruments : ");
                            scanf("%d",&n5);
                            printf("\n 6. Measurement Laboratory : ");
                            scanf("%d",&n6);
                            printf("\n 7. Network Theory Laboratory : ");
                            scanf("%d",&n7);
                            x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5);
                              printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
				
						 }	
				else if((choice2==3)&&(choice3==4))
                         {
                            printf("\n\n Enter your expected pointer in the following subjects : ");
                            printf("\n\n 1. Power System - I : ");
                            scanf("%d",&n1);
                            printf("\n 2. Signals and Systems : ");
                            scanf("%d",&n2);
                            printf("\n 3. Electrical Machines - I : ");
                            scanf("%d",&n3);
                            printf("\n 4. Digital Electronics : ");
                            scanf("%d",&n4);
                            printf("\n 5. Managerial Economics : ");
                            scanf("%d",&n5);
                            printf("\n 6. Analog and Digital Electronics Laboratory : ");
                            scanf("%d",&n6);
                            printf("\n 7. Software Engineering Laboratory : ");
                            scanf("%d",&n7);
                            x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5);
                              printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
				    }	
					else if((choice2==3)&&(choice3==5))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Electrical Machines - II : ");
                           scanf("%d",&n1);
                           printf("\n 2. Control System - I : ");
                           scanf("%d",&n2);
                           printf("\n 3. Power System - II : ");
                           scanf("%d",&n3);
                           printf("\n 4. Microprocessor and Microcontroller : ");
                           scanf("%d",&n4);
                           printf("\n 5. Business Management : ");
                           scanf("%d",&n5);
                           printf("\n 6. Electrical Machines Laboratory - I : ");
                           scanf("%d",&n6);
                           printf("\n 7. Control System Laboratory : ");
                           scanf("%d",&n7);
                           printf("\n 8. Power System Laboratory : ");
                           scanf("%d",&n8);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5)+(n8*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }		
				else if((choice2==3)&&(choice3==6))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Power Electronics : ");
                           scanf("%d",&n1);
                           printf("\n 2. Control System - II : ");
                           scanf("%d",&n2);
                           printf("\n 3. Switchgear and Industrial Protection : ");
                           scanf("%d",&n3);
                           printf("\n 4. Programming and Data Structure : ");
                           scanf("%d",&n4);
                           printf("\n 5. Instrumentation : ");
                           scanf("%d",&n5);
                           printf("\n 6. Electrical Machines Laboratory - II : ");
                           scanf("%d",&n6);
                           printf("\n 7. Power Control and Instrumentation Laboratory : ");
                           scanf("%d",&n7);
                           printf("\n 8. Microprocessor and Microcontroller Laboratory : ");
                           scanf("%d",&n8);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5)+(n8*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
				else if((choice2==3)&&(choice3==7))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - I : ");
                           scanf("%d",&n1);
                           printf("\n 2. Dept. Elective - I : ");
                           scanf("%d",&n2);
                           printf("\n 3. Dept. Elective - II : ");
                           scanf("%d",&n3);
                           printf("\n 4. Open Elective - I : ");
                           scanf("%d",&n4);
                           printf("\n 5. Digital Signal Processing : ");
                           scanf("%d",&n5);
                           printf("\n 6. Industrial Drives : ");
                           scanf("%d",&n6);
                           printf("\n 7. Power Electronics and Drivers Laboratory : ");
                           scanf("%d",&n7);
                           x1=(n1*b2)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3)+(n7*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }	
				else if((choice2==3)&&(choice3==8))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - II : ");
                           scanf("%d",&n1);
                           printf("\n 2. Analog and Digital Communication : ");
                           scanf("%d",&n2);
                           printf("\n 3. Dept. Elective - III : ");
                           scanf("%d",&n3);
                           printf("\n 4. Dept. Elective - IV : ");
                           scanf("%d",&n4);
                           printf("\n 5. Dept. Elective - V : ");
                           scanf("%d",&n5);
                           printf("\n 6. Open Elective - II : ");
                           scanf("%d",&n6);
                           x1=(n1*b1)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }		
				else if((choice2==4)&&(choice3==3))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Mathematics - III : ");
                           scanf("%d",&n1);
                           printf("\n 2. Signals, Systems and Networks : ");
                           scanf("%d",&n2);
                           printf("\n 3. Data Structures : ");
                           scanf("%d",&n3);
                           printf("\n 4. Analog Electronic Circuits : ");
                           scanf("%d",&n4);
                           printf("\n 5. Semiconductor Devices and Circuits : ");
                           scanf("%d",&n5);
                           printf("\n 6. Electronics Laboratory - I : ");
                           scanf("%d",&n6);
                           x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b2)+(n5*b3)+(n6*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
				else if((choice2==4)&&(choice3==4))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Principles of Communication Engineering : ");
                           scanf("%d",&n1);
                           printf("\n 2. Pulse and Digital Electronic Circuits : ");
                           scanf("%d",&n2);
                           printf("\n 3. Analog and Integrated Circuits and Technology : ");
                           scanf("%d",&n3);
                           printf("\n 4. Probability and Random Processes : ");
                           scanf("%d",&n4);
                           printf("\n 5. Managerial Economics : ");
                           scanf("%d",&n5);
                           printf("\n 6. Electronics Laboratory - II : ");
                           scanf("%d",&n6);
                           x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b2)+(n5*b3)+(n6*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }			
				else if((choice2==4)&&(choice3==5))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Digital Communication : ");
                           scanf("%d",&n1);
                           printf("\n 2. Electro Magnetic Field Theory and Wave Propagation : ");
                           scanf("%d",&n2);
                           printf("\n 3. Computer Organization and Microprocessors : ");
                           scanf("%d",&n3);
                           printf("\n 4. Introduction to VLSI Design : ");
                           scanf("%d",&n4);
                           printf("\n 5. Business Management : ");
                           scanf("%d",&n5);
                           printf("\n 6. Electronics Laboratory - III : ");
                           scanf("%d",&n6);
                           printf("\n 7. Electronics Laboratory - IV : ");
                           scanf("%d",&n7);
                           printf("\n 8. Electronics Laboratory - V : ");
                           scanf("%d",&n8);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5)+(n8*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }				
				else if((choice2==4)&&(choice3==6))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Measurement and Instrumentation : ");
                           scanf("%d",&n1);
                           printf("\n 2. Control System : ");
                           scanf("%d",&n2);
                           printf("\n 3. Digital Signal Processing : ");
                           scanf("%d",&n3);
                           printf("\n 4. Data Communication and Networks : ");
                           scanf("%d",&n4);
                           printf("\n 5. RF and Microwave Engineering : ");
                           scanf("%d",&n5);
                           printf("\n 6. Design Laboratory : ");
                           scanf("%d",&n6);
                           printf("\n 7. Electronics Laboratory - VI : ");
                           scanf("%d",&n7);
                           printf("\n 8. Electronics Laboratory - VII : ");
                           scanf("%d",&n8);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5)+(n8*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }	
				else if((choice2==4)&&(choice3==7))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - I : ");
                           scanf("%d",&n1);
                           printf("\n 2. Dept. Elective - I : ");
                           scanf("%d",&n2);
                           printf("\n 3. Dept. Elective - II : ");
                           scanf("%d",&n3);
                           printf("\n 4. Open Elective - I : ");
                           scanf("%d",&n4);
                           printf("\n 5. Principle of Optoelectronics and Fibre Optics : ");
                           scanf("%d",&n5);
                           printf("\n 6. Power Electronics : ");
                           scanf("%d",&n6);
                           printf("\n 7. Electronics Laboratory - VIII : ");
                           scanf("%d",&n7);
                           x1=(n1*b2)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3)+(n7*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }	
				else if((choice2==4)&&(choice3==8))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - II : ");
                           scanf("%d",&n1);
                           printf("\n 2. Advanced Communication Engineering : ");
                           scanf("%d",&n2);
                           printf("\n 3. Dept. Elective - III : ");
                           scanf("%d",&n3);
                           printf("\n 4. Dept. Elective - IV : ");
                           scanf("%d",&n4);
                           printf("\n 5. Dept. Elective - V : ");
                           scanf("%d",&n5);
                           printf("\n 6. Open Elective - II : ");
                           scanf("%d",&n6);
                           x1=(n1*b1)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
				else if((choice2==5)&&(choice3==3))
                         {
                            printf("\n\n Enter your expected pointer in the following subjects : ");
                            printf("\n\n 1. Mathematics - III : ");
                            scanf("%d",&n1);
                            printf("\n 2. Circuits and Networks : ");
                            scanf("%d",&n2);
                            printf("\n 3. Electrical and Electronic Measurement and Instruments : ");
                            scanf("%d",&n3);
                            printf("\n 4. Analog Electronics : ");
                            scanf("%d",&n4);
                            printf("\n 5. Electromagnetic Field Theory : ");
                            scanf("%d",&n5);
                            printf("\n 6. Circuits and Networks Laboratory : ");
                            scanf("%d",&n6);
                            printf("\n 7. Measurement Laboratory : ");
                            scanf("%d",&n7);
                            x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5);
                              printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
				       }
				else if((choice2==5)&&(choice3==4))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Transduces and Sensors : ");
                           scanf("%d",&n1);
                           printf("\n 2. Control System - I : ");
                           scanf("%d",&n2);
                           printf("\n 3. Advanced Electronics : ");
                           scanf("%d",&n3);
                           printf("\n 4. Digital Electronics : ");
                           scanf("%d",&n4);
                           printf("\n 5. Managerial Economics : ");
                           scanf("%d",&n5);
                           printf("\n 6. Analog and Digital Electronics Laboratory : ");
                           scanf("%d",&n6);
                           printf("\n 7. Control System Laboratory : ");
                           scanf("%d",&n7);
                           printf("\n 8. Transducers and Sensors Laboratory : ");
                           scanf("%d",&n8);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5)+(n8*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						}		
				else if((choice2==5)&&(choice3==5))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Process Control Engineering : ");
                           scanf("%d",&n1);
                           printf("\n 2. Communication and Telemetry : ");
                           scanf("%d",&n2);
                           printf("\n 3. Industrial Instrumentation - I : ");
                           scanf("%d",&n3);
                           printf("\n 4. Power and Industrial Electronics : ");
                           scanf("%d",&n4);
                           printf("\n 5. Business Management : ");
                           scanf("%d",&n5);
                           printf("\n 6. Industrial Process Engineering Laboratory : ");
                           scanf("%d",&n6);
                           printf("\n 7. Communication Laboratory : ");
                           scanf("%d",&n7);
                           printf("\n 8. Power Electronics Laboratory : ");
                           scanf("%d",&n8);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5)+(n8*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						}			
				else if((choice2==5)&&(choice3==6))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Industrial Instrumentation - II : ");
                           scanf("%d",&n1);
                           printf("\n 2. Microprocessors and Microcontrollers : ");
                           scanf("%d",&n2);
                           printf("\n 3. Control System - II : ");
                           scanf("%d",&n3);
                           printf("\n 4. Digital Signal Processing : ");
                           scanf("%d",&n4);
                           printf("\n 5. Virtual Instrumentation : ");
                           scanf("%d",&n5);
                           printf("\n 6. Microprocessors and Microcontrollers Laboratory : ");
                           scanf("%d",&n6);
                           printf("\n 7. Instrumentation Laboratory : ");
                           scanf("%d",&n7);
                           printf("\n 8. Digital Signal Processing Laboratory : ");
                           scanf("%d",&n8);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b5)+(n7*b5)+(n8*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						}	
				else if((choice2==5)&&(choice3==7))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - I : ");
                           scanf("%d",&n1);
                           printf("\n 2. Dept. Elective - I : ");
                           scanf("%d",&n2);
                           printf("\n 3. Dept. Elective - II : ");
                           scanf("%d",&n3);
                           printf("\n 4. Open Elective - I : ");
                           scanf("%d",&n4);
                           printf("\n 5. Advanced Instrumentation : ");
                           scanf("%d",&n5);
                           printf("\n 6. IC and VLSI Design : ");
                           scanf("%d",&n6);
                           printf("\n 7. Instrumentation and Automation Laboratory : ");
                           scanf("%d",&n7);
                           x1=(n1*b2)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3)+(n7*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }		
				else if((choice2==5)&&(choice3==8))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - II : ");
                           scanf("%d",&n1);
                           printf("\n 2. Real Time Embedded Systems : ");
                           scanf("%d",&n2);
                           printf("\n 3. Dept. Elective - III : ");
                           scanf("%d",&n3);
                           printf("\n 4. Dept. Elective - IV : ");
                           scanf("%d",&n4);
                           printf("\n 5. Dept. Elective - V : ");
                           scanf("%d",&n5);
                           printf("\n 6. Open Elective - II : ");
                           scanf("%d",&n6);
                           x1=(n1*b1)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }	
				else if((choice2==6)&&(choice3==3))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Mathematics - III : ");
                           scanf("%d",&n1);
                           printf("\n 2. Thermodynamics - I : ");
                           scanf("%d",&n2);
                           printf("\n 3. Theory of Mechanisms and Machines : ");
                           scanf("%d",&n3);
                           printf("\n 4. Manufacturing Process - I : ");
                           scanf("%d",&n4);
                           printf("\n 5. Material Science : ");
                           scanf("%d",&n5);
                           printf("\n 6. Machine Drawing : ");
                           scanf("%d",&n6);
                           x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b3)+(n5*b3)+(n6*b4);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }	
				else if((choice2==6)&&(choice3==4))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Thermodynamics - II : ");
                           scanf("%d",&n1);
                           printf("\n 2. Fluid Mechanics - I : ");
                           scanf("%d",&n2);
                           printf("\n 3. Instrumentation and Measurement : ");
                           scanf("%d",&n3);
                           printf("\n 4. Mechanics of Solids : ");
                           scanf("%d",&n4);
                           printf("\n 5. Managerial Economics : ");
                           scanf("%d",&n5);
                           printf("\n 6. ME Laboratory - I : ");
                           scanf("%d",&n6);
                           x1=(n1*b2)+(n2*b2)+(n3*b2)+(n4*b2)+(n5*b3)+(n6*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }	
				else if((choice2==6)&&(choice3==5))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Dynamics and Control of Machinery : ");
                           scanf("%d",&n1);
                           printf("\n 2. Fluid Mechanics - II : ");
                           scanf("%d",&n2);
                           printf("\n 3. Manufacturing Process - II : ");
                           scanf("%d",&n3);
                           printf("\n 4. Machine Design - I : ");
                           scanf("%d",&n4);
                           printf("\n 5. Business Management : ");
                           scanf("%d",&n5);
                           printf("\n 6. ME Laboratory - II : ");
                           scanf("%d",&n6);
                           printf("\n 7. ME Laboratory - III : ");
                           scanf("%d",&n7);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b6)+(n7*b6);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
                else if((choice2==6)&&(choice3==6))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Automobile Engineering : ");
                           scanf("%d",&n1);
                           printf("\n 2. Turbo Machinery : ");
                           scanf("%d",&n2);
                           printf("\n 3. Advanced Manufacturing Process : ");
                           scanf("%d",&n3);
                           printf("\n 4. Machine Design - II : ");
                           scanf("%d",&n4);
                           printf("\n 5. Heat Transfer : ");
                           scanf("%d",&n5);
                           printf("\n 6. Workshop Practice : ");
                           scanf("%d",&n6);
                           printf("\n 7. ME Laboratory - IV : ");
                           scanf("%d",&n7);
                           x1=(n1*b2)+(n2*b2)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b6)+(n7*b6);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }
				else if((choice2==6)&&(choice3==7))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - I : ");
                           scanf("%d",&n1);
                           printf("\n 2. Dept. Elective - I : ");
                           scanf("%d",&n2);
                           printf("\n 3. Dept. Elective - II : ");
                           scanf("%d",&n3);
                           printf("\n 4. Open Elective - I : ");
                           scanf("%d",&n4);
                           printf("\n 5. Industrial Engineering and Operation Research : ");
                           scanf("%d",&n5);
                           printf("\n 6. Power Plant Engineering : ");
                           scanf("%d",&n6);
                           printf("\n 7. ME Laboratory - V : ");
                           scanf("%d",&n7);
                           x1=(n1*b2)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3)+(n7*b5);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }		
				else if((choice2==6)&&(choice3==8))
                         {
                           printf("\n\n Enter your expected pointer in the following subjects : ");
                           printf("\n\n 1. Project - II : ");
                           scanf("%d",&n1);
                           printf("\n 2. Computer Aided Design and Manufacturing : ");
                           scanf("%d",&n2);
                           printf("\n 3. Dept. Elective - III : ");
                           scanf("%d",&n3);
                           printf("\n 4. Dept. Elective - IV : ");
                           scanf("%d",&n4);
                           printf("\n 5. Dept. Elective - V : ");
                           scanf("%d",&n5);
                           printf("\n 6. Open Elective - II : ");
                           scanf("%d",&n6);
                           x1=(n1*b1)+(n2*b3)+(n3*b3)+(n4*b3)+(n5*b3)+(n6*b3);
                             printf("\n  Your expected pointer is %f.",x1);
					        printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }	
				}
                   else if(choice1==2)
                   {
		              {
                      	  printf("\n  Enter your current semester : ");
                      	  scanf("%d",&r);
                      	    for(i=1;i<r;i++)
                      	      {
                      	      	  printf("\n  Enter your pointer in semester %d : ",i);
                      	      	  scanf("%f",&A[i]);
								}
						  printf("\n  Enter your expected pointer this semester : ");
						  scanf("%f",&A[i]);
                      }
                B[0]=38;
                B[1]=42;
                  for(j=2;j<=7;j++)
                    {
                    	  B[j]=40;
					}
                  for(i=0;i<r;i++)
                    {
                    	  c+=B[i];
					}
				  for(i=1,j=0;i<=r;i++,j++)
				    {
				    	  x2+=A[i]*B[j];
					}
			    x3=x2/c;
			      printf("\n  Your expected CPI is %f.",x3);
			       printf("\n\n  Do you wish to calculate more? (y/n) : ");
					        scanf(" %c",&ch);
					           if(ch=='y')
					        {
					      	  goto JUMP;
						    }
				            	else
					        {
					  	       exit(0);
					        }
						 }	
			      
	        else exit(0);
}
      
	      	    
	 
		  

		
	  
	  
	
