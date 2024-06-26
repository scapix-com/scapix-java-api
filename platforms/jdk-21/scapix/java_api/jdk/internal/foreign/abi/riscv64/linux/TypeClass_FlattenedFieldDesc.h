// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_RISCV64_LINUX_TYPECLASS_FLATTENEDFIELDDESC_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_RISCV64_LINUX_TYPECLASS_FLATTENEDFIELDDESC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::riscv64::linux { class TypeClass_FlattenedFieldDesc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::riscv64::linux::TypeClass_FlattenedFieldDesc>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/riscv64/linux/TypeClass$FlattenedFieldDesc";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_RISCV64_LINUX_TYPECLASS_FLATTENEDFIELDDESC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_RISCV64_LINUX_TYPECLASS_FLATTENEDFIELDDESC)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_RISCV64_LINUX_TYPECLASS_FLATTENEDFIELDDESC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout.h>
#include <scapix/java_api/jdk/internal/foreign/abi/riscv64/linux/TypeClass.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::riscv64::linux::TypeClass_FlattenedFieldDesc : public jni::object_base<"jdk/internal/foreign/abi/riscv64/linux/TypeClass$FlattenedFieldDesc",
	java::lang::Record>
{
public:

	static jni::ref<jdk::internal::foreign::abi::riscv64::linux::TypeClass_FlattenedFieldDesc> new_object(jni::ref<jdk::internal::foreign::abi::riscv64::linux::TypeClass> typeClass, jlong offset, jni::ref<java::lang::foreign::ValueLayout> p3) { return base_::new_object(typeClass, offset, p3); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<jdk::internal::foreign::abi::riscv64::linux::TypeClass> typeClass() { return call_method<"typeClass", jni::ref<jdk::internal::foreign::abi::riscv64::linux::TypeClass>>(); }
	jlong offset() { return call_method<"offset", jlong>(); }
	jni::ref<java::lang::foreign::ValueLayout> layout() { return call_method<"layout", jni::ref<java::lang::foreign::ValueLayout>>(); }

protected:

	TypeClass_FlattenedFieldDesc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_RISCV64_LINUX_TYPECLASS_FLATTENEDFIELDDESC
