// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/SecureClassLoader.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_URLCLASSLOADER_FWD
#define SCAPIX_JAVA_API_JAVA_NET_URLCLASSLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class URLClassLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::URLClassLoader>
{
	static constexpr fixed_string class_name = "java/net/URLClassLoader";
	using base_classes = std::tuple<scapix::java_api::java::security::SecureClassLoader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URLCLASSLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_URLCLASSLOADER)
#define SCAPIX_JAVA_API_JAVA_NET_URLCLASSLOADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/net/URLStreamHandlerFactory.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::URLClassLoader : public jni::object_base<"java/net/URLClassLoader",
	java::security::SecureClassLoader>
{
public:

	static jni::ref<java::net::URLClassLoader> new_object(jni::ref<jni::array<java::net::URL>> urls) { return base_::new_object(urls); }
	static jni::ref<java::net::URLClassLoader> new_object(jni::ref<jni::array<java::net::URL>> urls, jni::ref<java::lang::ClassLoader> parent) { return base_::new_object(urls, parent); }
	static jni::ref<java::net::URLClassLoader> new_object(jni::ref<jni::array<java::net::URL>> searchUrls, jni::ref<java::lang::ClassLoader> parent, jni::ref<java::net::URLStreamHandlerFactory> factory) { return base_::new_object(searchUrls, parent, factory); }
	jni::ref<java::util::Enumeration> findResources(jni::ref<java::lang::String> name) { return call_method<"findResources", jni::ref<java::util::Enumeration>>(name); }
	jni::ref<jni::array<java::net::URL>> getURLs() { return call_method<"getURLs", jni::ref<jni::array<java::net::URL>>>(); }
	static jni::ref<java::net::URLClassLoader> newInstance(jni::ref<jni::array<java::net::URL>> urls) { return call_static_method<"newInstance", jni::ref<java::net::URLClassLoader>>(urls); }
	static jni::ref<java::net::URLClassLoader> newInstance(jni::ref<jni::array<java::net::URL>> urls, jni::ref<java::lang::ClassLoader> parentCl) { return call_static_method<"newInstance", jni::ref<java::net::URLClassLoader>>(urls, parentCl); }
	jni::ref<java::net::URL> findResource(jni::ref<java::lang::String> name) { return call_method<"findResource", jni::ref<java::net::URL>>(name); }

protected:

	URLClassLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URLCLASSLOADER
