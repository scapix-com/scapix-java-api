// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/InvocationHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_PROXY_LINKEDINVOCATIONHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_PROXY_LINKEDINVOCATIONHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orbutil::proxy { class LinkedInvocationHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orbutil::proxy::LinkedInvocationHandler>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orbutil/proxy/LinkedInvocationHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::reflect::InvocationHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_PROXY_LINKEDINVOCATIONHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_PROXY_LINKEDINVOCATIONHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_PROXY_LINKEDINVOCATIONHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/reflect/Proxy.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orbutil::proxy::LinkedInvocationHandler : public jni::object_base<"com/sun/corba/se/spi/orbutil/proxy/LinkedInvocationHandler",
	java::lang::Object,
	java::lang::reflect::InvocationHandler>
{
public:

	void setProxy(jni::ref<java::lang::reflect::Proxy> p1) { return call_method<"setProxy", void>(p1); }
	jni::ref<java::lang::reflect::Proxy> getProxy() { return call_method<"getProxy", jni::ref<java::lang::reflect::Proxy>>(); }

protected:

	LinkedInvocationHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_PROXY_LINKEDINVOCATIONHANDLER