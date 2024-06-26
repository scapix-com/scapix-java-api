// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/pipe/Region.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_REGION_IMMUTABLEREGION_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_REGION_IMMUTABLEREGION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class Region_ImmutableRegion; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::Region_ImmutableRegion>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/Region$ImmutableRegion";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::pipe::Region>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_REGION_IMMUTABLEREGION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_REGION_IMMUTABLEREGION)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_REGION_IMMUTABLEREGION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/sun/java2d/pipe/SpanIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::pipe::Region_ImmutableRegion : public jni::object_base<"sun/java2d/pipe/Region$ImmutableRegion",
	sun::java2d::pipe::Region>
{
public:

	void appendSpans(jni::ref<sun::java2d::pipe::SpanIterator> p1) { return call_method<"appendSpans", void>(p1); }
	void setOutputArea(jni::ref<java::awt::Rectangle> p1) { return call_method<"setOutputArea", void>(p1); }
	void setOutputAreaXYWH(jint p1, jint p2, jint p3, jint p4) { return call_method<"setOutputAreaXYWH", void>(p1, p2, p3, p4); }
	void setOutputArea(jni::ref<jni::array<jint>> p1) { return call_method<"setOutputArea", void>(p1); }
	void setOutputAreaXYXY(jint p1, jint p2, jint p3, jint p4) { return call_method<"setOutputAreaXYXY", void>(p1, p2, p3, p4); }

protected:

	Region_ImmutableRegion(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_REGION_IMMUTABLEREGION
