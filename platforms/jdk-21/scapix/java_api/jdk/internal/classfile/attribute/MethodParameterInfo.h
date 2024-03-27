// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_METHODPARAMETERINFO_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_METHODPARAMETERINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::attribute { class MethodParameterInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::attribute::MethodParameterInfo>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/attribute/MethodParameterInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_METHODPARAMETERINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_METHODPARAMETERINFO)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_METHODPARAMETERINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/reflect/AccessFlag.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::attribute::MethodParameterInfo : public jni::object_base<"jdk/internal/classfile/attribute/MethodParameterInfo",
	java::lang::Object>
{
public:

	jni::ref<java::util::Optional> name() { return call_method<"name", jni::ref<java::util::Optional>>(); }
	jint flagsMask() { return call_method<"flagsMask", jint>(); }
	jni::ref<java::util::Set> flags() { return call_method<"flags", jni::ref<java::util::Set>>(); }
	jboolean has(jni::ref<java::lang::reflect::AccessFlag> flag) { return call_method<"has", jboolean>(flag); }
	static jni::ref<jdk::internal::classfile::attribute::MethodParameterInfo> of(jni::ref<java::util::Optional> name, jint flags) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::MethodParameterInfo>>(name, flags); }
	static jni::ref<jdk::internal::classfile::attribute::MethodParameterInfo> of(jni::ref<java::util::Optional> name, jni::ref<jni::array<java::lang::reflect::AccessFlag>> flags) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::MethodParameterInfo>>(name, flags); }
	static jni::ref<jdk::internal::classfile::attribute::MethodParameterInfo> ofParameter(jni::ref<java::util::Optional> name, jint flags) { return call_static_method<"ofParameter", jni::ref<jdk::internal::classfile::attribute::MethodParameterInfo>>(name, flags); }

protected:

	MethodParameterInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_METHODPARAMETERINFO