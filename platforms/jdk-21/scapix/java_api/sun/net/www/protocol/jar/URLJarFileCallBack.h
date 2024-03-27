// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILECALLBACK_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILECALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::jar { class URLJarFileCallBack; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::jar::URLJarFileCallBack>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/jar/URLJarFileCallBack";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILECALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILECALLBACK)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILECALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/util/jar/JarFile.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::protocol::jar::URLJarFileCallBack : public jni::object_base<"sun/net/www/protocol/jar/URLJarFileCallBack",
	java::lang::Object>
{
public:

	jni::ref<java::util::jar::JarFile> retrieve(jni::ref<java::net::URL> p1) { return call_method<"retrieve", jni::ref<java::util::jar::JarFile>>(p1); }

protected:

	URLJarFileCallBack(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILECALLBACK