// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_EXCEPTIONHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_EXCEPTIONHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::presentation::rmi { class ExceptionHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::presentation::rmi::ExceptionHandler>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/presentation/rmi/ExceptionHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_EXCEPTIONHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_EXCEPTIONHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_EXCEPTIONHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/org/omg/CORBA/portable/ApplicationException.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::presentation::rmi::ExceptionHandler : public jni::object_base<"com/sun/corba/se/impl/presentation/rmi/ExceptionHandler",
	java::lang::Object>
{
public:

	jboolean isDeclaredException(jni::ref<java::lang::Class> p1) { return call_method<"isDeclaredException", jboolean>(p1); }
	void writeException(jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p1, jni::ref<java::lang::Exception> p2) { return call_method<"writeException", void>(p1, p2); }
	jni::ref<java::lang::Exception> readException(jni::ref<org::omg::CORBA::portable::ApplicationException> p1) { return call_method<"readException", jni::ref<java::lang::Exception>>(p1); }

protected:

	ExceptionHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_EXCEPTIONHANDLER
