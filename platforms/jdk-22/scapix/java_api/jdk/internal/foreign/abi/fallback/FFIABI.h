// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_FFIABI_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_FFIABI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::fallback { class FFIABI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::fallback::FFIABI>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/fallback/FFIABI";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_FFIABI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_FFIABI)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_FFIABI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::fallback::FFIABI : public jni::object_base<"jdk/internal/foreign/abi/fallback/FFIABI",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::foreign::abi::fallback::FFIABI> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<jdk::internal::foreign::abi::fallback::FFIABI>>(); }

	static jni::ref<jni::array<jdk::internal::foreign::abi::fallback::FFIABI>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::foreign::abi::fallback::FFIABI>>>(); }
	static jni::ref<jdk::internal::foreign::abi::fallback::FFIABI> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::foreign::abi::fallback::FFIABI>>(name); }

protected:

	FFIABI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_FFIABI
