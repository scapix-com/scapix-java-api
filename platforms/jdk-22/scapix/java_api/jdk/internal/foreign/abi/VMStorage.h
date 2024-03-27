// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_VMSTORAGE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_VMSTORAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class VMStorage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::VMStorage>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/VMStorage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_VMSTORAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_VMSTORAGE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_VMSTORAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::VMStorage : public jni::object_base<"jdk/internal/foreign/abi/VMStorage",
	java::lang::Record>
{
public:

	static jni::ref<jdk::internal::foreign::abi::VMStorage> new_object(jbyte type, jshort segmentMaskOrSize, jint indexOrOffset) { return base_::new_object(type, segmentMaskOrSize, indexOrOffset); }
	static jni::ref<jdk::internal::foreign::abi::VMStorage> new_object(jbyte type, jshort segmentMaskOrSize, jint indexOrOffset, jni::ref<java::lang::String> debugName) { return base_::new_object(type, segmentMaskOrSize, indexOrOffset, debugName); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jbyte type() { return call_method<"type", jbyte>(); }
	jshort segmentMaskOrSize() { return call_method<"segmentMaskOrSize", jshort>(); }
	jint indexOrOffset() { return call_method<"indexOrOffset", jint>(); }
	jni::ref<java::lang::String> debugName() { return call_method<"debugName", jni::ref<java::lang::String>>(); }

protected:

	VMStorage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_VMSTORAGE