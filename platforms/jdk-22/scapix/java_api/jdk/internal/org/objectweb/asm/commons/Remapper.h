// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::commons { class Remapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::commons::Remapper>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/commons/Remapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::commons::Remapper : public jni::object_base<"jdk/internal/org/objectweb/asm/commons/Remapper",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::commons::Remapper> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> mapDesc(jni::ref<java::lang::String> descriptor) { return call_method<"mapDesc", jni::ref<java::lang::String>>(descriptor); }
	jni::ref<java::lang::String> mapType(jni::ref<java::lang::String> internalName) { return call_method<"mapType", jni::ref<java::lang::String>>(internalName); }
	jni::ref<jni::array<java::lang::String>> mapTypes(jni::ref<jni::array<java::lang::String>> internalNames) { return call_method<"mapTypes", jni::ref<jni::array<java::lang::String>>>(internalNames); }
	jni::ref<java::lang::String> mapMethodDesc(jni::ref<java::lang::String> methodDescriptor) { return call_method<"mapMethodDesc", jni::ref<java::lang::String>>(methodDescriptor); }
	jni::ref<java::lang::Object> mapValue(jni::ref<java::lang::Object> value) { return call_method<"mapValue", jni::ref<java::lang::Object>>(value); }
	jni::ref<java::lang::String> mapSignature(jni::ref<java::lang::String> signature, jboolean typeSignature) { return call_method<"mapSignature", jni::ref<java::lang::String>>(signature, typeSignature); }
	jni::ref<java::lang::String> mapAnnotationAttributeName(jni::ref<java::lang::String> descriptor, jni::ref<java::lang::String> name) { return call_method<"mapAnnotationAttributeName", jni::ref<java::lang::String>>(descriptor, name); }
	jni::ref<java::lang::String> mapInnerClassName(jni::ref<java::lang::String> name, jni::ref<java::lang::String> ownerName, jni::ref<java::lang::String> innerName) { return call_method<"mapInnerClassName", jni::ref<java::lang::String>>(name, ownerName, innerName); }
	jni::ref<java::lang::String> mapMethodName(jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor) { return call_method<"mapMethodName", jni::ref<java::lang::String>>(owner, name, descriptor); }
	jni::ref<java::lang::String> mapInvokeDynamicMethodName(jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor) { return call_method<"mapInvokeDynamicMethodName", jni::ref<java::lang::String>>(name, descriptor); }
	jni::ref<java::lang::String> mapRecordComponentName(jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor) { return call_method<"mapRecordComponentName", jni::ref<java::lang::String>>(owner, name, descriptor); }
	jni::ref<java::lang::String> mapFieldName(jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor) { return call_method<"mapFieldName", jni::ref<java::lang::String>>(owner, name, descriptor); }
	jni::ref<java::lang::String> mapPackageName(jni::ref<java::lang::String> name) { return call_method<"mapPackageName", jni::ref<java::lang::String>>(name); }
	jni::ref<java::lang::String> mapModuleName(jni::ref<java::lang::String> name) { return call_method<"mapModuleName", jni::ref<java::lang::String>>(name); }
	jni::ref<java::lang::String> map(jni::ref<java::lang::String> internalName) { return call_method<"map", jni::ref<java::lang::String>>(internalName); }

protected:

	Remapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPER
