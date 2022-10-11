#include<stdlib.h>																					//包含stdlib.h函式庫 
#include<iostream>																					//包含iostream C++用函式庫 
#include<windows.h>																					//包含windows.h函式庫 
using namespace std;																				//使用命名空間std 

class Calculator{																					//創建Calculator Class 
	public:																							//宣告開放參數 
		Calculator(){}																				//Calculator Class初始化設定 
		int Basis(char Cal, int Ope1, int Ope2){													//創建物件Function Basis
			int Ans = 0;																			//初始化整數Ans 
			switch(Cal){																			//利用switch做運算子分流 
				case '+':																			//如果運算子Cal為+則從此處開始執行 
					Ans = Ope1 + Ope2;																//就相加 
				break;																				//脫離switch
				case '-':																			//同上12行 
					Ans = Ope1 - Ope2;																//同上13行 
				break;																				//同上14行 
				case '*':																			//同上12行 
					Ans = Ope1 * Ope2;																//同上13行 
				break;																				//同上14行 
				case '/':																			//同上12行 
					Ans = Ope1 / Ope2;																//同上13行 
				break;																				//同上14行 
				default:																			//如果輸入的運算子不是加減乘除則執行此處 
					MessageBox(NULL , TEXT("Incorrect import data") ,								//顯示錯誤訊息框並以Incorrect import data作為內容 
						TEXT( "system hint" ) ,	MB_ICONSTOP + MB_OK );								//顯示錯誤訊息並以system hint作為標題以STOP圖案作為圖式選項則是只有OK 
					Ans = -404;																		//錯誤數值 
			}																						//switch結束 
			return Ans;																				//回傳Ans數值 
		}																							//Basis結束 
};																									//class結束 

int main(){																							//程式主體的main 
	char Cal;																						//初始化字元Cal 
	int Ope1, Ope2;																					//初始化整數Ope1及Ope2 
	Calculator calculator;																			//初始化Calculator calculator 
	while(1){																						//無限迴圈 
		cout << "Please input formula:" << endl;													//列印字串Please input formula:並前往下一行 
		cin >> Ope1 >> Cal >> Ope2;																	//從緩衝區提取輸入並寫入Ope1,Cal,Ope2 
		cout << Ope1 << Cal << Ope2 << " = " << calculator.Basis(Cal, Ope1, Ope2) <<  endl;			//列印出輸入的算式以及從calculator.Basis Function返回的結果 
		system("pause");																			//調用DOS指令PAUSE 
		system("cls");																				//調用DOS指令CLS 
	}																								//while(1)結束 
}																									//main結束 
