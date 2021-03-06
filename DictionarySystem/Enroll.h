#pragma once


// Enroll 对话框

class Enroll : public CDialogEx
{
	DECLARE_DYNAMIC(Enroll)

public:
	Enroll(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Enroll();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ENROLL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString enroll_username;
	CString enroll_password;
	afx_msg void OnBnClickedButtonLogin();
};
