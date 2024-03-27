// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_CONSTANTUTILS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_CONSTANTUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::constant { class ConstantUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::constant::ConstantUtils>
{
	static constexpr fixed_string class_name = "java/lang/constant/ConstantUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_CONSTANTUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_CONSTANTUTILS)
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_CONSTANTUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ConstantDesc.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::constant::ConstantUtils : public jni::object_base<"java/lang/constant/ConstantUtils",
	java::lang::Object>
{
public:

	static jni::ref<jni::array<java::lang::constant::ConstantDesc>> EMPTY_CONSTANTDESC() { return get_static_field<"EMPTY_CONSTANTDESC", jni::ref<jni::array<java::lang::constant::ConstantDesc>>>(); }

	static jni::ref<java::lang::String> validateBinaryPackageName(jni::ref<java::lang::String> name) { return call_static_method<"validateBinaryPackageName", jni::ref<java::lang::String>>(name); }
	static jni::ref<java::lang::String> validateInternalPackageName(jni::ref<java::lang::String> name) { return call_static_method<"validateInternalPackageName", jni::ref<java::lang::String>>(name); }
	static jni::ref<java::lang::String> validateModuleName(jni::ref<java::lang::String> name) { return call_static_method<"validateModuleName", jni::ref<java::lang::String>>(name); }
	static jni::ref<java::lang::String> validateMemberName(jni::ref<java::lang::String> name, jboolean method) { return call_static_method<"validateMemberName", jni::ref<java::lang::String>>(name, method); }

protected:

	ConstantUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_CONSTANTUTILS
