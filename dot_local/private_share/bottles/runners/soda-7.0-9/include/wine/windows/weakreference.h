/*** Autogenerated by WIDL 7.0 from ../ValveSoftware-winegit/include/weakreference.idl - Do not edit ***/

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

#ifndef __weakreference_h__
#define __weakreference_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IWeakReference_FWD_DEFINED__
#define __IWeakReference_FWD_DEFINED__
typedef interface IWeakReference IWeakReference;
#ifdef __cplusplus
interface IWeakReference;
#endif /* __cplusplus */
#endif

#ifndef __IWeakReferenceSource_FWD_DEFINED__
#define __IWeakReferenceSource_FWD_DEFINED__
typedef interface IWeakReferenceSource IWeakReferenceSource;
#ifdef __cplusplus
interface IWeakReferenceSource;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <inspectable.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IWeakReference interface
 */
#ifndef __IWeakReference_INTERFACE_DEFINED__
#define __IWeakReference_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWeakReference, 0x00000037, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000037-0000-0000-c000-000000000046")
IWeakReference : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Resolve(
        REFIID iid,
        IInspectable **ref) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWeakReference, 0x00000037, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IWeakReferenceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWeakReference *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWeakReference *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWeakReference *This);

    /*** IWeakReference methods ***/
    HRESULT (STDMETHODCALLTYPE *Resolve)(
        IWeakReference *This,
        REFIID iid,
        IInspectable **ref);

    END_INTERFACE
} IWeakReferenceVtbl;

interface IWeakReference {
    CONST_VTBL IWeakReferenceVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWeakReference_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWeakReference_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWeakReference_Release(This) (This)->lpVtbl->Release(This)
/*** IWeakReference methods ***/
#define IWeakReference_Resolve(This,iid,ref) (This)->lpVtbl->Resolve(This,iid,ref)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWeakReference_QueryInterface(IWeakReference* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWeakReference_AddRef(IWeakReference* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWeakReference_Release(IWeakReference* This) {
    return This->lpVtbl->Release(This);
}
/*** IWeakReference methods ***/
static __WIDL_INLINE HRESULT IWeakReference_Resolve(IWeakReference* This,REFIID iid,IInspectable **ref) {
    return This->lpVtbl->Resolve(This,iid,ref);
}
#endif
#endif

#endif


#endif  /* __IWeakReference_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWeakReferenceSource interface
 */
#ifndef __IWeakReferenceSource_INTERFACE_DEFINED__
#define __IWeakReferenceSource_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWeakReferenceSource, 0x00000038, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000038-0000-0000-c000-000000000046")
IWeakReferenceSource : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetWeakReference(
        IWeakReference **ref) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWeakReferenceSource, 0x00000038, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IWeakReferenceSourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWeakReferenceSource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWeakReferenceSource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWeakReferenceSource *This);

    /*** IWeakReferenceSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWeakReference)(
        IWeakReferenceSource *This,
        IWeakReference **ref);

    END_INTERFACE
} IWeakReferenceSourceVtbl;

interface IWeakReferenceSource {
    CONST_VTBL IWeakReferenceSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWeakReferenceSource_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWeakReferenceSource_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWeakReferenceSource_Release(This) (This)->lpVtbl->Release(This)
/*** IWeakReferenceSource methods ***/
#define IWeakReferenceSource_GetWeakReference(This,ref) (This)->lpVtbl->GetWeakReference(This,ref)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWeakReferenceSource_QueryInterface(IWeakReferenceSource* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWeakReferenceSource_AddRef(IWeakReferenceSource* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWeakReferenceSource_Release(IWeakReferenceSource* This) {
    return This->lpVtbl->Release(This);
}
/*** IWeakReferenceSource methods ***/
static __WIDL_INLINE HRESULT IWeakReferenceSource_GetWeakReference(IWeakReferenceSource* This,IWeakReference **ref) {
    return This->lpVtbl->GetWeakReference(This,ref);
}
#endif
#endif

#endif


#endif  /* __IWeakReferenceSource_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __weakreference_h__ */
