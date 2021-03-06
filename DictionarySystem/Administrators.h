#pragma once


// Administrators 对话框

class Administrators : public CDialogEx
{
	DECLARE_DYNAMIC(Administrators)

public:
	Administrators(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Administrators();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADMINISTRATORS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString word_show_all;
	afx_msg void OnBnClickedButtonDisplay();
	CEdit word_show_control;
	BOOL Administrators::PreTranslateMessage(MSG* pMsg);
	afx_msg void OnBnClickedButtonInsert();
	CString word_insert;
	afx_msg void OnBnClickedButtonDelete();
	CString word_delete;
};
