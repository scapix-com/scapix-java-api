// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_SHUTDOWN_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_SHUTDOWN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Shutdown; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Shutdown>
{
	static constexpr fixed_string class_name = "java/lang/Shutdown";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SHUTDOWN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_SHUTDOWN)
#define SCAPIX_JAVA_API_JAVA_LANG_SHUTDOWN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::Shutdown : public jni::object_base<"java/lang/Shutdown",
	java::lang::Object>
{
public:


protected:

	Shutdown(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SHUTDOWN