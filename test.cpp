#include<stdlib.h>																					//�]�tstdlib.h�禡�w 
#include<iostream>																					//�]�tiostream C++�Ψ禡�w 
#include<windows.h>																					//�]�twindows.h�禡�w 
using namespace std;																				//�ϥΩR�W�Ŷ�std 

class Calculator{																					//�Ы�Calculator Class 
	public:																							//�ŧi�}��Ѽ� 
		Calculator(){}																				//Calculator Class��l�Ƴ]�w 
		int Basis(char Cal, int Ope1, int Ope2){													//�Ыت���Function Basis
			int Ans = 0;																			//��l�ƾ��Ans 
			switch(Cal){																			//�Q��switch���B��l���y 
				case '+':																			//�p�G�B��lCal��+�h�q���B�}�l���� 
					Ans = Ope1 + Ope2;																//�N�ۥ[ 
				break;																				//����switch
				case '-':																			//�P�W12�� 
					Ans = Ope1 - Ope2;																//�P�W13�� 
				break;																				//�P�W14�� 
				case '*':																			//�P�W12�� 
					Ans = Ope1 * Ope2;																//�P�W13�� 
				break;																				//�P�W14�� 
				case '/':																			//�P�W12�� 
					Ans = Ope1 / Ope2;																//�P�W13�� 
				break;																				//�P�W14�� 
				default:																			//�p�G��J���B��l���O�[����h���榹�B 
					MessageBox(NULL , TEXT("Incorrect import data") ,								//��ܿ��~�T���بåHIncorrect import data�@�����e 
						TEXT( "system hint" ) ,	MB_ICONSTOP + MB_OK );								//��ܿ��~�T���åHsystem hint�@�����D�HSTOP�Ϯק@���Ϧ��ﶵ�h�O�u��OK 
					Ans = -404;																		//���~�ƭ� 
			}																						//switch���� 
			return Ans;																				//�^��Ans�ƭ� 
		}																							//Basis���� 
};																									//class���� 

int main(){																							//�{���D�骺main 
	char Cal;																						//��l�Ʀr��Cal 
	int Ope1, Ope2;																					//��l�ƾ��Ope1��Ope2 
	Calculator calculator;																			//��l��Calculator calculator 
	while(1){																						//�L���j�� 
		cout << "Please input formula:" << endl;													//�C�L�r��Please input formula:�ëe���U�@�� 
		cin >> Ope1 >> Cal >> Ope2;																	//�q�w�İϴ�����J�üg�JOpe1,Cal,Ope2 
		cout << Ope1 << Cal << Ope2 << " = " << calculator.Basis(Cal, Ope1, Ope2) <<  endl;			//�C�L�X��J���⦡�H�αqcalculator.Basis Function��^�����G 
		system("pause");																			//�ե�DOS���OPAUSE 
		system("cls");																				//�ե�DOS���OCLS 
	}																								//while(1)���� 
}																									//main���� 
