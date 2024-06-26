// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_AbstractValueLayout.h>
#include <scapix/java_api/java/lang/foreign/AddressLayout.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFADDRESSIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFADDRESSIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::layout { class ValueLayouts_OfAddressImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::layout::ValueLayouts_OfAddressImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/layout/ValueLayouts$OfAddressImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::layout::ValueLayouts_AbstractValueLayout, scapix::java_api::java::lang::foreign::AddressLayout>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFADDRESSIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFADDRESSIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFADDRESSIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/MemoryLayout.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::layout::ValueLayouts_OfAddressImpl : public jni::object_base<"jdk/internal/foreign/layout/ValueLayouts$OfAddressImpl",
	jdk::internal::foreign::layout::ValueLayouts_AbstractValueLayout,
	java::lang::foreign::AddressLayout>
{
public:

	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::foreign::AddressLayout> withTargetLayout(jni::ref<java::lang::foreign::MemoryLayout> layout) { return call_method<"withTargetLayout", jni::ref<java::lang::foreign::AddressLayout>>(layout); }
	jni::ref<java::lang::foreign::AddressLayout> withoutTargetLayout() { return call_method<"withoutTargetLayout", jni::ref<java::lang::foreign::AddressLayout>>(); }
	jni::ref<java::util::Optional> targetLayout() { return call_method<"targetLayout", jni::ref<java::util::Optional>>(); }
	static jni::ref<java::lang::foreign::AddressLayout> of(jni::ref<java::nio::ByteOrder> order) { return call_static_method<"of", jni::ref<java::lang::foreign::AddressLayout>>(order); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ValueLayouts_OfAddressImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFADDRESSIMPL
