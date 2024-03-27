// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/ProcessPath_ProcessHandler.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_FILLPROCESSHANDLER_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_FILLPROCESSHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class ProcessPath_FillProcessHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::ProcessPath_FillProcessHandler>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/ProcessPath$FillProcessHandler";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::ProcessPath_ProcessHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_FILLPROCESSHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_FILLPROCESSHANDLER)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_FILLPROCESSHANDLER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::loops::ProcessPath_FillProcessHandler : public jni::object_base<"sun/java2d/loops/ProcessPath$FillProcessHandler",
	sun::java2d::loops::ProcessPath_ProcessHandler>
{
public:

	void processFixedLine(jint p1, jint p2, jint p3, jint p4, jni::ref<jni::array<jint>> p5, jboolean p6, jboolean p7) { return call_method<"processFixedLine", void>(p1, p2, p3, p4, p5, p6, p7); }
	void processEndSubPath() { return call_method<"processEndSubPath", void>(); }

protected:

	ProcessPath_FillProcessHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_FILLPROCESSHANDLER