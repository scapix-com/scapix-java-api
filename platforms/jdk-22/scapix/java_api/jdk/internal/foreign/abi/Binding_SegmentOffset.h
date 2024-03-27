// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING_SEGMENTOFFSET_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING_SEGMENTOFFSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class Binding_SegmentOffset; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::Binding_SegmentOffset>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/Binding$SegmentOffset";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::foreign::abi::Binding>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING_SEGMENTOFFSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING_SEGMENTOFFSET)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING_SEGMENTOFFSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/SegmentAllocator.h>
#include <scapix/java_api/java/util/Deque.h>
#include <scapix/java_api/jdk/internal/foreign/abi/BindingInterpreter_LoadFunc.h>
#include <scapix/java_api/jdk/internal/foreign/abi/BindingInterpreter_StoreFunc.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::Binding_SegmentOffset : public jni::object_base<"jdk/internal/foreign/abi/Binding$SegmentOffset",
	java::lang::Record,
	jdk::internal::foreign::abi::Binding>
{
public:

	static jni::ref<jdk::internal::foreign::abi::Binding_SegmentOffset> new_object(jboolean allowHeap) { return base_::new_object(allowHeap); }
	void verify(jni::ref<java::util::Deque> stack) { return call_method<"verify", void>(stack); }
	void interpret(jni::ref<java::util::Deque> stack, jni::ref<jdk::internal::foreign::abi::BindingInterpreter_StoreFunc> storeFunc, jni::ref<jdk::internal::foreign::abi::BindingInterpreter_LoadFunc> loadFunc, jni::ref<java::lang::foreign::SegmentAllocator> allocator) { return call_method<"interpret", void>(stack, storeFunc, loadFunc, allocator); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jboolean allowHeap() { return call_method<"allowHeap", jboolean>(); }

protected:

	Binding_SegmentOffset(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING_SEGMENTOFFSET
