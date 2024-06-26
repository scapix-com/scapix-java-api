// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TYPEPATH_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TYPEPATH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_ { class TypePath; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::TypePath>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/TypePath";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TYPEPATH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TYPEPATH)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TYPEPATH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::TypePath : public jni::object_base<"jdk/internal/org/objectweb/asm/TypePath",
	java::lang::Object>
{
public:

	static jint ARRAY_ELEMENT() { return get_static_field<"ARRAY_ELEMENT", jint>(); }
	static jint INNER_TYPE() { return get_static_field<"INNER_TYPE", jint>(); }
	static jint WILDCARD_BOUND() { return get_static_field<"WILDCARD_BOUND", jint>(); }
	static jint TYPE_ARGUMENT() { return get_static_field<"TYPE_ARGUMENT", jint>(); }

	jint getLength() { return call_method<"getLength", jint>(); }
	jint getStep(jint index) { return call_method<"getStep", jint>(index); }
	jint getStepArgument(jint index) { return call_method<"getStepArgument", jint>(index); }
	static jni::ref<jdk::internal::org::objectweb::asm_::TypePath> fromString(jni::ref<java::lang::String> typePath) { return call_static_method<"fromString", jni::ref<jdk::internal::org::objectweb::asm_::TypePath>>(typePath); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TypePath(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TYPEPATH
