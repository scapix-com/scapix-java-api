// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_LAYOUTPATHIMPL_SEGMENTPATHBUILDER_FWD
#define SCAPIX_JAVA_API_SUN_FONT_LAYOUTPATHIMPL_SEGMENTPATHBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class LayoutPathImpl_SegmentPathBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::LayoutPathImpl_SegmentPathBuilder>
{
	static constexpr fixed_string class_name = "sun/font/LayoutPathImpl$SegmentPathBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_LAYOUTPATHIMPL_SEGMENTPATHBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_LAYOUTPATHIMPL_SEGMENTPATHBUILDER)
#define SCAPIX_JAVA_API_SUN_FONT_LAYOUTPATHIMPL_SEGMENTPATHBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/font/LayoutPathImpl_EndType.h>
#include <scapix/java_api/sun/font/LayoutPathImpl_SegmentPath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::LayoutPathImpl_SegmentPathBuilder : public jni::object_base<"sun/font/LayoutPathImpl$SegmentPathBuilder",
	java::lang::Object>
{
public:

	static jni::ref<sun::font::LayoutPathImpl_SegmentPathBuilder> new_object() { return base_::new_object(); }
	void reset(jint p1) { return call_method<"reset", void>(p1); }
	jni::ref<sun::font::LayoutPathImpl_SegmentPath> build(jni::ref<sun::font::LayoutPathImpl_EndType> p1, jni::ref<jni::array<jdouble>> p2) { return call_method<"build", jni::ref<sun::font::LayoutPathImpl_SegmentPath>>(p1, p2); }
	void moveTo(jdouble p1, jdouble p2) { return call_method<"moveTo", void>(p1, p2); }
	void lineTo(jdouble p1, jdouble p2) { return call_method<"lineTo", void>(p1, p2); }
	jni::ref<sun::font::LayoutPathImpl_SegmentPath> complete() { return call_method<"complete", jni::ref<sun::font::LayoutPathImpl_SegmentPath>>(); }
	jni::ref<sun::font::LayoutPathImpl_SegmentPath> complete(jni::ref<sun::font::LayoutPathImpl_EndType> p1) { return call_method<"complete", jni::ref<sun::font::LayoutPathImpl_SegmentPath>>(p1); }

protected:

	LayoutPathImpl_SegmentPathBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_LAYOUTPATHIMPL_SEGMENTPATHBUILDER
