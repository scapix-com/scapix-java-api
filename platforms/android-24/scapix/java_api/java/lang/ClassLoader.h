// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ClassLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ClassLoader>
{
	static constexpr fixed_string class_name = "java/lang/ClassLoader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ClassLoader : public jni::object_base<"java/lang/ClassLoader",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Class> loadClass(jni::ref<java::lang::String> name) { return call_method<"loadClass", jni::ref<java::lang::Class>>(name); }
	jni::ref<java::net::URL> getResource(jni::ref<java::lang::String> name) { return call_method<"getResource", jni::ref<java::net::URL>>(name); }
	jni::ref<java::util::Enumeration> getResources(jni::ref<java::lang::String> name) { return call_method<"getResources", jni::ref<java::util::Enumeration>>(name); }
	static jni::ref<java::net::URL> getSystemResource(jni::ref<java::lang::String> name) { return call_static_method<"getSystemResource", jni::ref<java::net::URL>>(name); }
	static jni::ref<java::util::Enumeration> getSystemResources(jni::ref<java::lang::String> name) { return call_static_method<"getSystemResources", jni::ref<java::util::Enumeration>>(name); }
	jni::ref<java::io::InputStream> getResourceAsStream(jni::ref<java::lang::String> name) { return call_method<"getResourceAsStream", jni::ref<java::io::InputStream>>(name); }
	static jni::ref<java::io::InputStream> getSystemResourceAsStream(jni::ref<java::lang::String> name) { return call_static_method<"getSystemResourceAsStream", jni::ref<java::io::InputStream>>(name); }
	jni::ref<java::lang::ClassLoader> getParent() { return call_method<"getParent", jni::ref<java::lang::ClassLoader>>(); }
	static jni::ref<java::lang::ClassLoader> getSystemClassLoader() { return call_static_method<"getSystemClassLoader", jni::ref<java::lang::ClassLoader>>(); }
	void setDefaultAssertionStatus(jboolean enabled) { return call_method<"setDefaultAssertionStatus", void>(enabled); }
	void setPackageAssertionStatus(jni::ref<java::lang::String> packageName, jboolean enabled) { return call_method<"setPackageAssertionStatus", void>(packageName, enabled); }
	void setClassAssertionStatus(jni::ref<java::lang::String> className, jboolean enabled) { return call_method<"setClassAssertionStatus", void>(className, enabled); }
	void clearAssertionStatus() { return call_method<"clearAssertionStatus", void>(); }

protected:

	ClassLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER