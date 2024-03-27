// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIMATCHER_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIMATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class SNIMatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::SNIMatcher>
{
	static constexpr fixed_string class_name = "javax/net/ssl/SNIMatcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIMATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIMATCHER)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIMATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/net/ssl/SNIServerName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::SNIMatcher : public jni::object_base<"javax/net/ssl/SNIMatcher",
	java::lang::Object>
{
public:

	jint getType() { return call_method<"getType", jint>(); }
	jboolean matches(jni::ref<javax::net::ssl::SNIServerName> p1) { return call_method<"matches", jboolean>(p1); }

protected:

	SNIMatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SNIMATCHER
