// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class Invoker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::Invoker>
{
	static constexpr fixed_string class_name = "sun/nio/ch/Invoker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER)
#define SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::Invoker : public jni::object_base<"sun/nio/ch/Invoker",
	java::lang::Object>
{
public:


protected:

	Invoker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER
