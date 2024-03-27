// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOACCESS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::access { class JavaIOAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::access::JavaIOAccess>
{
	static constexpr fixed_string class_name = "jdk/internal/access/JavaIOAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOACCESS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Console.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::access::JavaIOAccess : public jni::object_base<"jdk/internal/access/JavaIOAccess",
	java::lang::Object>
{
public:

	jni::ref<java::io::Console> console() { return call_method<"console", jni::ref<java::io::Console>>(); }
	jni::ref<java::nio::charset::Charset> charset() { return call_method<"charset", jni::ref<java::nio::charset::Charset>>(); }

protected:

	JavaIOAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOACCESS