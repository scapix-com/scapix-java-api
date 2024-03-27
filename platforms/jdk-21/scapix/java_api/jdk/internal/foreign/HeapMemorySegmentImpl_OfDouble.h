// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/HeapMemorySegmentImpl.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFDOUBLE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFDOUBLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class HeapMemorySegmentImpl_OfDouble; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::HeapMemorySegmentImpl_OfDouble>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/HeapMemorySegmentImpl$OfDouble";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::HeapMemorySegmentImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFDOUBLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFDOUBLE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFDOUBLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/foreign/MemorySegment.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::HeapMemorySegmentImpl_OfDouble : public jni::object_base<"jdk/internal/foreign/HeapMemorySegmentImpl$OfDouble",
	jdk::internal::foreign::HeapMemorySegmentImpl>
{
public:

	jni::ref<jni::array<jdouble>> unsafeGetBase() { return call_method<"unsafeGetBase", jni::ref<jni::array<jdouble>>>(); }
	static jni::ref<java::lang::foreign::MemorySegment> fromArray(jni::ref<jni::array<jdouble>> arr) { return call_static_method<"fromArray", jni::ref<java::lang::foreign::MemorySegment>>(arr); }
	jlong maxAlignMask() { return call_method<"maxAlignMask", jlong>(); }
	jlong address() { return call_method<"address", jlong>(); }

protected:

	HeapMemorySegmentImpl_OfDouble(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_OFDOUBLE