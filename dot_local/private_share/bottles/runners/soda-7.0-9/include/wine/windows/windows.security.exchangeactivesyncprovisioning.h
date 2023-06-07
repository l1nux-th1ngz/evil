/*** Autogenerated by WIDL 7.0 from ../ValveSoftware-winegit/include/windows.security.exchangeactivesyncprovisioning.idl - Do not edit ***/

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

#ifndef __windows_security_exchangeactivesyncprovisioning_h__
#define __windows_security_exchangeactivesyncprovisioning_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation;
#ifdef __cplusplus
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                interface IEasClientDeviceInformation;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasClientDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasClientDeviceInformation_FWD_DEFINED__
#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                class EasClientDeviceInformation;
            }
        }
    }
}
#else
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasClientDeviceInformation __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasClientDeviceInformation;
#endif /* defined __cplusplus */
#endif /* defined ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasClientDeviceInformation_FWD_DEFINED__ */

/* Headers for imported files */

#include <inspectable.h>
#include <eventtoken.h>
#include <windows.foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation;
#ifdef __cplusplus
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                interface IEasClientDeviceInformation;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IEasClientDeviceInformation interface
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation, 0x54dfd981, 0x1968, 0x4ca3, 0xb9,0x58, 0xe5,0x95,0xd1,0x65,0x05,0xeb);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                MIDL_INTERFACE("54dfd981-1968-4ca3-b958-e595d16505eb")
                IEasClientDeviceInformation : public IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE get_Id(
                        GUID *value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_OperatingSystem(
                        HSTRING *value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_FriendlyName(
                        HSTRING *value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_SystemManufacturer(
                        HSTRING *value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_SystemProductName(
                        HSTRING *value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_SystemSku(
                        HSTRING *value) = 0;

                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation, 0x54dfd981, 0x1968, 0x4ca3, 0xb9,0x58, 0xe5,0x95,0xd1,0x65,0x05,0xeb)
#endif
#else
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This,
        TrustLevel *trustLevel);

    /*** IEasClientDeviceInformation methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Id)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This,
        GUID *value);

    HRESULT (STDMETHODCALLTYPE *get_OperatingSystem)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This,
        HSTRING *value);

    HRESULT (STDMETHODCALLTYPE *get_FriendlyName)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This,
        HSTRING *value);

    HRESULT (STDMETHODCALLTYPE *get_SystemManufacturer)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This,
        HSTRING *value);

    HRESULT (STDMETHODCALLTYPE *get_SystemProductName)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This,
        HSTRING *value);

    HRESULT (STDMETHODCALLTYPE *get_SystemSku)(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation *This,
        HSTRING *value);

    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl;

interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation {
    CONST_VTBL __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IEasClientDeviceInformation methods ***/
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_Id(This,value) (This)->lpVtbl->get_Id(This,value)
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_OperatingSystem(This,value) (This)->lpVtbl->get_OperatingSystem(This,value)
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_FriendlyName(This,value) (This)->lpVtbl->get_FriendlyName(This,value)
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemManufacturer(This,value) (This)->lpVtbl->get_SystemManufacturer(This,value)
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemProductName(This,value) (This)->lpVtbl->get_SystemProductName(This,value)
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemSku(This,value) (This)->lpVtbl->get_SystemSku(This,value)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_QueryInterface(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_AddRef(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_Release(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetIids(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetRuntimeClassName(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetTrustLevel(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IEasClientDeviceInformation methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_Id(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,GUID *value) {
    return This->lpVtbl->get_Id(This,value);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_OperatingSystem(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,HSTRING *value) {
    return This->lpVtbl->get_OperatingSystem(This,value);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_FriendlyName(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,HSTRING *value) {
    return This->lpVtbl->get_FriendlyName(This,value);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemManufacturer(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,HSTRING *value) {
    return This->lpVtbl->get_SystemManufacturer(This,value);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemProductName(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,HSTRING *value) {
    return This->lpVtbl->get_SystemProductName(This,value);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemSku(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,HSTRING *value) {
    return This->lpVtbl->get_SystemSku(This,value);
}
#endif
#ifdef WIDL_using_Windows_Security_ExchangeActiveSyncProvisioning
#define IID_IEasClientDeviceInformation IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation
#define IEasClientDeviceInformationVtbl __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl
#define IEasClientDeviceInformation __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation
#define IEasClientDeviceInformation_QueryInterface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_QueryInterface
#define IEasClientDeviceInformation_AddRef __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_AddRef
#define IEasClientDeviceInformation_Release __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_Release
#define IEasClientDeviceInformation_GetIids __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetIids
#define IEasClientDeviceInformation_GetRuntimeClassName __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetRuntimeClassName
#define IEasClientDeviceInformation_GetTrustLevel __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetTrustLevel
#define IEasClientDeviceInformation_get_Id __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_Id
#define IEasClientDeviceInformation_get_OperatingSystem __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_OperatingSystem
#define IEasClientDeviceInformation_get_FriendlyName __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_FriendlyName
#define IEasClientDeviceInformation_get_SystemManufacturer __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemManufacturer
#define IEasClientDeviceInformation_get_SystemProductName __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemProductName
#define IEasClientDeviceInformation_get_SystemSku __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemSku
#endif /* WIDL_using_Windows_Security_ExchangeActiveSyncProvisioning */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__ */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/*
 * Class Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation_DEFINED
#define RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation_DEFINED
#if !defined(_MSC_VER) && !defined(__MINGW32__)
static const WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation[] = {'W','i','n','d','o','w','s','.','S','e','c','u','r','i','t','y','.','E','x','c','h','a','n','g','e','A','c','t','i','v','e','S','y','n','c','P','r','o','v','i','s','i','o','n','i','n','g','.','E','a','s','C','l','i','e','n','t','D','e','v','i','c','e','I','n','f','o','r','m','a','t','i','o','n',0};
#elif defined(__GNUC__) && !defined(__cplusplus)
const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation[] = L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation";
#else
extern const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation[] = {'W','i','n','d','o','w','s','.','S','e','c','u','r','i','t','y','.','E','x','c','h','a','n','g','e','A','c','t','i','v','e','S','y','n','c','P','r','o','v','i','s','i','o','n','i','n','g','.','E','a','s','C','l','i','e','n','t','D','e','v','i','c','e','I','n','f','o','r','m','a','t','i','o','n',0};
#endif
#endif /* RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation_DEFINED */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HSTRING_UserSize     (ULONG *, ULONG, HSTRING *);
unsigned char * __RPC_USER HSTRING_UserMarshal  (ULONG *, unsigned char *, HSTRING *);
unsigned char * __RPC_USER HSTRING_UserUnmarshal(ULONG *, unsigned char *, HSTRING *);
void            __RPC_USER HSTRING_UserFree     (ULONG *, HSTRING *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_security_exchangeactivesyncprovisioning_h__ */
