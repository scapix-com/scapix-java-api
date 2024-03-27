// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_TYPEARG_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_TYPEARG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class Signature_TypeArg; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::Signature_TypeArg>
{
	static constexpr fixed_string class_name = "java/lang/classfile/Signature$TypeArg";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_TYPEARG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_TYPEARG)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_TYPEARG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/Signature_RefTypeSig.h>
#include <scapix/java_api/java/lang/classfile/Signature_TypeArg_WildcardIndicator.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::Signature_TypeArg : public jni::object_base<"java/lang/classfile/Signature$TypeArg",
	java::lang::Object>
{
public:

	using WildcardIndicator = Signature_TypeArg_WildcardIndicator;

	jni::ref<java::lang::classfile::Signature_TypeArg_WildcardIndicator> wildcardIndicator() { return call_method<"wildcardIndicator", jni::ref<java::lang::classfile::Signature_TypeArg_WildcardIndicator>>(); }
	jni::ref<java::util::Optional> boundType() { return call_method<"boundType", jni::ref<java::util::Optional>>(); }
	static jni::ref<java::lang::classfile::Signature_TypeArg> of(jni::ref<java::lang::classfile::Signature_RefTypeSig> boundType) { return call_static_method<"of", jni::ref<java::lang::classfile::Signature_TypeArg>>(boundType); }
	static jni::ref<java::lang::classfile::Signature_TypeArg> unbounded() { return call_static_method<"unbounded", jni::ref<java::lang::classfile::Signature_TypeArg>>(); }
	static jni::ref<java::lang::classfile::Signature_TypeArg> extendsOf(jni::ref<java::lang::classfile::Signature_RefTypeSig> boundType) { return call_static_method<"extendsOf", jni::ref<java::lang::classfile::Signature_TypeArg>>(boundType); }
	static jni::ref<java::lang::classfile::Signature_TypeArg> superOf(jni::ref<java::lang::classfile::Signature_RefTypeSig> boundType) { return call_static_method<"superOf", jni::ref<java::lang::classfile::Signature_TypeArg>>(boundType); }
	static jni::ref<java::lang::classfile::Signature_TypeArg> of(jni::ref<java::lang::classfile::Signature_TypeArg_WildcardIndicator> wildcard, jni::ref<java::util::Optional> boundType) { return call_static_method<"of", jni::ref<java::lang::classfile::Signature_TypeArg>>(wildcard, boundType); }

protected:

	Signature_TypeArg(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_SIGNATURE_TYPEARG