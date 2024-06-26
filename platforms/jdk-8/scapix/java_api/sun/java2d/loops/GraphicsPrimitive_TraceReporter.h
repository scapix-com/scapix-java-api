// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Thread.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_GRAPHICSPRIMITIVE_TRACEREPORTER_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_GRAPHICSPRIMITIVE_TRACEREPORTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class GraphicsPrimitive_TraceReporter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::GraphicsPrimitive_TraceReporter>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/GraphicsPrimitive$TraceReporter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Thread>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_GRAPHICSPRIMITIVE_TRACEREPORTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_GRAPHICSPRIMITIVE_TRACEREPORTER)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_GRAPHICSPRIMITIVE_TRACEREPORTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::loops::GraphicsPrimitive_TraceReporter : public jni::object_base<"sun/java2d/loops/GraphicsPrimitive$TraceReporter",
	java::lang::Thread>
{
public:

	static jni::ref<sun::java2d::loops::GraphicsPrimitive_TraceReporter> new_object() { return base_::new_object(); }
	static void setShutdownHook() { return call_static_method<"setShutdownHook", void>(); }
	void run() { return call_method<"run", void>(); }

protected:

	GraphicsPrimitive_TraceReporter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_GRAPHICSPRIMITIVE_TRACEREPORTER
