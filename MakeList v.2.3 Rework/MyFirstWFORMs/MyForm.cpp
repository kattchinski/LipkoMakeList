#include "MyForm.h"
#include <string>
#include <iostream>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyFirstWFORMs::MyForm form;
	Application::Run(% form);
}


const short prices[27]
{ 130,190,150,156,125, //PELMENI
 75,103,80,80,110,110,109,160, //VARENIKI
 140,190,170,140,150,146,158, //FABRICATY
 125,156,120,116,138,138,180
};
std::string names[27] =
{ "ПЕЛЬМЕНІ \nДитячі:","Кролик:","Свинина та телятина:","Індичка:","Курка:",
  "\n\nВАРЕНИКИ \nКартопля:","Капуста:","Печінка:","Гриби:","Солодкі:","Ліниві:","Вишня:","М'ясо",
  "\n\nМ'ЯСНЕ \nКурка:","Котлети домашні:","Котлети індичка:","Котлети дитячі кідс:","Котлети рибні:","Голубчики:","Пальчики:",
  "\n\nМЛИНЦІ \nКурка\\гриби:","Млинці м'ясо:","Млинці солодкі:","Сирники ванільні:","Сирніки мацарелла","Мітболи:","Перчик:"
};

int result = 0,i = 0;

int mistakeWar(int i) {
	if (i > 27) {
		MessageBox::Show("Ви закінчили список!");
	}
	return 0;
}


std::string list;
	


	System::Void MyFirstWFORMs::MyForm::TextBoxTotal_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
	System::Void MyFirstWFORMs::MyForm::textBoxFullList_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		return System::Void();
	}
	





	System::Void MyFirstWFORMs::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (i > 25) {
			if (i == 26) {
				list += names[i] + " 1" + "\n" + std::to_string((1 * prices[i])) + " ГРН\n";
				textBoxFullList->Text = gcnew System::String(list.c_str());

				result = result + 1 * prices[i];

				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());

				

				i++;
				textBoxOutput->Text = gcnew System::String(names[i].c_str());
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}
		list += names[i] + " 1" + "\n" + std::to_string((1 * prices[i])) + " ГРН\n";
		textBoxFullList->Text = gcnew System::String(list.c_str());


		result = result + 1 * prices[i];

		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);

	}
	System::Void MyFirstWFORMs::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (i > 25) {
			if (i == 26) {
				list += names[i] + " 2" + "\n" + std::to_string((2 * prices[i])) + " ГРН\n";
				textBoxFullList->Text = gcnew System::String(list.c_str());

				result = result + 2 * prices[i];

				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());



				i++;
				textBoxOutput->Text = gcnew System::String(names[i].c_str());
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}
		list += names[i] + " 2\n" + std::to_string((2 * prices[i])) + " ГРН\n";
		textBoxFullList->Text = gcnew System::String(list.c_str());


		result = result + 2 * prices[i];

		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
	}
	System::Void MyFirstWFORMs::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (i > 25) {
			if (i == 26) {
				list += names[i] + " 3" + "\n" + std::to_string((3 * prices[i])) + " ГРН\n";
				textBoxFullList->Text = gcnew System::String(list.c_str());

				result = result + 3 * prices[i];

				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());



				i++;
				textBoxOutput->Text = gcnew System::String(names[i].c_str());
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}
		list += names[i] + " 3\n" + std::to_string((3 * prices[i])) + " ГРН\n";
		textBoxFullList->Text = gcnew System::String(list.c_str());


		result = result + 3 * prices[i];

		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
	}
	System::Void MyFirstWFORMs::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (i > 25) {
			if (i == 26) {
				list += names[i] + " 4" + "\n" + std::to_string((4 * prices[i])) + " ГРН\n";
				textBoxFullList->Text = gcnew System::String(list.c_str());

				result = result + 4 * prices[i];

				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());



				i++;
				textBoxOutput->Text = gcnew System::String(names[i].c_str());
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}
		list += names[i] + " 4\n" + std::to_string((4 * prices[i])) + " ГРН\n";
		textBoxFullList->Text = gcnew System::String(list.c_str());


		result = result + 4 * prices[i];

		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
	}
	System::Void MyFirstWFORMs::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (i > 25) {
			if (i == 26) {
				list += names[i] + " 5" + "\n" + std::to_string((5 * prices[i])) + " ГРН\n";
				textBoxFullList->Text = gcnew System::String(list.c_str());

				result = result + 5 * prices[i];

				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());



				i++;
				textBoxOutput->Text = gcnew System::String(names[i].c_str());
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}
		list += names[i] + " 5\n" + std::to_string((5 * prices[i])) + " ГРН\n";
		textBoxFullList->Text = gcnew System::String(list.c_str());


		result = result + 5 * prices[i];

		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
	}
	System::Void MyFirstWFORMs::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (i > 25) {
			if (i == 26) {
				list += names[i] + " 6" + "\n" + std::to_string((6 * prices[i])) + " ГРН\n";
				textBoxFullList->Text = gcnew System::String(list.c_str());

				result = result + 6 * prices[i];

				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());



				i++;
				textBoxOutput->Text = gcnew System::String(names[i].c_str());
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}
		list += names[i] + " 6\n" + std::to_string((6 * prices[i])) + " ГРН\n";
		textBoxFullList->Text = gcnew System::String(list.c_str());


		result = result + 6 * prices[i];

		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
	}
	System::Void MyFirstWFORMs::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (i > 25) {
			if (i == 26) {
				list += names[i] + " 7" + "\n" + std::to_string((7 * prices[i])) + " ГРН\n";
				textBoxFullList->Text = gcnew System::String(list.c_str());

				result = result + 7 * prices[i];

				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());



				i++;
				textBoxOutput->Text = gcnew System::String(names[i].c_str());
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}
		list += names[i] + " 7\n" + std::to_string((7 * prices[i])) + " ГРН\n";
		textBoxFullList->Text = gcnew System::String(list.c_str());


		result = result + 7 * prices[i];

		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
	}
	System::Void MyFirstWFORMs::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (i > 25) {
			if (i == 26) {
				list += names[i] + " 8" + "\n" + std::to_string((8 * prices[i])) + " ГРН\n";
				textBoxFullList->Text = gcnew System::String(list.c_str());

				result = result + 8 * prices[i];

				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());



				i++;
				textBoxOutput->Text = gcnew System::String(names[i].c_str());
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}
		list += names[i] + " 8\n" + std::to_string((8 * prices[i])) + " ГРН\n";
		textBoxFullList->Text = gcnew System::String(list.c_str());


		result = result + 8 * prices[i];

		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
	}
	System::Void MyFirstWFORMs::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (i > 25) {
			if (i == 26) {
				list += names[i] + " 9" + "\n" + std::to_string((9 * prices[i])) + " ГРН\n";
				textBoxFullList->Text = gcnew System::String(list.c_str());

				result = result + 9 * prices[i];

				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());



				i++;
				textBoxOutput->Text = gcnew System::String(names[i].c_str());
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}
		list += names[i] + " 9\n" + std::to_string((9 * prices[i])) + " ГРН\n";
		textBoxFullList->Text = gcnew System::String(list.c_str());


		result = result + 9 * prices[i];

		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
	}
	System::Void MyFirstWFORMs::MyForm::button0_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (i > 25) {
			if (i == 26) {
				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());

				i++;
				
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}


		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
	}
	System::Void MyFirstWFORMs::MyForm::buttonInput_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		if (textBoxInput->Text == "") {
			MessageBox::Show("Тут пусто,тюбік!");
			return;
		}
		short quantity = System::Convert::ToInt32(textBoxInput->Text);//Correct convertation to Int!

		if (quantity < 1) {
			textBoxInput->Text = "";
			return;
		}
		
		if (i > 25) {
			if (i == 26) {
				
				list += names[i] + " " + std::to_string(quantity) + "\n" + std::to_string((quantity * prices[i])) + " ГРН\n";
				textBoxFullList->Text = gcnew System::String(list.c_str());

				result = result + quantity * prices[i];

				list += "\nВсього:" + std::to_string(result);
				textBoxFullList->Text = gcnew System::String(list.c_str());



				i++;
				textBoxOutput->Text = gcnew System::String(names[i].c_str());
				TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
				textBoxOutput->Text = "Список закінчився!";
				return;
			}
			textBoxOutput->Text = "Список закінчився!";
			MessageBox::Show("Ви закінчили список!");
			i++;
			return;
		}
		list += names[i] + " " + std::to_string(quantity) + "\n" + std::to_string(quantity * prices[i]) + " ГРН\n";
		textBoxFullList->Text = gcnew System::String(list.c_str());


		result = result + quantity * prices[i];
		textBoxInput->Text = "";
		i++;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
	}










	System::Void MyFirstWFORMs::MyForm::menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e)
	{
		return System::Void();
	}

	System::Void MyFirstWFORMs::MyForm::resetToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		i = 0;
		result = 0;
		textBoxOutput->Text = gcnew System::String(names[i].c_str());
		TextBoxTotal->Text = "Всього:" + Convert::ToString(result);
		textBoxInput->Text = "";
		textBoxFullList->Text = "";
		list = "";
	}
	
	System::Void MyFirstWFORMs::MyForm::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}


	System::Void MyFirstWFORMs::MyForm::textBoxInput_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		return System::Void();
	}


	//void hideButtons() {
	//	button0->Hide();
	//	button1->Hide();
	//	button2->Hide();
	//	button3->Hide();
	//	button4->Hide();
	//	button5->Hide();
	//	button6->Hide();
	//	button7->Hide();
	//	button8->Hide();
	//	button9->Hide();
	//}
	//void showButtons() {
	//	button0->Show();
	//	button1->Show();
	//	button2->Show();
	//	button3->Show();
	//	button4->Show();
	//	button5->Show();
	//	button6->Show();
	//	button7->Show();
	//	button8->Show();
	//	button9->Show();
	//}


	

	short action = 0;
	System::Void MyFirstWFORMs::MyForm::панельВводуToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (action == 0) {
			textBoxInput->Show();
			buttonInput->Show();
			//hideButtons();
			action = 1;
		}
		else {
			textBoxInput->Hide();
			buttonInput->Hide();
			//showButtons();
			action = 0;
		}
	}

	



	

	



