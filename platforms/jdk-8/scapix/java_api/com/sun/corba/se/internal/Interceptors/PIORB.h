// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/internal/POA/POAORB.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_INTERNAL_INTERCEPTORS_PIORB_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_INTERNAL_INTERCEPTORS_PIORB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::internal::Interceptors { class PIORB; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::internal::Interceptors::PIORB>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/internal/Interceptors/PIORB";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::internal::POA::POAORB>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_INTERNAL_INTERCEPTORS_PIORB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_INTERNAL_INTERCEPTORS_PIORB)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_INTERNAL_INTERCEPTORS_PIORB

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::internal::Interceptors::PIORB : public jni::object_base<"com/sun/corba/se/internal/Interceptors/PIORB",
	com::sun::corba::se::internal::POA::POAORB>
{
public:

	static jni::ref<com::sun::corba::se::internal::Interceptors::PIORB> new_object() { return base_::new_object(); }

protected:

	PIORB(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_INTERNAL_INTERCEPTORS_PIORB
