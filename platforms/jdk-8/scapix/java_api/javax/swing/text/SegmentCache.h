// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class SegmentCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::SegmentCache>
{
	static constexpr fixed_string class_name = "javax/swing/text/SegmentCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/Segment.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::SegmentCache : public jni::object_base<"javax/swing/text/SegmentCache",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::text::SegmentCache> getSharedInstance() { return call_static_method<"getSharedInstance", jni::ref<javax::swing::text::SegmentCache>>(); }
	static jni::ref<javax::swing::text::Segment> getSharedSegment() { return call_static_method<"getSharedSegment", jni::ref<javax::swing::text::Segment>>(); }
	static void releaseSharedSegment(jni::ref<javax::swing::text::Segment> p1) { return call_static_method<"releaseSharedSegment", void>(p1); }
	static jni::ref<javax::swing::text::SegmentCache> new_object() { return base_::new_object(); }
	jni::ref<javax::swing::text::Segment> getSegment() { return call_method<"getSegment", jni::ref<javax::swing::text::Segment>>(); }
	void releaseSegment(jni::ref<javax::swing::text::Segment> p1) { return call_method<"releaseSegment", void>(p1); }

protected:

	SegmentCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE