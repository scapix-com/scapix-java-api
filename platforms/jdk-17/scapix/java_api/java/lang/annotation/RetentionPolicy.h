// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_RETENTIONPOLICY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_RETENTIONPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::annotation { class RetentionPolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::annotation::RetentionPolicy>
{
	static constexpr fixed_string class_name = "java/lang/annotation/RetentionPolicy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_RETENTIONPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_RETENTIONPOLICY)
#define SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_RETENTIONPOLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::annotation::RetentionPolicy : public jni::object_base<"java/lang/annotation/RetentionPolicy",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::annotation::RetentionPolicy> SOURCE() { return get_static_field<"SOURCE", jni::ref<java::lang::annotation::RetentionPolicy>>(); }
	static jni::ref<java::lang::annotation::RetentionPolicy> CLASS() { return get_static_field<"CLASS", jni::ref<java::lang::annotation::RetentionPolicy>>(); }
	static jni::ref<java::lang::annotation::RetentionPolicy> RUNTIME() { return get_static_field<"RUNTIME", jni::ref<java::lang::annotation::RetentionPolicy>>(); }

	static jni::ref<jni::array<java::lang::annotation::RetentionPolicy>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::annotation::RetentionPolicy>>>(); }
	static jni::ref<java::lang::annotation::RetentionPolicy> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::annotation::RetentionPolicy>>(name); }

protected:

	RetentionPolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_RETENTIONPOLICY
