// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jndi/toolkit/url/GenericURLContext.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_URL_IIOP_IIOPURLCONTEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_URL_IIOP_IIOPURLCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::url::iiop { class iiopURLContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::url::iiop::iiopURLContext>
{
	static constexpr fixed_string class_name = "com/sun/jndi/url/iiop/iiopURLContext";
	using base_classes = std::tuple<scapix::java_api::com::sun::jndi::toolkit::url::GenericURLContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_URL_IIOP_IIOPURLCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_URL_IIOP_IIOPURLCONTEXT)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_URL_IIOP_IIOPURLCONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::url::iiop::iiopURLContext : public jni::object_base<"com/sun/jndi/url/iiop/iiopURLContext",
	com::sun::jndi::toolkit::url::GenericURLContext>
{
public:


protected:

	iiopURLContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_URL_IIOP_IIOPURLCONTEXT
