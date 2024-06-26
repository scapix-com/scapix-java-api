// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANETURLCLASSLOADERACCESS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANETURLCLASSLOADERACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::access { class JavaNetURLClassLoaderAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::access::JavaNetURLClassLoaderAccess>
{
	static constexpr fixed_string class_name = "jdk/internal/access/JavaNetURLClassLoaderAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANETURLCLASSLOADERACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANETURLCLASSLOADERACCESS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANETURLCLASSLOADERACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/URLClassLoader.h>
#include <scapix/java_api/java/security/AccessControlContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::access::JavaNetURLClassLoaderAccess : public jni::object_base<"jdk/internal/access/JavaNetURLClassLoaderAccess",
	java::lang::Object>
{
public:

	jni::ref<java::security::AccessControlContext> getAccessControlContext(jni::ref<java::net::URLClassLoader> p1) { return call_method<"getAccessControlContext", jni::ref<java::security::AccessControlContext>>(p1); }

protected:

	JavaNetURLClassLoaderAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVANETURLCLASSLOADERACCESS
