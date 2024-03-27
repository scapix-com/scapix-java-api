// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/AbstractMemorySegmentImpl.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class HeapMemorySegmentImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::HeapMemorySegmentImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/HeapMemorySegmentImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::AbstractMemorySegmentImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/jdk/internal/foreign/HeapMemorySegmentImpl_OfDouble.h>
#include <scapix/java_api/jdk/internal/foreign/HeapMemorySegmentImpl_OfFloat.h>
#include <scapix/java_api/jdk/internal/foreign/HeapMemorySegmentImpl_OfLong.h>
#include <scapix/java_api/jdk/internal/foreign/HeapMemorySegmentImpl_OfInt.h>
#include <scapix/java_api/jdk/internal/foreign/HeapMemorySegmentImpl_OfShort.h>
#include <scapix/java_api/jdk/internal/foreign/HeapMemorySegmentImpl_OfChar.h>
#include <scapix/java_api/jdk/internal/foreign/HeapMemorySegmentImpl_OfByte.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::HeapMemorySegmentImpl : public jni::object_base<"jdk/internal/foreign/HeapMemorySegmentImpl",
	jdk::internal::foreign::AbstractMemorySegmentImpl>
{
public:

	using OfDouble = HeapMemorySegmentImpl_OfDouble;
	using OfFloat = HeapMemorySegmentImpl_OfFloat;
	using OfLong = HeapMemorySegmentImpl_OfLong;
	using OfInt = HeapMemorySegmentImpl_OfInt;
	using OfShort = HeapMemorySegmentImpl_OfShort;
	using OfChar = HeapMemorySegmentImpl_OfChar;
	using OfByte = HeapMemorySegmentImpl_OfByte;

	jni::ref<java::util::Optional> heapBase() { return call_method<"heapBase", jni::ref<java::util::Optional>>(); }
	jlong unsafeGetOffset() { return call_method<"unsafeGetOffset", jlong>(); }

protected:

	HeapMemorySegmentImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_HEAPMEMORYSEGMENTIMPL
