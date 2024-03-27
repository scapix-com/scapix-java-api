// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL_SEGMENTSPLITTER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL_SEGMENTSPLITTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class AbstractMemorySegmentImpl_SegmentSplitter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::AbstractMemorySegmentImpl_SegmentSplitter>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/AbstractMemorySegmentImpl$SegmentSplitter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL_SEGMENTSPLITTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL_SEGMENTSPLITTER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL_SEGMENTSPLITTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::AbstractMemorySegmentImpl_SegmentSplitter : public jni::object_base<"jdk/internal/foreign/AbstractMemorySegmentImpl$SegmentSplitter",
	java::lang::Object,
	java::util::Spliterator>
{
public:

	jni::ref<jdk::internal::foreign::AbstractMemorySegmentImpl_SegmentSplitter> trySplit() { return call_method<"trySplit", jni::ref<jdk::internal::foreign::AbstractMemorySegmentImpl_SegmentSplitter>>(); }
	jboolean tryAdvance(jni::ref<java::util::function::Consumer> action) { return call_method<"tryAdvance", jboolean>(action); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> action) { return call_method<"forEachRemaining", void>(action); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	AbstractMemorySegmentImpl_SegmentSplitter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL_SEGMENTSPLITTER
