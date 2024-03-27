// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/HeapMemorySegmentImpl.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFLONG_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFLONG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class HeapMemorySegmentImpl_OfLong; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::HeapMemorySegmentImpl_OfLong>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/HeapMemorySegmentImpl$OfLong";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::HeapMemorySegmentImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFLONG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFLONG)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFLONG

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::HeapMemorySegmentImpl_OfLong : public jni::object_base<"jdk/internal/foreign/HeapMemorySegmentImpl$OfLong",
	jdk::internal::foreign::HeapMemorySegmentImpl>
{
public:

	jni::ref<jni::array<jlong>> unsafeGetBase() { return call_method<"unsafeGetBase", jni::ref<jni::array<jlong>>>(); }
	jlong maxAlignMask() { return call_method<"maxAlignMask", jlong>(); }
	jlong address() { return call_method<"address", jlong>(); }

protected:

	HeapMemorySegmentImpl_OfLong(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFLONG