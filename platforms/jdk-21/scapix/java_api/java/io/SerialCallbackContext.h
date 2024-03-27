// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class SerialCallbackContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::SerialCallbackContext>
{
	static constexpr fixed_string class_name = "java/io/SerialCallbackContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT)
#define SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::SerialCallbackContext : public jni::object_base<"java/io/SerialCallbackContext",
	java::lang::Object>
{
public:


protected:

	SerialCallbackContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_SERIALCALLBACKCONTEXT
