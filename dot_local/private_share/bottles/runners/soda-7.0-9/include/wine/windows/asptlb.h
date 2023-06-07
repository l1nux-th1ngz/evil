/*** Autogenerated by WIDL 7.0 from ../ValveSoftware-winegit/include/asptlb.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __asptlb_h__
#define __asptlb_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IRequestDictionary_FWD_DEFINED__
#define __IRequestDictionary_FWD_DEFINED__
typedef interface IRequestDictionary IRequestDictionary;
#ifdef __cplusplus
interface IRequestDictionary;
#endif /* __cplusplus */
#endif

#ifndef __IResponse_FWD_DEFINED__
#define __IResponse_FWD_DEFINED__
typedef interface IResponse IResponse;
#ifdef __cplusplus
interface IResponse;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <objidl.h>
#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IRequestDictionary interface
 */
#ifndef __IRequestDictionary_INTERFACE_DEFINED__
#define __IRequestDictionary_INTERFACE_DEFINED__

DEFINE_GUID(IID_IRequestDictionary, 0xd97a6da0, 0xa85f, 0x11df, 0x83,0xae, 0x00,0xa0,0xc9,0x0c,0x2b,0xd8);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d97a6da0-a85f-11df-83ae-00a0c90c2bd8")
IRequestDictionary : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE get_Item(
        VARIANT Var,
        VARIANT *pVariantReturn) = 0;

    virtual HRESULT STDMETHODCALLTYPE get__NewEnum(
        IUnknown **ppEnumReturn) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Count(
        int *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Key(
        VARIANT key,
        VARIANT *value) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRequestDictionary, 0xd97a6da0, 0xa85f, 0x11df, 0x83,0xae, 0x00,0xa0,0xc9,0x0c,0x2b,0xd8)
#endif
#else
typedef struct IRequestDictionaryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRequestDictionary *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRequestDictionary *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRequestDictionary *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IRequestDictionary *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IRequestDictionary *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IRequestDictionary *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IRequestDictionary *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IRequestDictionary methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Item)(
        IRequestDictionary *This,
        VARIANT Var,
        VARIANT *pVariantReturn);

    HRESULT (STDMETHODCALLTYPE *get__NewEnum)(
        IRequestDictionary *This,
        IUnknown **ppEnumReturn);

    HRESULT (STDMETHODCALLTYPE *get_Count)(
        IRequestDictionary *This,
        int *count);

    HRESULT (STDMETHODCALLTYPE *get_Key)(
        IRequestDictionary *This,
        VARIANT key,
        VARIANT *value);

    END_INTERFACE
} IRequestDictionaryVtbl;

interface IRequestDictionary {
    CONST_VTBL IRequestDictionaryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRequestDictionary_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRequestDictionary_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRequestDictionary_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define IRequestDictionary_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IRequestDictionary_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IRequestDictionary_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IRequestDictionary_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** IRequestDictionary methods ***/
#define IRequestDictionary_get_Item(This,Var,pVariantReturn) (This)->lpVtbl->get_Item(This,Var,pVariantReturn)
#define IRequestDictionary_get__NewEnum(This,ppEnumReturn) (This)->lpVtbl->get__NewEnum(This,ppEnumReturn)
#define IRequestDictionary_get_Count(This,count) (This)->lpVtbl->get_Count(This,count)
#define IRequestDictionary_get_Key(This,key,value) (This)->lpVtbl->get_Key(This,key,value)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IRequestDictionary_QueryInterface(IRequestDictionary* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IRequestDictionary_AddRef(IRequestDictionary* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IRequestDictionary_Release(IRequestDictionary* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispatch methods ***/
static __WIDL_INLINE HRESULT IRequestDictionary_GetTypeInfoCount(IRequestDictionary* This,UINT *pctinfo) {
    return This->lpVtbl->GetTypeInfoCount(This,pctinfo);
}
static __WIDL_INLINE HRESULT IRequestDictionary_GetTypeInfo(IRequestDictionary* This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo) {
    return This->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo);
}
static __WIDL_INLINE HRESULT IRequestDictionary_GetIDsOfNames(IRequestDictionary* This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId) {
    return This->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId);
}
static __WIDL_INLINE HRESULT IRequestDictionary_Invoke(IRequestDictionary* This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr) {
    return This->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr);
}
/*** IRequestDictionary methods ***/
static __WIDL_INLINE HRESULT IRequestDictionary_get_Item(IRequestDictionary* This,VARIANT Var,VARIANT *pVariantReturn) {
    return This->lpVtbl->get_Item(This,Var,pVariantReturn);
}
static __WIDL_INLINE HRESULT IRequestDictionary_get__NewEnum(IRequestDictionary* This,IUnknown **ppEnumReturn) {
    return This->lpVtbl->get__NewEnum(This,ppEnumReturn);
}
static __WIDL_INLINE HRESULT IRequestDictionary_get_Count(IRequestDictionary* This,int *count) {
    return This->lpVtbl->get_Count(This,count);
}
static __WIDL_INLINE HRESULT IRequestDictionary_get_Key(IRequestDictionary* This,VARIANT key,VARIANT *value) {
    return This->lpVtbl->get_Key(This,key,value);
}
#endif
#endif

#endif


#endif  /* __IRequestDictionary_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IResponse interface
 */
#ifndef __IResponse_INTERFACE_DEFINED__
#define __IResponse_INTERFACE_DEFINED__

DEFINE_GUID(IID_IResponse, 0xd97a6da0, 0xa864, 0x11cf, 0x83,0xbe, 0x00,0xa0,0xc9,0x0c,0x2b,0xd8);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d97a6da0-a864-11cf-83be-00a0c90c2bd8")
IResponse : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE get_Buffer(
        VARIANT_BOOL *is_buffering) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_Buffer(
        VARIANT_BOOL is_buffering) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_ContentType(
        BSTR *content_type) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_ContentType(
        BSTR content_type) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Expires(
        VARIANT *minutes) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_Expires(
        LONG minutes) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_ExpiresAbsolute(
        VARIANT *expires) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_ExpiresAbsolute(
        DATE expires) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Cookies(
        IRequestDictionary **cookies) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Status(
        BSTR *status) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_Status(
        BSTR status) = 0;

    virtual HRESULT STDMETHODCALLTYPE Add(
        BSTR value,
        BSTR name) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddHeader(
        BSTR name,
        BSTR value) = 0;

    virtual HRESULT STDMETHODCALLTYPE AppendToLog(
        BSTR log_entry) = 0;

    virtual HRESULT STDMETHODCALLTYPE BinaryWrite(
        VARIANT input) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clear(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE End(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Flush(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Redirect(
        BSTR url) = 0;

    virtual HRESULT STDMETHODCALLTYPE Write(
        VARIANT text) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteBlock(
        short block_number) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsClientConnected(
        VARIANT_BOOL *is_connected) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_CharSet(
        BSTR *charset) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_CharSet(
        BSTR charset) = 0;

    virtual HRESULT STDMETHODCALLTYPE Pics(
        BSTR value) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_CacheControl(
        BSTR *cache_control) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_CacheControl(
        BSTR cache_control) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_CodePage(
        LONG *codepage) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_CodePage(
        LONG codepage) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_LCID(
        LONG *lcid) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_LCID(
        LONG lcid) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IResponse, 0xd97a6da0, 0xa864, 0x11cf, 0x83,0xbe, 0x00,0xa0,0xc9,0x0c,0x2b,0xd8)
#endif
#else
typedef struct IResponseVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IResponse *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IResponse *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IResponse *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IResponse *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IResponse *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IResponse *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IResponse *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IResponse methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Buffer)(
        IResponse *This,
        VARIANT_BOOL *is_buffering);

    HRESULT (STDMETHODCALLTYPE *put_Buffer)(
        IResponse *This,
        VARIANT_BOOL is_buffering);

    HRESULT (STDMETHODCALLTYPE *get_ContentType)(
        IResponse *This,
        BSTR *content_type);

    HRESULT (STDMETHODCALLTYPE *put_ContentType)(
        IResponse *This,
        BSTR content_type);

    HRESULT (STDMETHODCALLTYPE *get_Expires)(
        IResponse *This,
        VARIANT *minutes);

    HRESULT (STDMETHODCALLTYPE *put_Expires)(
        IResponse *This,
        LONG minutes);

    HRESULT (STDMETHODCALLTYPE *get_ExpiresAbsolute)(
        IResponse *This,
        VARIANT *expires);

    HRESULT (STDMETHODCALLTYPE *put_ExpiresAbsolute)(
        IResponse *This,
        DATE expires);

    HRESULT (STDMETHODCALLTYPE *get_Cookies)(
        IResponse *This,
        IRequestDictionary **cookies);

    HRESULT (STDMETHODCALLTYPE *get_Status)(
        IResponse *This,
        BSTR *status);

    HRESULT (STDMETHODCALLTYPE *put_Status)(
        IResponse *This,
        BSTR status);

    HRESULT (STDMETHODCALLTYPE *Add)(
        IResponse *This,
        BSTR value,
        BSTR name);

    HRESULT (STDMETHODCALLTYPE *AddHeader)(
        IResponse *This,
        BSTR name,
        BSTR value);

    HRESULT (STDMETHODCALLTYPE *AppendToLog)(
        IResponse *This,
        BSTR log_entry);

    HRESULT (STDMETHODCALLTYPE *BinaryWrite)(
        IResponse *This,
        VARIANT input);

    HRESULT (STDMETHODCALLTYPE *Clear)(
        IResponse *This);

    HRESULT (STDMETHODCALLTYPE *End)(
        IResponse *This);

    HRESULT (STDMETHODCALLTYPE *Flush)(
        IResponse *This);

    HRESULT (STDMETHODCALLTYPE *Redirect)(
        IResponse *This,
        BSTR url);

    HRESULT (STDMETHODCALLTYPE *Write)(
        IResponse *This,
        VARIANT text);

    HRESULT (STDMETHODCALLTYPE *WriteBlock)(
        IResponse *This,
        short block_number);

    HRESULT (STDMETHODCALLTYPE *IsClientConnected)(
        IResponse *This,
        VARIANT_BOOL *is_connected);

    HRESULT (STDMETHODCALLTYPE *get_CharSet)(
        IResponse *This,
        BSTR *charset);

    HRESULT (STDMETHODCALLTYPE *put_CharSet)(
        IResponse *This,
        BSTR charset);

    HRESULT (STDMETHODCALLTYPE *Pics)(
        IResponse *This,
        BSTR value);

    HRESULT (STDMETHODCALLTYPE *get_CacheControl)(
        IResponse *This,
        BSTR *cache_control);

    HRESULT (STDMETHODCALLTYPE *put_CacheControl)(
        IResponse *This,
        BSTR cache_control);

    HRESULT (STDMETHODCALLTYPE *get_CodePage)(
        IResponse *This,
        LONG *codepage);

    HRESULT (STDMETHODCALLTYPE *put_CodePage)(
        IResponse *This,
        LONG codepage);

    HRESULT (STDMETHODCALLTYPE *get_LCID)(
        IResponse *This,
        LONG *lcid);

    HRESULT (STDMETHODCALLTYPE *put_LCID)(
        IResponse *This,
        LONG lcid);

    END_INTERFACE
} IResponseVtbl;

interface IResponse {
    CONST_VTBL IResponseVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IResponse_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IResponse_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IResponse_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define IResponse_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IResponse_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IResponse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IResponse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** IResponse methods ***/
#define IResponse_get_Buffer(This,is_buffering) (This)->lpVtbl->get_Buffer(This,is_buffering)
#define IResponse_put_Buffer(This,is_buffering) (This)->lpVtbl->put_Buffer(This,is_buffering)
#define IResponse_get_ContentType(This,content_type) (This)->lpVtbl->get_ContentType(This,content_type)
#define IResponse_put_ContentType(This,content_type) (This)->lpVtbl->put_ContentType(This,content_type)
#define IResponse_get_Expires(This,minutes) (This)->lpVtbl->get_Expires(This,minutes)
#define IResponse_put_Expires(This,minutes) (This)->lpVtbl->put_Expires(This,minutes)
#define IResponse_get_ExpiresAbsolute(This,expires) (This)->lpVtbl->get_ExpiresAbsolute(This,expires)
#define IResponse_put_ExpiresAbsolute(This,expires) (This)->lpVtbl->put_ExpiresAbsolute(This,expires)
#define IResponse_get_Cookies(This,cookies) (This)->lpVtbl->get_Cookies(This,cookies)
#define IResponse_get_Status(This,status) (This)->lpVtbl->get_Status(This,status)
#define IResponse_put_Status(This,status) (This)->lpVtbl->put_Status(This,status)
#define IResponse_Add(This,value,name) (This)->lpVtbl->Add(This,value,name)
#define IResponse_AddHeader(This,name,value) (This)->lpVtbl->AddHeader(This,name,value)
#define IResponse_AppendToLog(This,log_entry) (This)->lpVtbl->AppendToLog(This,log_entry)
#define IResponse_BinaryWrite(This,input) (This)->lpVtbl->BinaryWrite(This,input)
#define IResponse_Clear(This) (This)->lpVtbl->Clear(This)
#define IResponse_End(This) (This)->lpVtbl->End(This)
#define IResponse_Flush(This) (This)->lpVtbl->Flush(This)
#define IResponse_Redirect(This,url) (This)->lpVtbl->Redirect(This,url)
#define IResponse_Write(This,text) (This)->lpVtbl->Write(This,text)
#define IResponse_WriteBlock(This,block_number) (This)->lpVtbl->WriteBlock(This,block_number)
#define IResponse_IsClientConnected(This,is_connected) (This)->lpVtbl->IsClientConnected(This,is_connected)
#define IResponse_get_CharSet(This,charset) (This)->lpVtbl->get_CharSet(This,charset)
#define IResponse_put_CharSet(This,charset) (This)->lpVtbl->put_CharSet(This,charset)
#define IResponse_Pics(This,value) (This)->lpVtbl->Pics(This,value)
#define IResponse_get_CacheControl(This,cache_control) (This)->lpVtbl->get_CacheControl(This,cache_control)
#define IResponse_put_CacheControl(This,cache_control) (This)->lpVtbl->put_CacheControl(This,cache_control)
#define IResponse_get_CodePage(This,codepage) (This)->lpVtbl->get_CodePage(This,codepage)
#define IResponse_put_CodePage(This,codepage) (This)->lpVtbl->put_CodePage(This,codepage)
#define IResponse_get_LCID(This,lcid) (This)->lpVtbl->get_LCID(This,lcid)
#define IResponse_put_LCID(This,lcid) (This)->lpVtbl->put_LCID(This,lcid)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IResponse_QueryInterface(IResponse* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IResponse_AddRef(IResponse* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IResponse_Release(IResponse* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispatch methods ***/
static __WIDL_INLINE HRESULT IResponse_GetTypeInfoCount(IResponse* This,UINT *pctinfo) {
    return This->lpVtbl->GetTypeInfoCount(This,pctinfo);
}
static __WIDL_INLINE HRESULT IResponse_GetTypeInfo(IResponse* This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo) {
    return This->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo);
}
static __WIDL_INLINE HRESULT IResponse_GetIDsOfNames(IResponse* This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId) {
    return This->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId);
}
static __WIDL_INLINE HRESULT IResponse_Invoke(IResponse* This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr) {
    return This->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr);
}
/*** IResponse methods ***/
static __WIDL_INLINE HRESULT IResponse_get_Buffer(IResponse* This,VARIANT_BOOL *is_buffering) {
    return This->lpVtbl->get_Buffer(This,is_buffering);
}
static __WIDL_INLINE HRESULT IResponse_put_Buffer(IResponse* This,VARIANT_BOOL is_buffering) {
    return This->lpVtbl->put_Buffer(This,is_buffering);
}
static __WIDL_INLINE HRESULT IResponse_get_ContentType(IResponse* This,BSTR *content_type) {
    return This->lpVtbl->get_ContentType(This,content_type);
}
static __WIDL_INLINE HRESULT IResponse_put_ContentType(IResponse* This,BSTR content_type) {
    return This->lpVtbl->put_ContentType(This,content_type);
}
static __WIDL_INLINE HRESULT IResponse_get_Expires(IResponse* This,VARIANT *minutes) {
    return This->lpVtbl->get_Expires(This,minutes);
}
static __WIDL_INLINE HRESULT IResponse_put_Expires(IResponse* This,LONG minutes) {
    return This->lpVtbl->put_Expires(This,minutes);
}
static __WIDL_INLINE HRESULT IResponse_get_ExpiresAbsolute(IResponse* This,VARIANT *expires) {
    return This->lpVtbl->get_ExpiresAbsolute(This,expires);
}
static __WIDL_INLINE HRESULT IResponse_put_ExpiresAbsolute(IResponse* This,DATE expires) {
    return This->lpVtbl->put_ExpiresAbsolute(This,expires);
}
static __WIDL_INLINE HRESULT IResponse_get_Cookies(IResponse* This,IRequestDictionary **cookies) {
    return This->lpVtbl->get_Cookies(This,cookies);
}
static __WIDL_INLINE HRESULT IResponse_get_Status(IResponse* This,BSTR *status) {
    return This->lpVtbl->get_Status(This,status);
}
static __WIDL_INLINE HRESULT IResponse_put_Status(IResponse* This,BSTR status) {
    return This->lpVtbl->put_Status(This,status);
}
static __WIDL_INLINE HRESULT IResponse_Add(IResponse* This,BSTR value,BSTR name) {
    return This->lpVtbl->Add(This,value,name);
}
static __WIDL_INLINE HRESULT IResponse_AddHeader(IResponse* This,BSTR name,BSTR value) {
    return This->lpVtbl->AddHeader(This,name,value);
}
static __WIDL_INLINE HRESULT IResponse_AppendToLog(IResponse* This,BSTR log_entry) {
    return This->lpVtbl->AppendToLog(This,log_entry);
}
static __WIDL_INLINE HRESULT IResponse_BinaryWrite(IResponse* This,VARIANT input) {
    return This->lpVtbl->BinaryWrite(This,input);
}
static __WIDL_INLINE HRESULT IResponse_Clear(IResponse* This) {
    return This->lpVtbl->Clear(This);
}
static __WIDL_INLINE HRESULT IResponse_End(IResponse* This) {
    return This->lpVtbl->End(This);
}
static __WIDL_INLINE HRESULT IResponse_Flush(IResponse* This) {
    return This->lpVtbl->Flush(This);
}
static __WIDL_INLINE HRESULT IResponse_Redirect(IResponse* This,BSTR url) {
    return This->lpVtbl->Redirect(This,url);
}
static __WIDL_INLINE HRESULT IResponse_Write(IResponse* This,VARIANT text) {
    return This->lpVtbl->Write(This,text);
}
static __WIDL_INLINE HRESULT IResponse_WriteBlock(IResponse* This,short block_number) {
    return This->lpVtbl->WriteBlock(This,block_number);
}
static __WIDL_INLINE HRESULT IResponse_IsClientConnected(IResponse* This,VARIANT_BOOL *is_connected) {
    return This->lpVtbl->IsClientConnected(This,is_connected);
}
static __WIDL_INLINE HRESULT IResponse_get_CharSet(IResponse* This,BSTR *charset) {
    return This->lpVtbl->get_CharSet(This,charset);
}
static __WIDL_INLINE HRESULT IResponse_put_CharSet(IResponse* This,BSTR charset) {
    return This->lpVtbl->put_CharSet(This,charset);
}
static __WIDL_INLINE HRESULT IResponse_Pics(IResponse* This,BSTR value) {
    return This->lpVtbl->Pics(This,value);
}
static __WIDL_INLINE HRESULT IResponse_get_CacheControl(IResponse* This,BSTR *cache_control) {
    return This->lpVtbl->get_CacheControl(This,cache_control);
}
static __WIDL_INLINE HRESULT IResponse_put_CacheControl(IResponse* This,BSTR cache_control) {
    return This->lpVtbl->put_CacheControl(This,cache_control);
}
static __WIDL_INLINE HRESULT IResponse_get_CodePage(IResponse* This,LONG *codepage) {
    return This->lpVtbl->get_CodePage(This,codepage);
}
static __WIDL_INLINE HRESULT IResponse_put_CodePage(IResponse* This,LONG codepage) {
    return This->lpVtbl->put_CodePage(This,codepage);
}
static __WIDL_INLINE HRESULT IResponse_get_LCID(IResponse* This,LONG *lcid) {
    return This->lpVtbl->get_LCID(This,lcid);
}
static __WIDL_INLINE HRESULT IResponse_put_LCID(IResponse* This,LONG lcid) {
    return This->lpVtbl->put_LCID(This,lcid);
}
#endif
#endif

#endif


#endif  /* __IResponse_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);
ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __asptlb_h__ */
