// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERMALFUNCTIONERROR_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERMALFUNCTIONERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::charset { class CoderMalfunctionError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::charset::CoderMalfunctionError>
{
	static constexpr fixed_string class_name = "java/nio/charset/CoderMalfunctionError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Error>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERMALFUNCTIONERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERMALFUNCTIONERROR)
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERMALFUNCTIONERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Exception.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::charset::CoderMalfunctionError : public jni::object_base<"java/nio/charset/CoderMalfunctionError",
	java::lang::Error>
{
public:

	static jni::ref<java::nio::charset::CoderMalfunctionError> new_object(jni::ref<java::lang::Exception> ex) { return base_::new_object(ex); }

protected:

	CoderMalfunctionError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERMALFUNCTIONERROR
