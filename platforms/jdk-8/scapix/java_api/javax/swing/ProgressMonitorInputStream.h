// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITORINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITORINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class ProgressMonitorInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::ProgressMonitorInputStream>
{
	static constexpr fixed_string class_name = "javax/swing/ProgressMonitorInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITORINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITORINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITORINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/ProgressMonitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::ProgressMonitorInputStream : public jni::object_base<"javax/swing/ProgressMonitorInputStream",
	java::io::FilterInputStream>
{
public:

	static jni::ref<javax::swing::ProgressMonitorInputStream> new_object(jni::ref<java::awt::Component> p1, jni::ref<java::lang::Object> p2, jni::ref<java::io::InputStream> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<javax::swing::ProgressMonitor> getProgressMonitor() { return call_method<"getProgressMonitor", jni::ref<javax::swing::ProgressMonitor>>(); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> p1) { return call_method<"read", jint>(p1); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jlong skip(jlong p1) { return call_method<"skip", jlong>(p1); }
	void close() { return call_method<"close", void>(); }
	void reset() { return call_method<"reset", void>(); }

protected:

	ProgressMonitorInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITORINPUTSTREAM
