// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_TYPECLASS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_TYPECLASS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::x64::windows { class TypeClass; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::x64::windows::TypeClass>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/x64/windows/TypeClass";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_TYPECLASS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_TYPECLASS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_TYPECLASS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::x64::windows::TypeClass : public jni::object_base<"jdk/internal/foreign/abi/x64/windows/TypeClass",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass> STRUCT_REGISTER() { return get_static_field<"STRUCT_REGISTER", jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass>>(); }
	static jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass> STRUCT_REFERENCE() { return get_static_field<"STRUCT_REFERENCE", jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass>>(); }
	static jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass> POINTER() { return get_static_field<"POINTER", jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass>>(); }
	static jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass> INTEGER() { return get_static_field<"INTEGER", jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass>>(); }
	static jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass> FLOAT() { return get_static_field<"FLOAT", jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass>>(); }
	static jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass> VARARG_FLOAT() { return get_static_field<"VARARG_FLOAT", jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass>>(); }

	static jni::ref<jni::array<jdk::internal::foreign::abi::x64::windows::TypeClass>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::foreign::abi::x64::windows::TypeClass>>>(); }
	static jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::foreign::abi::x64::windows::TypeClass>>(name); }

protected:

	TypeClass(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_TYPECLASS