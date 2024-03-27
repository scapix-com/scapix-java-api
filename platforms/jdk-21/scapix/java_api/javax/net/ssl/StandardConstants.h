// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_STANDARDCONSTANTS_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_STANDARDCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class StandardConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::StandardConstants>
{
	static constexpr fixed_string class_name = "javax/net/ssl/StandardConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_STANDARDCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_STANDARDCONSTANTS)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_STANDARDCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::StandardConstants : public jni::object_base<"javax/net/ssl/StandardConstants",
	java::lang::Object>
{
public:

	static jint SNI_HOST_NAME() { return get_static_field<"SNI_HOST_NAME", jint>(); }


protected:

	StandardConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_STANDARDCONSTANTS