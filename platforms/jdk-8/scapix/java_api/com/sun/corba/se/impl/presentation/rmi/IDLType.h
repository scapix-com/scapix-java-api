// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_IDLTYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_IDLTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::presentation::rmi { class IDLType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::presentation::rmi::IDLType>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/presentation/rmi/IDLType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_IDLTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_IDLTYPE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_IDLTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::presentation::rmi::IDLType : public jni::object_base<"com/sun/corba/se/impl/presentation/rmi/IDLType",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::impl::presentation::rmi::IDLType> new_object(jni::ref<java::lang::Class> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::corba::se::impl::presentation::rmi::IDLType> new_object(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::Class> getJavaClass() { return call_method<"getJavaClass", jni::ref<java::lang::Class>>(); }
	jni::ref<jni::array<java::lang::String>> getModules() { return call_method<"getModules", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> makeConcatenatedName(jchar p1, jboolean p2) { return call_method<"makeConcatenatedName", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> getModuleName() { return call_method<"getModuleName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getExceptionName() { return call_method<"getExceptionName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMemberName() { return call_method<"getMemberName", jni::ref<java::lang::String>>(); }
	jboolean hasModule() { return call_method<"hasModule", jboolean>(); }

protected:

	IDLType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_IDLTYPE
