// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER_GROUPANDINVOKECOUNT_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER_GROUPANDINVOKECOUNT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class Invoker_GroupAndInvokeCount; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::Invoker_GroupAndInvokeCount>
{
	static constexpr fixed_string class_name = "sun/nio/ch/Invoker$GroupAndInvokeCount";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER_GROUPANDINVOKECOUNT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER_GROUPANDINVOKECOUNT)
#define SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER_GROUPANDINVOKECOUNT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::Invoker_GroupAndInvokeCount : public jni::object_base<"sun/nio/ch/Invoker$GroupAndInvokeCount",
	java::lang::Object>
{
public:


protected:

	Invoker_GroupAndInvokeCount(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_INVOKER_GROUPANDINVOKECOUNT
