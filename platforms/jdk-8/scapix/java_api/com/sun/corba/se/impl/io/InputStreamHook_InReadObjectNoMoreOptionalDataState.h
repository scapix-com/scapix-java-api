// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/io/InputStreamHook_InReadObjectOptionalDataState.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_INREADOBJECTNOMOREOPTIONALDATASTATE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_INREADOBJECTNOMOREOPTIONALDATASTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::io { class InputStreamHook_InReadObjectNoMoreOptionalDataState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::io::InputStreamHook_InReadObjectNoMoreOptionalDataState>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/io/InputStreamHook$InReadObjectNoMoreOptionalDataState";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::io::InputStreamHook_InReadObjectOptionalDataState>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_INREADOBJECTNOMOREOPTIONALDATASTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_INREADOBJECTNOMOREOPTIONALDATASTATE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_INREADOBJECTNOMOREOPTIONALDATASTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/io/InputStreamHook.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::io::InputStreamHook_InReadObjectNoMoreOptionalDataState : public jni::object_base<"com/sun/corba/se/impl/io/InputStreamHook$InReadObjectNoMoreOptionalDataState",
	com::sun::corba::se::impl::io::InputStreamHook_InReadObjectOptionalDataState>
{
public:

	void readData(jni::ref<com::sun::corba::se::impl::io::InputStreamHook> p1) { return call_method<"readData", void>(p1); }

protected:

	InputStreamHook_InReadObjectNoMoreOptionalDataState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_INREADOBJECTNOMOREOPTIONALDATASTATE