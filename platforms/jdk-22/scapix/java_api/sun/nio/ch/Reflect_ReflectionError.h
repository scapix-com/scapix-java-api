// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_REFLECT_REFLECTIONERROR_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_REFLECT_REFLECTIONERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class Reflect_ReflectionError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::Reflect_ReflectionError>
{
	static constexpr fixed_string class_name = "sun/nio/ch/Reflect$ReflectionError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Error>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_REFLECT_REFLECTIONERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_REFLECT_REFLECTIONERROR)
#define SCAPIX_JAVA_API_SUN_NIO_CH_REFLECT_REFLECTIONERROR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::Reflect_ReflectionError : public jni::object_base<"sun/nio/ch/Reflect$ReflectionError",
	java::lang::Error>
{
public:


protected:

	Reflect_ReflectionError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_REFLECT_REFLECTIONERROR
