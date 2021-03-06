// Administrators.cpp: 实现文件
//

#include "stdafx.h"
#include "DictionarySystem.h"
#include "Administrators.h"
#include "afxdialogex.h"
#include "WordBase.h"

// Administrators 对话框

IMPLEMENT_DYNAMIC(Administrators, CDialogEx)

Administrators::Administrators(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ADMINISTRATORS, pParent)
	, word_show_all(_T(""))
	, word_insert(_T(""))
	, word_delete(_T(""))
{

}

Administrators::~Administrators()
{
}

void Administrators::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_DISPLAY, word_show_all);
	DDX_Control(pDX, IDC_EDIT_DISPLAY, word_show_control);
	DDX_Text(pDX, IDC_EDIT_INSERT, word_insert);
	DDX_Text(pDX, IDC_EDIT_DELETE, word_delete);
}


BEGIN_MESSAGE_MAP(Administrators, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_DISPLAY, &Administrators::OnBnClickedButtonDisplay)
	ON_BN_CLICKED(ID_BUTTON_INSERT, &Administrators::OnBnClickedButtonInsert)
	ON_BN_CLICKED(IDC_BUTTON_DELETE, &Administrators::OnBnClickedButtonDelete)
END_MESSAGE_MAP()


// Administrators 消息处理程序


WordBase wbe;
void Administrators::OnBnClickedButtonDisplay()
{
	// TODO: 在此添加控件通知处理程序代码
	word_show_control.SetLimitText(UINT_MAX);
	wbe.wl.p = wbe.wl.head->next;
	while (wbe.wl.p)
	{
		word_show_all.Append(wbe.wl.p->word);
		word_show_all.Append("\r\n");
		wbe.wl.p = wbe.wl.p->next;
	}
	UpdateData(false);
}
BOOL Administrators::PreTranslateMessage(MSG* pMsg) {
	int nkeyDown = pMsg->wParam;
	SHORT nkeyState = GetKeyState(VK_CONTROL); // ctrl键的状态获取
	if (nkeyDown == 83 && nkeyState) {
		OnBnClickedButtonDisplay();
	}
	return CDialog::PreTranslateMessage(pMsg);
}


void Administrators::OnBnClickedButtonInsert()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	wbe.wl.Insert(word_insert);
}


void Administrators::OnBnClickedButtonDelete()
{
	// TODO: 在此添加控件通知处理程序代码
	wbe.wl.Delete(word_delete);
}
