#pragma once

namespace DataGridViewTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::DataColumn^  dataColumn1;
	private: System::Data::DataColumn^  dataColumn2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;


	private: System::Data::DataColumn^  dataColumn3;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  checkDataGridViewCheckBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nameDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  testDataGridViewTextBoxColumn;
	private: System::Windows::Forms::ToolStripMenuItem^  testToolStripMenuItem;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->checkDataGridViewCheckBoxColumn = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->nameDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->testDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->loadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->testToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->checkDataGridViewCheckBoxColumn,
					this->nameDataGridViewTextBoxColumn, this->testDataGridViewTextBoxColumn
			});
			this->dataGridView1->DataMember = L"Table1";
			this->dataGridView1->DataSource = this->dataSet1;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 26);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 21;
			this->dataGridView1->Size = System::Drawing::Size(545, 378);
			this->dataGridView1->TabIndex = 0;
			// 
			// checkDataGridViewCheckBoxColumn
			// 
			this->checkDataGridViewCheckBoxColumn->DataPropertyName = L"check";
			this->checkDataGridViewCheckBoxColumn->HeaderText = L"check";
			this->checkDataGridViewCheckBoxColumn->Name = L"checkDataGridViewCheckBoxColumn";
			// 
			// nameDataGridViewTextBoxColumn
			// 
			this->nameDataGridViewTextBoxColumn->DataPropertyName = L"name";
			this->nameDataGridViewTextBoxColumn->HeaderText = L"name";
			this->nameDataGridViewTextBoxColumn->Name = L"nameDataGridViewTextBoxColumn";
			// 
			// testDataGridViewTextBoxColumn
			// 
			this->testDataGridViewTextBoxColumn->DataPropertyName = L"test";
			this->testDataGridViewTextBoxColumn->HeaderText = L"test";
			this->testDataGridViewTextBoxColumn->Name = L"testDataGridViewTextBoxColumn";
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(3) {
				this->dataColumn1, this->dataColumn2,
					this->dataColumn3
			});
			this->dataTable1->TableName = L"Table1";
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"check";
			this->dataColumn1->DataType = System::Boolean::typeid;
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"name";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"test";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->loadToolStripMenuItem,
					this->saveToolStripMenuItem, this->testToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(545, 26);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// loadToolStripMenuItem
			// 
			this->loadToolStripMenuItem->Name = L"loadToolStripMenuItem";
			this->loadToolStripMenuItem->Size = System::Drawing::Size(48, 22);
			this->loadToolStripMenuItem->Text = L"Load";
			this->loadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::loadToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(49, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// testToolStripMenuItem
			// 
			this->testToolStripMenuItem->Name = L"testToolStripMenuItem";
			this->testToolStripMenuItem->Size = System::Drawing::Size(45, 22);
			this->testToolStripMenuItem->Text = L"Test";
			this->testToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::testToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 404);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		dataSet1->Clear();
		dataSet1->ReadXml("test.xml");
	}
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		dataSet1->WriteXml("test.xml");
}
private: System::Void testToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	auto tbl = dataSet1->Tables["Table1"];
	for(int i = 0; i < tbl->Rows->Count; ++i)
	{
		auto item = tbl->Rows[i];
		MessageBox::Show(
			item->ItemArray[0]->ToString() + "/" +
			item->ItemArray[1]->ToString() + "/" +
			item->ItemArray[2]->ToString() );
	}
}
};
}
