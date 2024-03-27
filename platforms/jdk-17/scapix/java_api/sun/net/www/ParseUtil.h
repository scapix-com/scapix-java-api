// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PARSEUTIL_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PARSEUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www { class ParseUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::ParseUtil>
{
	static constexpr fixed_string class_name = "sun/net/www/ParseUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PARSEUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PARSEUTIL)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PARSEUTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/net/URL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::ParseUtil : public jni::object_base<"sun/net/www/ParseUtil",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> encodePath(jni::ref<java::lang::String> path) { return call_static_method<"encodePath", jni::ref<java::lang::String>>(path); }
	static jni::ref<java::lang::String> encodePath(jni::ref<java::lang::String> path, jboolean flag) { return call_static_method<"encodePath", jni::ref<java::lang::String>>(path, flag); }
	static jni::ref<java::lang::String> decode(jni::ref<java::lang::String> s) { return call_static_method<"decode", jni::ref<java::lang::String>>(s); }
	static jni::ref<java::net::URL> fileToEncodedURL(jni::ref<java::io::File> file) { return call_static_method<"fileToEncodedURL", jni::ref<java::net::URL>>(file); }
	static jni::ref<java::net::URI> toURI(jni::ref<java::net::URL> url) { return call_static_method<"toURI", jni::ref<java::net::URI>>(url); }

protected:

	ParseUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PARSEUTIL
