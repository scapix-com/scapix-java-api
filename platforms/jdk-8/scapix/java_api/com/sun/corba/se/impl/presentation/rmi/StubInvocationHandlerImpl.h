// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/proxy/LinkedInvocationHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBINVOCATIONHANDLERIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBINVOCATIONHANDLERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::presentation::rmi { class StubInvocationHandlerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::presentation::rmi::StubInvocationHandlerImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/presentation/rmi/StubInvocationHandlerImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::orbutil::proxy::LinkedInvocationHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBINVOCATIONHANDLERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBINVOCATIONHANDLERIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBINVOCATIONHANDLERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/presentation/rmi/PresentationManager.h>
#include <scapix/java_api/com/sun/corba/se/spi/presentation/rmi/PresentationManager_ClassData.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#include <scapix/java_api/java/lang/reflect/Proxy.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::presentation::rmi::StubInvocationHandlerImpl : public jni::object_base<"com/sun/corba/se/impl/presentation/rmi/StubInvocationHandlerImpl",
	java::lang::Object,
	com::sun::corba::se::spi::orbutil::proxy::LinkedInvocationHandler>
{
public:

	void setProxy(jni::ref<java::lang::reflect::Proxy> p1) { return call_method<"setProxy", void>(p1); }
	jni::ref<java::lang::reflect::Proxy> getProxy() { return call_method<"getProxy", jni::ref<java::lang::reflect::Proxy>>(); }
	static jni::ref<com::sun::corba::se::impl::presentation::rmi::StubInvocationHandlerImpl> new_object(jni::ref<com::sun::corba::se::spi::presentation::rmi::PresentationManager> p1, jni::ref<com::sun::corba::se::spi::presentation::rmi::PresentationManager_ClassData> p2, jni::ref<org::omg::CORBA::Object> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::Object> invoke(jni::ref<java::lang::Object> p1, jni::ref<java::lang::reflect::Method> p2, jni::ref<jni::array<java::lang::Object>> p3) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1, p2, p3); }

protected:

	StubInvocationHandlerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBINVOCATIONHANDLERIMPL