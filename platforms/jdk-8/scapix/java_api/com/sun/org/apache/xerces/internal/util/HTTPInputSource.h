// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_HTTPINPUTSOURCE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_HTTPINPUTSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class HTTPInputSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::HTTPInputSource>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/HTTPInputSource";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_HTTPINPUTSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_HTTPINPUTSOURCE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_HTTPINPUTSOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::HTTPInputSource : public jni::object_base<"com/sun/org/apache/xerces/internal/util/HTTPInputSource",
	com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::HTTPInputSource> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::HTTPInputSource> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::HTTPInputSource> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::io::InputStream> p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::HTTPInputSource> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::io::Reader> p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jboolean getFollowHTTPRedirects() { return call_method<"getFollowHTTPRedirects", jboolean>(); }
	void setFollowHTTPRedirects(jboolean p1) { return call_method<"setFollowHTTPRedirects", void>(p1); }
	jni::ref<java::lang::String> getHTTPRequestProperty(jni::ref<java::lang::String> p1) { return call_method<"getHTTPRequestProperty", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Iterator> getHTTPRequestProperties() { return call_method<"getHTTPRequestProperties", jni::ref<java::util::Iterator>>(); }
	void setHTTPRequestProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setHTTPRequestProperty", void>(p1, p2); }

protected:

	HTTPInputSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_HTTPINPUTSOURCE
