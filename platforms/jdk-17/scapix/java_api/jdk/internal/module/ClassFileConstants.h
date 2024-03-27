// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CLASSFILECONSTANTS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CLASSFILECONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ClassFileConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ClassFileConstants>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ClassFileConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CLASSFILECONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CLASSFILECONSTANTS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CLASSFILECONSTANTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::module::ClassFileConstants : public jni::object_base<"jdk/internal/module/ClassFileConstants",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> MODULE() { return get_static_field<"MODULE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SOURCE_FILE() { return get_static_field<"SOURCE_FILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SDE() { return get_static_field<"SDE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MODULE_PACKAGES() { return get_static_field<"MODULE_PACKAGES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MODULE_MAIN_CLASS() { return get_static_field<"MODULE_MAIN_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MODULE_TARGET() { return get_static_field<"MODULE_TARGET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MODULE_HASHES() { return get_static_field<"MODULE_HASHES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MODULE_RESOLUTION() { return get_static_field<"MODULE_RESOLUTION", jni::ref<java::lang::String>>(); }
	static jint ACC_MODULE() { return get_static_field<"ACC_MODULE", jint>(); }
	static jint ACC_OPEN() { return get_static_field<"ACC_OPEN", jint>(); }
	static jint ACC_TRANSITIVE() { return get_static_field<"ACC_TRANSITIVE", jint>(); }
	static jint ACC_STATIC_PHASE() { return get_static_field<"ACC_STATIC_PHASE", jint>(); }
	static jint ACC_SYNTHETIC() { return get_static_field<"ACC_SYNTHETIC", jint>(); }
	static jint ACC_MANDATED() { return get_static_field<"ACC_MANDATED", jint>(); }
	static jint DO_NOT_RESOLVE_BY_DEFAULT() { return get_static_field<"DO_NOT_RESOLVE_BY_DEFAULT", jint>(); }
	static jint WARN_DEPRECATED() { return get_static_field<"WARN_DEPRECATED", jint>(); }
	static jint WARN_DEPRECATED_FOR_REMOVAL() { return get_static_field<"WARN_DEPRECATED_FOR_REMOVAL", jint>(); }
	static jint WARN_INCUBATING() { return get_static_field<"WARN_INCUBATING", jint>(); }


protected:

	ClassFileConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CLASSFILECONSTANTS
