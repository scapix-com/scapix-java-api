// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_JAVANETACCESS_FWD
#define SCAPIX_JAVA_API_SUN_MISC_JAVANETACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class JavaNetAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::JavaNetAccess>
{
	static constexpr fixed_string class_name = "sun/misc/JavaNetAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_JAVANETACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_JAVANETACCESS)
#define SCAPIX_JAVA_API_SUN_MISC_JAVANETACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/URLClassLoader.h>
#include <scapix/java_api/sun/misc/URLClassPath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::JavaNetAccess : public jni::object_base<"sun/misc/JavaNetAccess",
	java::lang::Object>
{
public:

	jni::ref<sun::misc::URLClassPath> getURLClassPath(jni::ref<java::net::URLClassLoader> p1) { return call_method<"getURLClassPath", jni::ref<sun::misc::URLClassPath>>(p1); }
	jni::ref<java::lang::String> getOriginalHostName(jni::ref<java::net::InetAddress> p1) { return call_method<"getOriginalHostName", jni::ref<java::lang::String>>(p1); }

protected:

	JavaNetAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_JAVANETACCESS