// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_EDGE_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_EDGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class ProcessPath_Edge; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::ProcessPath_Edge>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/ProcessPath$Edge";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_EDGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_EDGE)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_EDGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/loops/ProcessPath_Point.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::loops::ProcessPath_Edge : public jni::object_base<"sun/java2d/loops/ProcessPath$Edge",
	java::lang::Object>
{
public:

	static jni::ref<sun::java2d::loops::ProcessPath_Edge> new_object(jni::ref<sun::java2d::loops::ProcessPath_Point> p1, jint p2, jint p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }

protected:

	ProcessPath_Edge(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_PROCESSPATH_EDGE