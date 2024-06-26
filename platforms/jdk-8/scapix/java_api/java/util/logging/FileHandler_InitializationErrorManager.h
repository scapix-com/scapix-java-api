// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/logging/ErrorManager.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_FILEHANDLER_INITIALIZATIONERRORMANAGER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_FILEHANDLER_INITIALIZATIONERRORMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::logging { class FileHandler_InitializationErrorManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::logging::FileHandler_InitializationErrorManager>
{
	static constexpr fixed_string class_name = "java/util/logging/FileHandler$InitializationErrorManager";
	using base_classes = std::tuple<scapix::java_api::java::util::logging::ErrorManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_FILEHANDLER_INITIALIZATIONERRORMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_FILEHANDLER_INITIALIZATIONERRORMANAGER)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_FILEHANDLER_INITIALIZATIONERRORMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::logging::FileHandler_InitializationErrorManager : public jni::object_base<"java/util/logging/FileHandler$InitializationErrorManager",
	java::util::logging::ErrorManager>
{
public:

	void error(jni::ref<java::lang::String> p1, jni::ref<java::lang::Exception> p2, jint p3) { return call_method<"error", void>(p1, p2, p3); }

protected:

	FileHandler_InitializationErrorManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_FILEHANDLER_INITIALIZATIONERRORMANAGER
