﻿#pragma once


// CWndAddClass 对话框

class CWndAddClass : public CDialogEx
{
	DECLARE_DYNAMIC(CWndAddClass)

public:
	CWndAddClass(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CWndAddClass();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADDCLASS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString txtAddress;
	unsigned Size{1024};
	CString txtName;
	CString txtNote;
	afx_msg void OnBnClickedOk();
};