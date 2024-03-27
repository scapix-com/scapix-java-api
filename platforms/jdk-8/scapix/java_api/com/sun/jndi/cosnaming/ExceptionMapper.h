// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_EXCEPTIONMAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_EXCEPTIONMAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::cosnaming { class ExceptionMapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::cosnaming::ExceptionMapper>
{
	static constexpr fixed_string class_name = "com/sun/jndi/cosnaming/ExceptionMapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_EXCEPTIONMAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_EXCEPTIONMAPPER)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_EXCEPTIONMAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jndi/cosnaming/CNCtx.h>
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/javax/naming/NamingException.h>
#include <scapix/java_api/org/omg/CosNaming/NameComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::cosnaming::ExceptionMapper : public jni::object_base<"com/sun/jndi/cosnaming/ExceptionMapper",
	java::lang::Object>
{
public:

	static jni::ref<javax::naming::NamingException> mapException(jni::ref<java::lang::Exception> p1, jni::ref<com::sun::jndi::cosnaming::CNCtx> p2, jni::ref<jni::array<org::omg::CosNaming::NameComponent>> p3) { return call_static_method<"mapException", jni::ref<javax::naming::NamingException>>(p1, p2, p3); }

protected:

	ExceptionMapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_EXCEPTIONMAPPER
