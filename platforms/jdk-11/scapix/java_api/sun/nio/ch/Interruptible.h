// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_INTERRUPTIBLE_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_INTERRUPTIBLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class Interruptible; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::Interruptible>
{
	static constexpr fixed_string class_name = "sun/nio/ch/Interruptible";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_INTERRUPTIBLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_INTERRUPTIBLE)
#define SCAPIX_JAVA_API_SUN_NIO_CH_INTERRUPTIBLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Thread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ch::Interruptible : public jni::object_base<"sun/nio/ch/Interruptible",
	java::lang::Object>
{
public:

	void interrupt(jni::ref<java::lang::Thread> p1) { return call_method<"interrupt", void>(p1); }

protected:

	Interruptible(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_INTERRUPTIBLE