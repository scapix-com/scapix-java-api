// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER_STATE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER_STATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::util { class CheckSignatureAdapter_State; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER_STATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER_STATE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER_STATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State : public jni::object_base<"jdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State> EMPTY() { return get_static_field<"EMPTY", jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State> FORMAL() { return get_static_field<"FORMAL", jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State> BOUND() { return get_static_field<"BOUND", jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State> SUPER() { return get_static_field<"SUPER", jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State> PARAM() { return get_static_field<"PARAM", jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State> RETURN() { return get_static_field<"RETURN", jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State> SIMPLE_TYPE() { return get_static_field<"SIMPLE_TYPE", jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State> CLASS_TYPE() { return get_static_field<"CLASS_TYPE", jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State> END() { return get_static_field<"END", jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>(); }

	static jni::ref<jni::array<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>>(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter_State>>(name); }

protected:

	CheckSignatureAdapter_State(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER_STATE
