// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_IOUTIL_LINKEDRUNNABLE_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_IOUTIL_LINKEDRUNNABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class IOUtil_LinkedRunnable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::IOUtil_LinkedRunnable>
{
	static constexpr fixed_string class_name = "sun/nio/ch/IOUtil$LinkedRunnable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_IOUTIL_LINKEDRUNNABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_IOUTIL_LINKEDRUNNABLE)
#define SCAPIX_JAVA_API_SUN_NIO_CH_IOUTIL_LINKEDRUNNABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::IOUtil_LinkedRunnable : public jni::object_base<"sun/nio/ch/IOUtil$LinkedRunnable",
	java::lang::Record,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::Runnable> node() { return call_method<"node", jni::ref<java::lang::Runnable>>(); }
	jni::ref<java::lang::Runnable> next() { return call_method<"next", jni::ref<java::lang::Runnable>>(); }

protected:

	IOUtil_LinkedRunnable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_IOUTIL_LINKEDRUNNABLE
