// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/net/ssl/SNIServerName.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIHOSTNAME_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIHOSTNAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class SNIHostName; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::SNIHostName>
{
	static constexpr fixed_string class_name = "javax/net/ssl/SNIHostName";
	using base_classes = std::tuple<scapix::java_api::javax::net::ssl::SNIServerName>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIHOSTNAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIHOSTNAME)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIHOSTNAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/net/ssl/SNIMatcher.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::SNIHostName : public jni::object_base<"javax/net/ssl/SNIHostName",
	javax::net::ssl::SNIServerName>
{
public:

	static jni::ref<javax::net::ssl::SNIHostName> new_object(jni::ref<java::lang::String> hostname) { return base_::new_object(hostname); }
	static jni::ref<javax::net::ssl::SNIHostName> new_object(jni::ref<jni::array<jbyte>> encoded) { return base_::new_object(encoded); }
	jni::ref<java::lang::String> getAsciiName() { return call_method<"getAsciiName", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<javax::net::ssl::SNIMatcher> createSNIMatcher(jni::ref<java::lang::String> regex) { return call_static_method<"createSNIMatcher", jni::ref<javax::net::ssl::SNIMatcher>>(regex); }

protected:

	SNIHostName(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIHOSTNAME