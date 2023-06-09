#pragma once
#include "CParamContext.h"
//����������
typedef class CFUNContext
{
public:
	CFUNContext();
	CFUNContext(LPCWSTR _name, LPCWSTR _typename,LPCWSTR _note, LPCWSTR _base,unsigned _offset, PCParamContext _params, CFUNContext* _front);
	CFUNContext* Add(LPCWSTR _name, LPCWSTR _typename,  LPCWSTR _note, LPCWSTR _base, unsigned _offset, PCParamContext _params);

	CString    txtShot; //���͵Ŀ���

	CString    txtName;
	CString    typeName;

	CString    txtNote{};
	CString    txtAddress{}; //���ֵ�ַ 41FDB2 Sword2.exe + 0ffset
	LPVOID     Address{};

	CString    txtBase{};
	unsigned   OffSet{};

	PCParamContext Params{};
	
	CFUNContext* Front{};
	CFUNContext* Next{};

}*PCFUNContext;

