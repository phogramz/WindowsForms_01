#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <iostream>
#include <fstream>
// #include <> .�������� � ����������� �������� ���������� �������

int NC;

struct z { //������� ��������� �� console
	char name[30];
	char tsvet[20];
	long potok;
	char data[11];
	long stanc;
} *vetki;


struct sp {
	char nazv[30];
	long potok;
	struct sp* sled;
} *spisok;

void vstavka(struct z* vetka, char* nazv) //
{
	int i;
	struct sp* nov, * nt, * z = 0;
	for (nt = spisok; nt != 0 && strcmp(nt->nazv, nazv) < 0; z = nt, nt = nt->sled);
	if (nt && strcmp(nt->nazv, nazv) == 0) return;
	nov = (struct sp*) malloc(sizeof(struct sp));
	strcpy(nov->nazv, nazv);
	nov->sled = nt;
	nov->potok = 0;
	for (i = 0; i < NC; i++)
		if (strcmp(vetka[i].name, nazv) == 0)
			nov->potok += vetka[i].potok;
	if (!z) spisok = nov;
	else z->sled = nov;
	return;
}

void text_data(char* s, char* sd) //������� �������������� ����, ������������ � 2� ��������
{
	int N_month;
	char s0[3], month[12][9] = { "������","�������","�����","������","���","����",
	"����","�������","��������","�������","������","�������" };
	strcpy(s, sd + 8);
	strcat(s, " ");
	strncpy(s0, sd + 5, 2);
	s0[2] = 0;
	sscanf(s0, "%d", &N_month);
	strcat(s, month[N_month - 1]);
	strcat(s, " ");
	strncat(s, sd, 4);
	return;
}

namespace WinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <potokry>
	/// ������ ��� MyForm
	/// </potokry>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <potokry>
		/// ���������� ��� ������������ �������.
		/// </potokry>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������������������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;


	private:
		/// <potokry>
		/// ������������ ���������� ������������.
		/// </potokry>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <potokry>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </potokry>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(916, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������ToolStripMenuItem,
					this->���������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(69, 29);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->���������������������������ToolStripMenuItem,
					this->����������������������������������ToolStripMenuItem, this->�������������������������������ToolStripMenuItem, this->�������������������������������������ToolStripMenuItem,
					this->�������������������������������������������������������ToolStripMenuItem, this->����������������������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Enabled = false;
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(102, 29);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ���������������������������ToolStripMenuItem
			// 
			this->���������������������������ToolStripMenuItem->Name = L"���������������������������ToolStripMenuItem";
			this->���������������������������ToolStripMenuItem->Size = System::Drawing::Size(700, 34);
			this->���������������������������ToolStripMenuItem->Text = L"����� ����� �������� ���������\?";
			this->���������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������������������ToolStripMenuItem_Click);
			// 
			// ����������������������������������ToolStripMenuItem
			// 
			this->����������������������������������ToolStripMenuItem->Name = L"����������������������������������ToolStripMenuItem";
			this->����������������������������������ToolStripMenuItem->Size = System::Drawing::Size(700, 34);
			this->����������������������������������ToolStripMenuItem->Text = L"����� � ���������� ����������� �������\?";
			this->����������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������������������������ToolStripMenuItem_Click);
			// 
			// �������������������������������ToolStripMenuItem
			// 
			this->�������������������������������ToolStripMenuItem->Name = L"�������������������������������ToolStripMenuItem";
			this->�������������������������������ToolStripMenuItem->Size = System::Drawing::Size(700, 34);
			this->�������������������������������ToolStripMenuItem->Text = L"����� ����� ���� ������� ������ ����\?";
			this->�������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������������������������ToolStripMenuItem_Click);
			// 
			// �������������������������������������ToolStripMenuItem
			// 
			this->�������������������������������������ToolStripMenuItem->Name = L"�������������������������������������ToolStripMenuItem";
			this->�������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(700, 34);
			this->�������������������������������������ToolStripMenuItem->Text = L"���������� ������ ����� ����������� �����";
			this->�������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������������������������������ToolStripMenuItem_Click);
			// 
			// �������������������������������������������������������ToolStripMenuItem
			// 
			this->�������������������������������������������������������ToolStripMenuItem->Name = L"�������������������������������������������������������ToolStripMenuItem";
			this->�������������������������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(700, 34);
			this->�������������������������������������������������������ToolStripMenuItem->Text = L"���������. ���������� ����������� ������� ���������� �� ������\?";
			this->�������������������������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������������������������������������������������ToolStripMenuItem_Click);
			// 
			// ����������������������ToolStripMenuItem
			// 
			this->����������������������ToolStripMenuItem->Name = L"����������������������ToolStripMenuItem";
			this->����������������������ToolStripMenuItem->Size = System::Drawing::Size(700, 34);
			this->����������������������ToolStripMenuItem->Text = L"����� � ���������� �������������� � ����� ��������";
			this->����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(80, 29);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 36);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(912, 508);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(904, 475);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"�������� ������";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(7, 7);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(894, 454);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(904, 475);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"������";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(898, 472);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(904, 475);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"���������";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tabPage3_Paint);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"Metro";
			this->openFileDialog1->Filter = L"Data Files (*.dat) | *.dat";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(916, 545);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Metro";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//���������������� ������:
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		FILE* in;
		int i;
		char ctemp[130];
		String^ s;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			s = openFileDialog1->FileName;
			char* str_tmp = (char*)(void*)Marshal::StringToHGlobalAnsi(s);
			if ((in = fopen(str_tmp, "r")) == NULL)
			{
				MessageBox::Show("���� �� ������!", "������!",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		else return;
		�������ToolStripMenuItem->Enabled = true; //������������� (Enabled) ��������. �� �������� ������!
		listBox1->Items->Clear();
		fscanf(in, "%d", &NC);
		vetki = new z[NC];
		for (i = 0; i < NC; i++)
		{
			fscanf(in, "%s%s%ld%s%ld", vetki[i].name, vetki[i].tsvet,
				&vetki[i].potok, vetki[i].data, &vetki[i].stanc);
			sprintf(ctemp, "%-30s %-15s %-10ld %-15s %ld", //���������� ��������.�����:courier new!
				vetki[i].name, vetki[i].tsvet,
				vetki[i].potok, vetki[i].data, vetki[i].stanc);
			s = gcnew String(ctemp);
			listBox1->Items->Add(s);
		}
		fclose(in);
	}


	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		   }
	
	private: System::Void ���������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			int i = 0;
			struct z best;
			char ss[80];
			String^ s;
			strcpy(best.name, vetki[0].name);
			best.potok = vetki[0].potok;
			for (i = 1; i < NC; i++)
				if (vetki[i].potok > best.potok)
				{
					strcpy(best.name, vetki[i].name);
					best.potok = vetki[i].potok;
				}
			sprintf(ss, "%s\n %ld ���.���/�����", best.name, best.potok);
			s = gcnew String(ss);
			MessageBox::Show(s, "�������� ����������� ����� �����");
		}

	private: System::Void ����������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		//�������� ��� 2-�� ������� � ������� �������� � ���-�� �������
			int i = 0;
			struct z best;
			char ss[80];
			String^ s;
			strcpy(best.name, vetki[0].name);  //5 ���� ����
			best.stanc = vetki[0].stanc;
			for (i = 1; i < NC; i++)
				if (vetki[i].stanc > best.stanc)
				{
					strcpy(best.name, vetki[i].name);
					best.stanc = vetki[i].stanc;
				}
			sprintf(ss, "������������ ���������� ������� �� ����� %s:\n %ld �������", best.name, best.stanc);
			s = gcnew String(ss);
			MessageBox::Show(s, "������������ ���-�� �������");
		}

	private: System::Void �������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			int i;
			char sd[17];
			char ss[80];
			String^ s;
			struct z* best = vetki;
			for (i = 1; i < NC; i++)
				if (strcmp(vetki[i].data, best->data) < 0) best = &vetki[i];
			text_data(sd, best->data);  //������������� ������� �������������� ����
			sprintf(ss, "%s(%s)\n������� %s",
				best->name, best->tsvet, sd); //����� ������ �� ����������: ��������,����(����� ������) � ����
			s = gcnew String(ss);
			MessageBox::Show(s, "����� ������ ����� �����");
		}

	private: System::Void �������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			int i;
			struct sp *nt;
			char ss[90];
			String^ s;
			tabControl1->SelectTab(1); // ��������� �� ������� "������"
			if (!spisok)
				for (i = 0; i < NC; i++)
					vstavka(vetki, vetki[i].name);
			richTextBox1->ReadOnly = 1;
			richTextBox1->Clear();
			richTextBox1->Text = "\n���������� ������\n================\n";
			for (nt = spisok; nt != 0; nt = nt->sled)
			{
				sprintf(ss, "%-25s %5d", nt->nazv, nt->potok); //�����: Courier new!
				s = gcnew String(ss, 0, 31);
				richTextBox1->Text = richTextBox1->Text + "\n" + s;
			}

		}

	private: System::Void �������������������������������������������������������ToolStripMenuItem_Click(System::Object^ sender,System::EventArgs^ e) 
		{
			tabControl1->SelectTab(2); // ������� �� ������� "���������"
		}

	private: System::Void tabPage3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
			Pen^ myPen = gcnew Pen(System::Drawing::Color::Black, 3);
			SolidBrush^ myBrush = gcnew SolidBrush(Color::FromArgb(196, 0, 0, 0));
			System::Drawing::Font^ myFont = gcnew System::Drawing::Font("Arial", 8);
			int i, K;
			int iRed, iGreen, iBlue;
			int aStart, aEnd;
			long Sum;
			float xPos, yPos;
			struct sp* nt;
			Graphics^ g = tabPage3->CreateGraphics();
			g->Clear(System::Drawing::Color::White); //�������/�������� ���� � �����
			if (!spisok)
				for (i = 0; i < NC; i++)
					vstavka(vetki, vetki[i].name);
			K = 0; Sum = 0;
			for (nt = spisok; nt != 0; nt = nt->sled)
			{
				K++;
				Sum += nt->potok;
			}
			g->DrawEllipse(myPen, 25, 25, 185, 185); //��������� �����
			aEnd = 0;
			for (nt = spisok, i = 0; nt != 0; nt = nt->sled, i++)
			{
				iRed = (((i + 1) & 4) > 0) * 255 / (i / 8 + 1); //�������� �� ������� ������... 100 010 001
				iGreen = (((i + 1) & 2) > 0) * 255 / (i / 8 + 1); //...� � ������ �������(1)...
				iBlue = (((i + 1) & 1) > 0) * 255 / (i / 8 + 1); //...���������� ������������(*255)
				aStart = aEnd; //�������� �����(�� ��������� �����������)
				aEnd += nt->potok * 360 / Sum;
				if (i == K - 1)aEnd = 360;
				myBrush->Color::set(Color::FromArgb(196, iRed, iGreen, iBlue));
				g->FillPie(myBrush, 25, 25, 185, 185, aStart, aEnd - aStart); //������� ��������
				g->FillRectangle(myBrush, 300, 50 + (i - 1) * 20, 20, 20);
				myBrush->Color::set(Color::FromArgb(196, 0, 0, 0));
				xPos = 30 + (185 - 25) / 2 + (185 - 25) / 1.5 * Math::Cos(Math::PI * (aStart + aEnd) / 360);
				yPos = 30 + (185 - 25) / 2 + (185 - 25) / 1.5 * Math::Sin(Math::PI * (aStart + aEnd) / 360);
				g->DrawString(gcnew String(nt->nazv), myFont, myBrush, 320, 55 + (i - 1) * 20); //�������� ������� �����
				g->DrawString(Convert::ToString(nt->potok * 100 / Sum) + "%", //�������� �� �����
					myFont, myBrush, xPos, yPos);
			} //����� ����� for�
	} // ����� �������	
	private: System::Void ����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		char ss[100];
		String^ s;
		int l, i;
		int y = 0;
		for (i=0; i<NC-1; i++)
		{
			for (l=i+1; l<NC; l++)
			{
				if (vetki[i].potok == vetki[i + 1].potok && (strcmp(vetki[i].data,vetki[i + 1].data) == 0))
				{
					printf(ss, "���� ��������: %s ���� \n��������������: %ld ���.���/���. \n������ �����: %s \n������ �����: %s ", vetki[i].data, vetki[i].potok, vetki[i].name, vetki[l + 1 + i].name);
					y++;
					break;
				}
				if (y == 1) 
				{
					break;
				}
			}
			if (y == 0) 
			{
				printf(ss, "		!������:��� ����������");
			}
		}
		s = gcnew String(ss);
		MessageBox::Show(s, "����� � ���������� �������������� � ����� ��������");
	}
	
};
}
