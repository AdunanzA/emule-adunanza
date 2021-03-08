#pragma once
#include "GDIThread.h"
#include "resource.h"
#include "enbitmap.h"

/////////////////////////////////////////////////////////////////////////////
// CCreditsDlg dialog

class CCreditsDlg : public CDialog
{
// Construction
public:
	void KillThread();
	void StartThread();
	CCreditsDlg(CWnd* pParent = NULL);   // standard constructor
	CCreditsDlg::~CCreditsDlg();

	CClientDC*	m_pDC;
	CRect		m_rectScreen;

	CGDIThread* m_pThread;

	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCreditsDlg)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	virtual BOOL OnInitDialog();
	virtual void OnPaint();
	afx_msg void OnDestroy();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CBitmap m_imgSplash;
};