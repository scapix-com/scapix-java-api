// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/Segment.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE_CACHEDSEGMENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE_CACHEDSEGMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class SegmentCache_CachedSegment; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::SegmentCache_CachedSegment>
{
	static constexpr fixed_string class_name = "javax/swing/text/SegmentCache$CachedSegment";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::Segment>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE_CACHEDSEGMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE_CACHEDSEGMENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE_CACHEDSEGMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::SegmentCache_CachedSegment : public jni::object_base<"javax/swing/text/SegmentCache$CachedSegment",
	javax::swing::text::Segment>
{
public:


protected:

	SegmentCache_CachedSegment(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SEGMENTCACHE_CACHEDSEGMENT