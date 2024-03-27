// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_POLLER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_POLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class Poller; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::Poller>
{
	static constexpr fixed_string class_name = "sun/nio/ch/Poller";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_POLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_POLLER)
#define SCAPIX_JAVA_API_SUN_NIO_CH_POLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/BooleanSupplier.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ch::Poller : public jni::object_base<"sun/nio/ch/Poller",
	java::lang::Object>
{
public:

	static void poll(jint fdVal, jint event, jlong nanos, jni::ref<java::util::function::BooleanSupplier> p4) { return call_static_method<"poll", void>(fdVal, event, nanos, p4); }
	static jni::ref<java::util::stream::Stream> blockedThreads() { return call_static_method<"blockedThreads", jni::ref<java::util::stream::Stream>>(); }

protected:

	Poller(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_POLLER