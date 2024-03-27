// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_ERRORMANAGER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_ERRORMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::logging { class ErrorManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::logging::ErrorManager>
{
	static constexpr fixed_string class_name = "java/util/logging/ErrorManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_ERRORMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_ERRORMANAGER)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_ERRORMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::logging::ErrorManager : public jni::object_base<"java/util/logging/ErrorManager",
	java::lang::Object>
{
public:

	static jint GENERIC_FAILURE() { return get_static_field<"GENERIC_FAILURE", jint>(); }
	static jint WRITE_FAILURE() { return get_static_field<"WRITE_FAILURE", jint>(); }
	static jint FLUSH_FAILURE() { return get_static_field<"FLUSH_FAILURE", jint>(); }
	static jint CLOSE_FAILURE() { return get_static_field<"CLOSE_FAILURE", jint>(); }
	static jint OPEN_FAILURE() { return get_static_field<"OPEN_FAILURE", jint>(); }
	static jint FORMAT_FAILURE() { return get_static_field<"FORMAT_FAILURE", jint>(); }

	static jni::ref<java::util::logging::ErrorManager> new_object() { return base_::new_object(); }
	void error(jni::ref<java::lang::String> p1, jni::ref<java::lang::Exception> p2, jint p3) { return call_method<"error", void>(p1, p2, p3); }

protected:

	ErrorManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_ERRORMANAGER
